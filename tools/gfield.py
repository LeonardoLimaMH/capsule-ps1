#!/usr/bin/env python3
"""Reescreve acessos a campos de globais com M2C_GFIELD (include/m2c.h).

`M2C_FIELD(D_X, T *, off)` e `*(T *)(D_X + off)` viram `M2C_GFIELD(D_X, T, off)`: pela
struct, o GCC deixa o deslocamento na instrução de acesso, como no original, em vez de
somá-lo ao símbolo. Grava <saída> se algo mudou.

Uso: gfield.py <entrada.c> <saída.c>
"""
import re
import sys

FIELD = re.compile(r"M2C_FIELD\(\s*(D_[0-9A-F]{8})\s*,\s*([\w ]+?)\s*\*\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*\)")
CAST = re.compile(r"\*\s*\(\s*([\w ]+?)\s*\*\s*\)\s*\(\s*(D_[0-9A-F]{8})\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)")


# `(x * 4) + D_X` do m2c com D_X já de elementos de 4 bytes escala o índice duas vezes
SCALED = re.compile(r"\(((?:[^()]|\([^()]*\))+?) \* ([24])\) \+ (D_[0-9A-F]{8})\b")
SIZES = {"M2C_UNK": 4, "s32": 4, "u32": 4, "M2C_UNK32": 4, "s16": 2, "u16": 2, "M2C_UNK16": 2}


def rewrite(code):
    new = FIELD.sub(lambda m: f"M2C_GFIELD({m.group(1)}, {m.group(2)}, {m.group(3)})", code)
    new = CAST.sub(lambda m: f"M2C_GFIELD({m.group(2)}, {m.group(1)}, {m.group(3)})", new)
    decl = {n: SIZES.get(t) for t, n in re.findall(r"extern\s+(\w+)\s+(D_[0-9A-F]{8})\s*\[\]", new)}

    def scaled(m):
        if decl.get(m.group(3)) != int(m.group(2)):
            return m.group(0)
        return f"({m.group(3)} + ({m.group(1)}))"
    return SCALED.sub(scaled, new)


def main():
    src, out = sys.argv[1:3]
    code = open(src, encoding="utf-8").read()
    new = rewrite(code)
    if new == code:
        sys.exit(1)
    open(out, "w", encoding="utf-8", newline="\n").write(new)


if __name__ == "__main__":
    main()
