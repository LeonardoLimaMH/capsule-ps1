#!/usr/bin/env python3
"""Diferença por alinhamento entre o assembly original e o compilado de um C candidato.

Ideia adaptada do align_functions.py do projeto Yu-Gi-Oh! Forbidden Memories Recompiled
(MIT): o diff posicional do match.py se perde quando falta ou sobra uma instrução (tudo
depois "difere"). Aqui as duas sequências são alinhadas pelo mnemônico e cada diferença é
classificada, para orientar a próxima transformação do C:

  estrutura   instruções inseridas/faltando (fluxo, temporários, expressões)
  largura     lh/lhu, lb/lbu, sra/srl... trocados: tipo (s16/u16, s8/u8) errado no C
  registrador mesma instrução com outros registradores: alocação (bom alvo do permuter)
  imediato    mesma instrução e registradores, constante/deslocamento diferente
  ordem       a mesma instrução sobra de um lado e falta do outro: escalonamento/ordem das
              expressões (troca de ordem no C, permuter)
  pilha       tamanho do quadro diferente (variáveis locais, registradores salvos)
Campos de relocação (jal, %hi/%lo, %gp_rel) não contam como diferença.

Uso (no container):
  align_diff.py <alvo> <função> <arquivo.c> [--gcc 2.7.2-psx] [--g0fill] [-v]
  align_diff.py --batch [--limit N]   funções da varredura de perfis (.cache/sweep/results.tsv)
                                      que não casaram, com o C de equiv/, da mais próxima
"""
import argparse
import contextlib
import difflib
import io
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
REG = re.compile(r"\$\w+")
WIDTH = {frozenset(p) for p in (("lh", "lhu"), ("lb", "lbu"), ("sra", "srl"), ("srav", "srlv"),
                                 ("slt", "sltu"), ("slti", "sltiu"), ("div", "divu"), ("mult", "multu"),
                                 ("bgez", "bgtz"), ("blez", "bltz"))}


def decode(words, vram, masks=None):
    out = []
    for i, w in enumerate(words):
        text = match.dis(w, vram + 4 * i)
        op = text.split()[0] if text.split() else "?"
        regs = tuple(REG.findall(text))
        rest = REG.sub("", text[len(op):])
        reloc = masks is not None and masks[i] != 0xFFFFFFFF
        out.append((op, regs, rest, reloc, text))
    return out


def frame(ins):
    for op, regs, rest, _, _ in ins[:4]:
        if op == "addiu" and regs[:2] == ("$sp", "$sp"):
            return rest.strip(", ")
    return None


def compare(target, func, src, gcc="2.7.2-psx", g0fill=False, spfill=None):
    ow, vram = match.original(target, func)
    with contextlib.redirect_stderr(io.StringIO()):
        cw, masks = match.compiled(match.compile_c(src, gcc, "-O2 -G8", g0fill, target, spfill), func)
    o, c = decode(ow, vram), decode(cw, vram, masks)
    # o original pode terminar com nops de alinhamento
    while o and o[-1][0] == "nop" and len(o) > len(c):
        o.pop()
    sm = difflib.SequenceMatcher(None, [x[0] for x in o], [x[0] for x in c], autojunk=False)
    kinds = {"estrutura": 0, "largura": 0, "registrador": 0, "imediato": 0, "ordem": 0}
    notes = []
    gone, extra = [], []  # instruções só do original / só do compilado
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal":
            for a, b in zip(o[i1:i2], c[j1:j2]):
                if a[1] != b[1]:
                    kinds["registrador"] += 1
                    notes.append(f"  reg   {a[4]:<40} | {b[4]}")
                elif a[2] != b[2] and not b[3]:
                    kinds["imediato"] += 1
                    notes.append(f"  imm   {a[4]:<40} | {b[4]}")
        elif tag == "replace" and i2 - i1 == j2 - j1:
            for a, b in zip(o[i1:i2], c[j1:j2]):
                k = "largura" if frozenset((a[0], b[0])) in WIDTH else "estrutura"
                kinds[k] += 1
                notes.append(f"  {k[:5]:<5} {a[4]:<40} | {b[4]}")
        else:
            gone += o[i1:i2]
            extra += c[j1:j2]
            for a in o[i1:i2]:
                notes.append(f"  -     {a[4]}")
            for b in c[j1:j2]:
                notes.append(f"  +     {'':<40} | {b[4]}")
    # pares iguais (mnemônico e registradores) de um lado e do outro são só reordenação
    left = list(extra)
    for a in gone:
        hit = next((b for b in left if b[0] == a[0] and b[1] == a[1]), None)
        if hit is not None:
            left.remove(hit)
            kinds["ordem"] += 1
        else:
            kinds["estrutura"] += 1
    kinds["estrutura"] += len(left)
    fo, fc = frame(o), frame(c)
    pilha = fo != fc
    total = sum(kinds.values()) + (1 if pilha else 0)
    return {"total": total, "kinds": kinds, "pilha": (fo, fc) if pilha else None,
            "n": (len(o), len(c)), "notes": notes}


def summary(r):
    k = r["kinds"]
    parts = [f"{n} {name}" for name, n in k.items() if n]
    if r["pilha"]:
        parts.append(f"pilha {r['pilha'][0]} vs {r['pilha'][1]}")
    return f"{r['total']:4} dif. ({r['n'][0]} vs {r['n'][1]} instr.): " + (", ".join(parts) or "idêntico")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target", nargs="?")
    ap.add_argument("func", nargs="?")
    ap.add_argument("src", nargs="?")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true")
    ap.add_argument("--spfill", action="store_true")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("--batch", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    a = ap.parse_args()
    if not a.batch:
        r = compare(a.target, a.func, a.src, a.gcc, a.g0fill, a.spfill or None)
        print(summary(r))
        if a.v:
            print("\n".join(r["notes"]))
        return
    rows = []
    res = ROOT / ".cache" / "sweep" / "results.tsv"
    for line in res.read_text(encoding="utf-8").splitlines():
        t, f, status, prof = line.split("\t")[:4]
        if status != "DIFERENTE":
            continue
        rows.append((t, f, prof))
    if a.limit:
        rows = rows[:a.limit]
    out = []
    for t, f, prof in rows:
        gcc, _, extra = prof.partition("+")
        try:
            r = compare(t, f, ROOT / "equiv" / t / f"{f}.c", gcc, extra == "g0fill")
        except SystemExit:
            continue
        out.append((r["total"], t, f, prof, summary(r)))
        print(f"{t}:{f} {prof} {summary(r)}", flush=True)
    path = ROOT / ".cache" / "sweep" / "align.tsv"
    path.write_text("".join(f"{n}\t{t}\t{f}\t{p}\t{s}\n" for n, t, f, p, s in sorted(out)), encoding="utf-8")
    print(f"{len(out)} funções; ranking em {path.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
