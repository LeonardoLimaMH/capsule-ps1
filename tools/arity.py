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


@functools.lru_cache(maxsize=None)
def arity(func):
    s = asm_files().get(func)
    if s is None:
        return 4
    params, written, after_call = set(), set(), False
    for l in s.read_text(encoding="utf-8", errors="ignore").splitlines():
        m = INSN.search(l)
        if not m:
            if re.match(r"^\s*(jlabel\s+)?\.?L[0-9A-Fa-f_]+:?\s*$", l):
                written = set()  # novo bloco: escritas de outro caminho não valem
            continue
        op, args = m.groups()
        regs = re.findall(r"\$\w+", args)
        srcs, dst = (regs, None) if op in STORES else (regs[1:], regs[0] if regs else None)
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
    return max((ARGS.index(r) + 1 for r in params), default=0)


if __name__ == "__main__":
    for f in sys.argv[1:]:
        print(f, arity(f))
