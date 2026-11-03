#!/usr/bin/env python3
"""Devolve funções C que não casam ao INCLUDE_ASM original, num arquivo-fonte.

Usado ao importar commits do decomp.anything: o app commita também mudanças de structs e
tipos, e com elas pode ir o C de uma função ainda em andamento. Antes de integrar, cada
função C dos arquivos alterados é conferida (.cache/tmp/funccmp2.py ou o build) e as que
não casam voltam ao assembly com este script.

Uso: revert_to_asm.py <src/alvo/arquivo.c> <função> [<função>...]
"""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import split_tu  # noqa: E402


def main():
    path = pathlib.Path(sys.argv[1])
    funcs = sys.argv[2:]
    text = path.read_text(encoding="utf-8")
    target = path.parts[-2]
    for f in funcs:
        m = next((m for m in split_tu.FUNC_START.finditer(text) if m.group(3) == f), None)
        if m is None:
            print(f"{f}: não está em C em {path}")
            continue
        i, d = text.index("{", m.end() - 1), 0
        for j in range(i, len(text)):
            d += {"{": 1, "}": -1}.get(text[j], 0)
            if d == 0:
                break
        text = text[:m.start()] + f'INCLUDE_ASM("asm/{target}/nonmatchings/{path.stem}", {f});' + text[j + 1:]
        print(f"{f}: devolvida ao assembly")
    path.write_text(text, encoding="utf-8", newline="\n")


if __name__ == "__main__":
    main()
