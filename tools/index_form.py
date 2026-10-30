#!/usr/bin/env python3
"""Reescreve leituras/escritas em bytes sobre globais na forma de índice de array.

`*(T *)((i * sizeof(T)) + (u8 *)D_X)` (saída de tools/bytearith.py) vira `((T *)D_X)[i]`;
o mesmo para `((s32) (i << 0x10) >> 0xF)` (índice s16 já escalado) e para T de 1 byte com
deslocamento sem escala. Mesmo valor; o GCC gera o endereço como o original costuma ter
(o índice escalado somado à base depois do lui/addiu), o que a forma em bytes não reproduz.

Uso: index_form.py <entrada.c> <saída.c>   (sai com 1 se nada mudou)
"""
import re
import sys

SIZES = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "M2C_UNK": 4}
HEAD = re.compile(r"\*\((\w+) \*\)\(")


def group(code, i):
    """Fim (exclusivo) do grupo de parênteses que abre em code[i]."""
    depth = 0
    for j in range(i, len(code)):
        if code[j] == "(":
            depth += 1
        elif code[j] == ")":
            depth -= 1
            if depth == 0:
                return j + 1
    return -1


def strip(e):
    e = e.strip()
    while e.startswith("(") and group(e, 0) == len(e):
        e = e[1:-1].strip()
    return e


def index_of(lhs, size):
    """Índice i tal que lhs == i * size (em bytes), ou None."""
    e = strip(lhs)
    if size == 1:
        return e
    m = re.fullmatch(r"(.+) \* (0x[0-9A-Fa-f]+|\d+)", e, re.S)
    if m and int(m.group(2), 0) == size and group("(" + m.group(1) + ")", 0) > 0:
        return m.group(1)
    m = re.fullmatch(r"\(s32\) \((.+) << 0x10\) >> (0x[0-9A-Fa-f]+|\d+)", e, re.S)
    if m and (1 << (16 - int(m.group(2), 0))) == size:
        return m.group(1)
    return None


def rewrite(code):
    out, pos = [], 0
    for m in HEAD.finditer(code):
        if m.start() < pos:
            continue
        typ = m.group(1)
        if typ not in SIZES:
            continue
        end = group(code, m.end() - 1)
        inner = code[m.end():end - 1]
        k = re.search(r"\s*\+ \(u8 \*\)(D_[0-9A-F]{8})\s*$", inner)
        if not k:
            continue
        lhs = inner[:k.start()]
        # o + tem de estar no nível de cima da expressão
        if lhs.count("(") != lhs.count(")"):
            continue
        idx = index_of(lhs, SIZES[typ])
        if idx is None:
            continue
        out.append(code[pos:m.start()])
        out.append(f"(({typ} *){k.group(1)})[{idx}]")
        pos = end
    out.append(code[pos:])
    return "".join(out)


def main():
    src, dst = sys.argv[1:3]
    code = open(src, encoding="utf-8").read()
    new = rewrite(code)
    if new == code:
        sys.exit(1)
    open(dst, "w", encoding="utf-8", newline="\n").write(new)


if __name__ == "__main__":
    main()
