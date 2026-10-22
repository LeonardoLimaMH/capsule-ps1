#!/usr/bin/env python3
"""Separa arquivos-fonte onde um objeto original terminava com nops de preenchimento.

O .text dos objetos do SDK é completado com nops até múltiplo de 16 bytes. Quando
a última função de um objeto está em INCLUDE_ASM os nops vêm do .s; quando ela
vira C, o compilador não os gera. No fim de um arquivo-fonte o `ldpad.py` repõe o
preenchimento; no MEIO de um arquivo (vários objetos que o splat juntou) não há
como, então o arquivo é separado logo depois da função (o novo arquivo começa na
função seguinte e herda o compilador). Depois disso o `ldpad.py` cuida do resto.

Evidência de fim de objeto: o .s da função lista mais palavras que o tamanho do
cabeçalho `nonmatching` do splat (os nops finais não entram nesse tamanho).

Uso: pad_split.py <alvo> [...] [--dry]
Depois: rm -rf asm && ./run.sh make split && ./run.sh make
"""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from split_tu import FUNC_START, split  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
HEADER = re.compile(r"^nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", re.M)
WORD = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/")


def padded(target, func):
    """True se o .s original da função termina com preenchimento além do seu tamanho."""
    s = next((ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob(f"{func}.s"), None)
    if s is None:
        return False
    t = s.read_text(encoding="utf-8")
    h, words = HEADER.search(t), WORD.findall(t)
    return bool(h and words) and len(words) * 4 > int(h.group(1), 16)


def compiler_of(target, name):
    for l in (ROOT / "config" / "compilers.txt").read_text(encoding="utf-8").splitlines():
        p = l.split()
        if len(p) == 2 and p[0] == f"src/{target}/{name}.c":
            return p[1]
    return None


def plan(target):
    """(arquivo, novo, primeira_função) para cada fronteira de objeto no meio de um arquivo."""
    out = []
    for c in sorted((ROOT / "src" / target).glob("*.c")):
        funcs = [(m.group(2) or m.group(3), m.group(2) is None) for m in FUNC_START.finditer(c.read_text(encoding="utf-8"))]
        for (f, is_c), (nxt, _) in zip(funcs, funcs[1:]):
            if is_c and padded(target, f):
                addr = re.search(r"([0-9A-F]{8})$", nxt)
                new = f"{c.stem.split('__')[0]}__{addr.group(1) if addr else nxt}"
                out.append((c.stem, new, nxt))
    return out


def main():
    dry = "--dry" in sys.argv
    for target in [a for a in sys.argv[1:] if not a.startswith("--")]:
        todo = plan(target)
        # de trás para frente: cada fronteira ainda está no arquivo original quando é separada
        for file, new, first in reversed(todo):
            print(f"{target}: {file} -> {new} a partir de {first}")
            if not dry:
                split(target, file, new, first, compiler_of(target, file))
        print(f"{target}: {len(todo)} fronteiras de objeto")


if __name__ == "__main__":
    main()
