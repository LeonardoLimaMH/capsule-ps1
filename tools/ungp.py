#!/usr/bin/env python3
"""Tira do acesso via $gp os globais que o original acessa por endereço absoluto.

Com -G8, um global declarado com tamanho conhecido de até 8 bytes (`extern s32 D_X;`) é
lido via $gp; se o original usa `lui/lw %lo(D_X)`, o candidato difere por isso. Os
símbolos com relocação GPREL16 no candidato que não aparecem como %gp_rel no assembly
original (tools/gp_check.py) passam a ser declarados sem tamanho (`extern s32 D_X[];`) e
cada uso vira `(*D_X)`: mesmo valor, acesso absoluto. Grava <saída> se compilar.

Uso (no container): ungp.py <alvo> <função> <entrada.c> <saída.c> [--gcc 2.7.2-psx]
"""
import argparse
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import gp_check  # noqa: E402


def rewrite(code, names):
    for n in names:
        decl = re.compile(rf"(extern\s+[^;()\[\]]*?\b){n}\s*;")
        if not decl.search(code):
            continue
        code = decl.sub(rf"\g<1>{n}[];", code)
        # usos: o nome fora das declarações extern
        out = []
        for line in code.split("\n"):
            if re.search(rf"\bextern\b[^;]*\b{n}\[\]", line):
                out.append(line)
            else:
                out.append(re.sub(rf"(?<![\w.>]){n}\b(?!\s*\[\])", f"(*{n})", line))
        code = "\n".join(out)
    return code


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("out")
    ap.add_argument("--gcc", default="2.7.2-psx")
    a = ap.parse_args()
    try:
        extra = gp_check.check(a.target, a.src, a.gcc)
    except SystemExit:
        sys.exit("não compila")
    if not extra:
        sys.exit("nenhum global a mais via $gp")
    code = rewrite(pathlib.Path(a.src).read_text(encoding="utf-8"), sorted(extra))
    pathlib.Path(a.out).write_text(code, encoding="utf-8", newline="\n")
    print("trocados:", ", ".join(sorted(extra)))


if __name__ == "__main__":
    main()
