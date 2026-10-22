#!/usr/bin/env python3
"""Filtro entre o maspsx e o GNU as: preenche o delay slot do `j $31` como o ASPSX
antigo usado nas bibliotecas PsyQ.

Quando a última instrução antes do retorno é um store em símbolo absoluto
(`sw $r,SIM`, macro de 2 instruções com -G0), o ASPSX das bibliotecas punha a
segunda metade da macro no delay slot:

    lui $at,%hi(SIM) / j $31 / sw $r,%lo(SIM)($at)

O maspsx gera `lui / sw / j / nop`. Só vale para arquivos marcados com `fill` em
config/compilers.txt (ver docs/NOTES.md); o resto do jogo não usa esse montador.
Uso: maspsx ... | aspsx_fill.py | as ...
"""
import re
import sys

STORE = re.compile(r"^\s*(sw|sh|sb)\s+(\$\w+),\s*([A-Za-z_.$][\w.$]*(?:[+-]\d+)?)\s*$")
JR = re.compile(r"^\s*j\s+\$31\s*$")
NOP = re.compile(r"^\s*nop\b")
INSN = re.compile(r"^\s*[a-z][a-z0-9.]*(\s|$)")


def is_insn(line):
    s = line.strip()
    return bool(s) and not s.startswith((".", "#")) and not s.endswith(":") and bool(INSN.match(line))


def fill(lines):
    out = list(lines)
    i = 0
    while i < len(out):
        m = STORE.match(out[i])
        if m:
            j = i + 1
            while j < len(out) and not is_insn(out[j]):
                j += 1
            if j + 1 < len(out) and JR.match(out[j]) and NOP.match(out[j + 1]):
                op, reg, sym = m.groups()
                out[i] = f"\t.set\tnoat\n\tlui\t$at,%hi({sym})"
                out[j + 1] = f"\t{op}\t{reg},%lo({sym})($at)\n\t.set\tat"
                i = j + 2
                continue
        i += 1
    return out


if __name__ == "__main__":
    sys.stdout.write("\n".join(fill(sys.stdin.read().split("\n"))))
