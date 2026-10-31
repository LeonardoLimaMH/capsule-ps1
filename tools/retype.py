#!/usr/bin/env python3
"""Procura o tipo inteiro de cada variável local que aproxima o compilado do original.

O m2c escolhe o tipo das temporárias pela instrução que as produz (`u16 temp_a0` de um
lhu) e põe casts nos usos (`(s16) temp_a0`); o original muitas vezes declarava outro tipo
e o GCC estende o valor em outro ponto. Para cada declaração local `T nome;`, testa os
outros tipos inteiros (tirando os casts `(novo tipo) nome`, que ficam redundantes) e fica,
de forma gulosa, com a troca de menor diferença (tools/align_diff.py). Grava <saída> se
melhorou.

Uso (no container): retype.py <alvo> <função> <entrada.c> <saída.c> [--gcc X] [--g0fill] [--spfill]
"""
import argparse
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from trimargs import score  # noqa: E402

TYPES = ["s8", "u8", "s16", "u16", "s32", "u32"]
DECL = re.compile(r"^(\s+)(s8|u8|s16|u16|s32|u32) (\w+);$", re.M)


def parameter_variants(code, func):
    """Change one scalar integer parameter in the named definition only.

    This is a codegen search, not a proof that narrowing an ABI type is safe.
    Keep body casts intact; accept a result only after the full byte comparison.
    Pointer, array and callback parameters are deliberately excluded.
    """
    signature = re.search(r"\b" + re.escape(func) + r"\s*\(([^()]*)\)\s*\{", code)
    if not signature:
        return
    for param in re.finditer(r"(?:^|,)\s*(s8|u8|s16|u16|s32|u32)\s+\w+\s*(?=,|$)",
                             signature.group(1)):
        start = signature.start(1) + param.start(1)
        end = signature.start(1) + param.end(1)
        for new in TYPES:
            if new != param.group(1):
                yield code[:start] + new + code[end:]


def variants(code, func=None):
    for m in DECL.finditer(code):
        indent, old, name = m.groups()
        for new in TYPES:
            if new == old:
                continue
            body = code[:m.start()] + f"{indent}{new} {name};" + code[m.end():]
            yield re.sub(rf"\({new}\) {name}\b", name, body)
    if func is not None:
        yield from parameter_variants(code, func)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("out")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true")
    ap.add_argument("--spfill", action="store_true")
    ap.add_argument("--parameters", action="store_true",
                    help="also search scalar integer parameter types (requires ABI review)")
    a = ap.parse_args()
    code = pathlib.Path(a.src).read_text(encoding="utf-8")
    best = score(a.target, a.func, code, a)
    if best is None:
        sys.exit("não compila")
    start = best
    for _ in range(16):
        if not best:
            break
        found = None
        for cand in variants(code, a.func if a.parameters else None):
            s = score(a.target, a.func, cand, a)
            if s is not None and s < best and (found is None or s < found[0]):
                found = (s, cand)
        if not found:
            break
        best, code = found
    print(f"{a.func}: {start} -> {best}")
    if best < start:
        pathlib.Path(a.out).write_text(code, encoding="utf-8", newline="\n")
    else:
        sys.exit(1)


if __name__ == "__main__":
    main()
