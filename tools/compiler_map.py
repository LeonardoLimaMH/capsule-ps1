#!/usr/bin/env python3
"""Classifica funções pelo compilador provável, a partir de assinaturas de codegen.

  GCC 2.8.x : epílogo "jr $ra" com "addiu $sp,$sp,N" no delay slot
  GCC 2.7.2 : epílogo "addiu $sp,$sp,N ; jr $ra ; nop"
Funções folha sem quadro de pilha não são classificadas (?).
Agrupa sequências contíguas para sugerir regiões (unidades de tradução).

Uso: compiler_map.py <alvo> [--regions]
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
LINE = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/\s+(\S+)\s*(.*)")


def classify(path):
    ins = []
    for l in path.read_text(encoding="utf-8").splitlines():
        m = LINE.search(l)
        if m:
            ins.append((int(m.group(1), 16), m.group(3), m.group(4)))
    kinds = set()
    for i, (a, op, args) in enumerate(ins):
        if op == "jr" and args.strip() == "$ra" and i + 1 < len(ins):
            nxt = ins[i + 1]
            prev = ins[i - 1] if i else None
            if nxt[1] == "addiu" and nxt[2].startswith("$sp, $sp,"):
                kinds.add("2.8")
            elif nxt[1] == "nop" and prev and prev[1] == "addiu" and prev[2].startswith("$sp, $sp,"):
                kinds.add("2.7")
    if len(kinds) == 1:
        return kinds.pop(), ins[0][0] if ins else 0
    return ("mix" if kinds else "?"), ins[0][0] if ins else 0


def main():
    t = sys.argv[1]
    lib = set()
    p = ROOT / "config" / f"symbols.{t}.psyq.txt"
    if p.exists():
        lib = {l.split("=")[0].strip() for l in p.read_text(encoding="utf-8").splitlines() if "=" in l}
    rows = []
    for s in (ROOT / "asm" / t / "nonmatchings").rglob("*.s"):
        k, addr = classify(s)
        rows.append((addr, s.stem, "SDK" if s.stem in lib else k))
    rows.sort()
    if "--regions" in sys.argv:
        regions = []
        for addr, name, k in rows:
            if k in ("?", "mix"):
                if regions:
                    regions[-1][3] += 1
                continue
            if regions and regions[-1][2] == k:
                regions[-1][1] = addr
                regions[-1][3] += 1
            else:
                regions.append([addr, addr, k, 1])
        for a, b, k, n in regions:
            print(f"{a:08X}-{b:08X}  {k:4s} {n:4d} funções")
    else:
        from collections import Counter
        print(Counter(k for _, _, k in rows))


if __name__ == "__main__":
    main()
