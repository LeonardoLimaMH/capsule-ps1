#!/usr/bin/env python3
"""Filtro entre o maspsx e o GNU as: preenche o delay slot do `j $31` como o ASPSX
antigo usado nas bibliotecas PsyQ.

Quando a última instrução antes do retorno é um store em símbolo absoluto
(`sw $r,SIM`, macro de 2 instruções com -G0), o ASPSX das bibliotecas punha a
segunda metade da macro no delay slot:

    lui $at,%hi(SIM) / j $31 / sw $r,%lo(SIM)($at)

O maspsx gera `lui / sw / j / nop`. Só vale para arquivos marcados com `fill` em
config/compilers.txt (ver docs/NOTES.md); o resto do jogo não usa esse montador.
Com --sp (arquivos de config/spfill.txt) também vai para o delay slot a desalocação do
quadro: `addu $sp,$sp,N / j $31 / nop` -> `j $31 / addu $sp,$sp,N`. As bibliotecas do SDK
foram montadas com versões diferentes do ASPSX e só parte delas faz isso (nenhum
arquivo mistura os dois padrões).
Uso: maspsx ... | aspsx_fill.py [--sp] | as ...
"""
import re
import sys

STORE = re.compile(r"^\s*(sw|sh|sb)\s+(\$\w+),\s*([A-Za-z_.$][\w.$]*(?:[+-]\d+)?)(?:\((\$\w+)\))?\s*$")
SPADJ = re.compile(r"^\s*addu\s+\$sp,\$sp,\d+\s*$")
JR = re.compile(r"^\s*j\s+\$31\s*$")
JAL = re.compile(r"^\s*jal\s+[A-Za-z_.$][\w.$]*\s*$")
NOP = re.compile(r"^\s*nop\b")
INSN = re.compile(r"^\s*[a-z][a-z0-9.]*(\s|$)")


def is_insn(line):
    s = line.strip()
    return bool(s) and not s.startswith((".", "#")) and not s.endswith(":") and bool(INSN.match(line))


def fill(lines, sp=False):
    out = list(lines)
    # rótulos usados como destino por alguma instrução (desvios, saltos, tabelas)
    referenced = {r for l in out if is_insn(l) or l.strip().startswith(".word")
                  for r in re.findall(r"\$L\w+", l)}
    i = 0
    while i < len(out):
        m = STORE.match(out[i])
        if m:
            j = i + 1
            label = False
            while j < len(out) and not is_insn(out[j]):
                # rótulo de desvio entre o store e o retorno: outro caminho chega ao j $31
                # sem passar pelo lui, então a instrução não pode ir para o delay slot
                # (só conta rótulo que algum desvio usa; marcadores de escopo $Lb0/$Le1 e
                # rótulos sem referência o ASPSX atravessa)
                lm = re.match(r"^\s*(\$L\w+):", out[j])
                label |= bool(lm) and lm.group(1) in referenced
                j += 1
            # o mesmo vale para o `jal` seguinte e para o store com registrador-base
            # (`sb $r,SIM($b)` -> lui $at / addu $at,$at,$b / ... / sb $r,%lo(SIM)($at))
            if (not label and j + 1 < len(out) and (JR.match(out[j]) or JAL.match(out[j]))
                    and NOP.match(out[j + 1])):
                op, reg, sym, base = m.groups()
                out[i] = f"\t.set\tnoat\n\tlui\t$at,%hi({sym})"
                if base:
                    out[i] += f"\n\taddu\t$at,$at,{base}"
                out[j + 1] = f"\t{op}\t{reg},%lo({sym})($at)\n\t.set\tat"
                i = j + 2
                continue
        m = SPADJ.match(out[i]) if sp else None
        if m:
            # o mesmo ASPSX também leva a desalocação do quadro para o delay slot:
            # addu $sp,$sp,N / j $31 / nop  ->  j $31 / addu $sp,$sp,N
            j = i + 1
            label = False
            while j < len(out) and not is_insn(out[j]):
                lm = re.match(r"^\s*(\$L\w+):", out[j])
                label |= bool(lm) and lm.group(1) in referenced
                j += 1
            if not label and j + 1 < len(out) and JR.match(out[j]) and NOP.match(out[j + 1]):
                out[j + 1] = out[i]
                out[i] = ""
                i = j + 2
                continue
        i += 1
    return out


if __name__ == "__main__":
    sys.stdout.write("\n".join(fill(sys.stdin.read().split("\n"), sp="--sp" in sys.argv[1:])))
