#!/usr/bin/env python3
"""Detecta funções escritas originalmente em assembly (que nenhum C compila igual).

Só sinais certos contam, porque uma função C classificada como assembly nunca
seria trabalhada:
  - instruções de coprocessador que compiladores C não emitem: COP0 (mfc0,
    mtc0, rfe...) e COP2/GTE (mfc2, mtc2, cfc2, ctc2, lwc2, swc2 e comandos GTE).
    No PsyQ, a libgte e as rotinas de sistema são escritas em assembly;
  - a função não termina num salto incondicional + delay slot (o código
    "continua" na próxima: um ponto de entrada extra em código escrito à mão);
  - o primeiro bloco lê um registrador temporário (at, v0, v1, t0-t9, k0, k1)
    antes de escrevê-lo: código compilado recebe argumentos só em a0-a3.
Ideia inspirada no decomp.wtf (handwritten.py), implementada aqui do zero.

Uso (no container, após tools/full_asm.py):
  handwritten.py [alvo...]     # grava config/handwritten.<alvo>.txt
"""
import pathlib
import re
import sys

import rabbitizer

ROOT = pathlib.Path(__file__).resolve().parent.parent
LINE = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/")
TEMPS = {1, 2, 3, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27}
REGN = {1: "at", 2: "v0", 3: "v1", 8: "t0", 9: "t1", 10: "t2", 11: "t3", 12: "t4", 13: "t5",
        14: "t6", 15: "t7", 24: "t8", 25: "t9", 26: "k0", 27: "k1"}
COP_NAMES = {"mfc0", "mtc0", "rfe", "eret", "tlbr", "tlbwi", "tlbwr", "tlbp",
             "mfc2", "mtc2", "cfc2", "ctc2", "lwc2", "swc2"}


def reg(x):
    return int(getattr(x, "value", x))


def reason(words, vram):
    # nops finais são preenchimento de alinhamento entre objetos, não código
    # (o delay slot do salto final também pode ser nop: some junto, e o salto
    # passa a ser a última instrução)
    while len(words) > 1 and words[-1] == 0:
        words = words[:-1]
    ins = [rabbitizer.Instruction(w, vram=vram + 4 * i) for i, w in enumerate(words)]
    for i in ins:
        name = i.getOpcodeName().lower()
        if name in COP_NAMES or (i.getRaw() >> 26) in (0x10, 0x12) and not i.isNop():
            return f"coprocessador ({name})"
        # syscall/break que o compilador não gera (break 6/7 são as verificações de
        # divisão por zero e estouro que o GCC/ASPSX emitem em código C comum)
        raw = i.getRaw()
        if name == "syscall" or (name == "break" and not ((raw >> 16) & 0x3FF in (6, 7) and (raw >> 6) & 0x3FF == 0)):
            return f"instrução {name} (C não a emite)"
    # trampolim de serviço da BIOS: li $t2, 0xA0/0xB0/0xC0; jr $t2; li $t1, N
    # (o número do serviço vai em $t1, coisa que C não expressa)
    if (len(ins) >= 3 and words[0] >> 16 == 0x240A and (words[0] & 0xFFFF) in (0xA0, 0xB0, 0xC0)
            and words[1] == 0x01400008 and words[2] >> 16 == 0x2409):
        return f"trampolim da BIOS ({words[0] & 0xFFFF:#04x}, serviço {words[2] & 0xFFFF:#04x})"

    def ends(i):
        return i.hasDelaySlot() and (i.isReturn() or i.isJrNotRa() or i.isUnconditionalBranch()
                                     or (i.isJump() and not i.doesLink()))
    if not (ends(ins[-1]) or (len(ins) > 1 and ends(ins[-2]))):
        return "não termina em salto (continua na próxima função)"
    written = set()
    for k, i in enumerate(ins):
        reads = []
        if i.readsRs():
            reads.append(reg(i.rs))
        if i.readsRt():
            reads.append(reg(i.rt))
        if i.readsRd():
            reads.append(reg(i.rd))
        for r in reads:
            if r in TEMPS and r not in written:
                return f"lê {REGN[r]} antes de escrevê-lo"
        for cond, field in ((i.modifiesRt(), "rt"), (i.modifiesRd(), "rd"), (i.modifiesRs(), "rs")):
            if cond:
                written.add(reg(getattr(i, field)))
        if i.doesLink():
            written.add(31)
        if i.isBranch() or i.isJump():
            # inclui o delay slot e para: só o primeiro bloco interessa
            if k + 1 < len(ins):
                d = ins[k + 1]
                for cond, field in ((d.readsRs(), "rs"), (d.readsRt(), "rt")):
                    r = reg(getattr(d, field)) if cond else 0
                    if r in TEMPS and r not in written:
                        return f"lê {REGN[r]} antes de escrevê-lo"
            break
    return ""


def scan(target):
    out = []
    for s in sorted((ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob("*.s")):
        words, vram = [], None
        for l in s.read_text(encoding="utf-8").splitlines():
            m = LINE.search(l)
            if m:
                vram = vram or int(m.group(1), 16)
                words.append(int.from_bytes(bytes.fromhex(m.group(2)), "little"))
        if words:
            why = reason(words, vram)
            if why:
                out.append((vram, s.stem, len(words) * 4, why))
    out.sort()
    lines = ["# Funções escritas em assembly no original (tools/handwritten.py)",
             "# função  tamanho  motivo"]
    lines += [f"{n} {sz:#x} {why}" for _, n, sz, why in out]
    (ROOT / "config" / f"handwritten.{target}.txt").write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"{target}: {len(out)} funções em assembly ({sum(x[2] for x in out):#x} bytes)")


def load(target):
    p = ROOT / "config" / f"handwritten.{target}.txt"
    if not p.exists():
        return {}
    return {l.split()[0]: l.split(None, 2)[2] for l in p.read_text(encoding="utf-8").splitlines()
            if l and not l.startswith("#")}


if __name__ == "__main__":
    for t in sys.argv[1:] or ["yuugi", "slpm", "chess", "raise", "etc"]:
        scan(t)
