#!/usr/bin/env python3
"""Quantos argumentos ($a0..$a3) uma função realmente lê, pelo assembly dela.

Usado pelo teste diferencial (--abi) para comparar só os argumentos que a função
chamada usa: o stub registra os 4 registradores, e os que sobram são lixo que a
função nunca lê. Regra conservadora: $aN é parâmetro se alguma leitura dele não
tem escrita de $aN antes, dentro do mesmo bloco (o bloco recomeça a cada rótulo,
então uma escrita num caminho não esconde a leitura de outro). Sem o assembly da
função: 4 argumentos.

Uso: arity.py <função> [...]
"""
import functools
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"\*/\s+([a-z0-9.]+)\s*(.*)$")
STORES = {"sw", "sh", "sb", "swl", "swr", "swc2", "mult", "multu", "div", "divu", "mthi", "mtlo",
          "mtc0", "mtc2", "ctc2", "jr", "jalr", "j", "jal", "b", "beq", "bne", "beqz", "bnez",
          "blez", "bgtz", "bltz", "bgez", "bltzal", "bgezal"}
ARGS = ["$a0", "$a1", "$a2", "$a3"]


@functools.lru_cache(maxsize=None)
def asm_files():
    out = {}
    for s in (ROOT / ".cache" / "fullasm").rglob("*.s"):
        out.setdefault(s.stem, s)
    return out


BRANCHES = {"beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz", "bgez", "b", "j", "bltzal", "bgezal"}
LABEL = re.compile(r"^\s*(?:[gja]label\s+)?(\.?L[0-9A-Fa-f_]+):?\s*$")


def _parse(l):
    m = INSN.search(l)
    if not m:
        return None
    op, args = m.groups()
    regs = re.findall(r"\$\w+", args)
    srcs, dst = (regs, None) if op in STORES else (regs[1:], regs[0] if regs else None)
    return op, args, regs, srcs, dst


def _linear(lines):
    """Regra antiga (blocos lineares): usada quando o fluxo não dá para seguir."""
    params, written, after_call = set(), set(), False
    for l in lines:
        p = _parse(l)
        if p is None:
            if re.match(r"^\s*(jlabel\s+)?\.?L[0-9A-Fa-f_]+:?\s*$", l):
                written = set()  # novo bloco: escritas de outro caminho não valem
            continue
        op, _, _, srcs, dst = p
        for r in srcs:
            if r in ARGS and r not in written:
                params.add(r)
        if dst in ARGS:
            written.add(dst)
        if after_call:
            # o delay slot do jal já passou: daqui em diante $aN não são os de entrada
            written |= set(ARGS)
            after_call = False
        if op == "jal":
            after_call = True
    return params


def _flow(lines):
    """Análise de fluxo: em cada instrução, quais $aN ainda podem ter o valor de
    entrada (por algum caminho desde o início); ler um deles faz dele parâmetro.
    Devolve None se houver salto que não dá para seguir (tabela de saltos)."""
    ins, labels, jlabels = [], {}, []
    for l in lines:
        p = _parse(l)
        if p:
            op, args, regs, srcs, dst = p
            tgt = re.findall(r"\.?L[0-9A-Fa-f_]+", args)
            ins.append((op, srcs, dst, tgt[-1] if tgt else None, regs))
            continue
        lm = LABEL.match(l)
        if lm:
            labels[lm.group(1)] = len(ins)
            if l.strip().startswith("jlabel"):
                jlabels.append(len(ins))  # destino de tabela de saltos
    n = len(ins)
    starts = set(labels.values())
    live_in = [None] * n
    params = set()

    def step(i, live):
        _, srcs, dst, _, _ = ins[i]
        params.update(r for r in srcs if r in live)
        return live - {dst} if dst in live else live

    def flow(k, live, work):
        if k >= n:
            return
        new = live | (live_in[k] or frozenset())
        if live_in[k] is None or new != live_in[k]:
            live_in[k] = new
            work.append(k)

    work = []
    if n:
        live_in[0] = frozenset(ARGS)
        work.append(0)
    while work:
        i = work.pop()
        live = live_in[i]
        while True:
            op, _, _, tgt, regs = ins[i]
            live = step(i, live)
            if op in BRANCHES or op in ("jr", "jal", "jalr"):
                if i + 1 < n:
                    live = step(i + 1, live)  # delay slot
                if op in ("jal", "jalr"):
                    flow(i + 2, frozenset(), work)  # a chamada destrói $a0..$a3
                elif op == "jr":
                    if regs != ["$ra"]:
                        # tabela de saltos: pode ir para qualquer destino marcado pelo splat
                        if not jlabels:
                            return None
                        for k in jlabels:
                            flow(k, live, work)
                else:
                    if tgt not in labels:
                        return None
                    flow(labels[tgt], live, work)
                    if op not in ("j", "b"):
                        flow(i + 2, live, work)
                break
            i += 1
            if i >= n:
                break
            if i in starts:
                flow(i, live, work)
                break
    return params


@functools.lru_cache(maxsize=None)
def arity(func):
    s = asm_files().get(func)
    if s is None:
        return 4
    lines = s.read_text(encoding="utf-8", errors="ignore").splitlines()
    params = _flow(lines)
    if params is None:
        params = _linear(lines)
    return max((ARGS.index(r) + 1 for r in params), default=0)


LOADS = re.compile(r"^(lw|lh|lhu|lb|lbu)$")


@functools.lru_cache(maxsize=None)
def stack_args(func):
    """Quantos argumentos a função lê da pilha (5º em diante): leituras em
    OFF($sp) com OFF >= frame + 0x10, onde frame vem do `addiu $sp, $sp, -N`."""
    s = asm_files().get(func)
    if s is None:
        return 0
    frame, best = 0, -1
    for l in s.read_text(encoding="utf-8", errors="ignore").splitlines():
        m = INSN.search(l)
        if not m:
            continue
        op, args = m.groups()
        fm = re.match(r"\$sp, \$sp, (-?0x[0-9A-Fa-f]+|-?\d+)", args)
        if op == "addiu" and fm and frame == 0 and int(fm.group(1), 0) < 0:
            frame = -int(fm.group(1), 0)
            continue
        lm = re.search(r",\s*(-?0x[0-9A-Fa-f]+|-?\d+)\(\$sp\)", args)
        if LOADS.match(op) and lm:
            off = int(lm.group(1), 0) - frame - 0x10
            if off >= 0:
                best = max(best, off // 4)
    return best + 1


if __name__ == "__main__":
    for f in sys.argv[1:]:
        print(f, arity(f), "+ pilha:", stack_args(f))
