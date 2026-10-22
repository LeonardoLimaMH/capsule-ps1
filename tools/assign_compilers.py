#!/usr/bin/env python3
"""Ajusta compiladores e fronteiras de TU usando a evidência de byte-matching.

Evidência por função (em ordem de endereço dentro de cada src/<alvo>/*.c):
  - funções já em C: compilador com que casaram (.cache/auto/<alvo>/<f>.gcc;
    escritas à mão = GCC 2.7.2);
  - funções ainda em INCLUDE_ASM mas já casadas pelo autodecomp: idem.
Uma unidade de tradução tem um único compilador, então:
  - evidência homogênea  -> o arquivo recebe esse compilador;
  - evidência mista      -> com --split, o arquivo é separado em cada troca de
    compilador (a fronteira fica na primeira função com evidência do novo
    compilador; funções sem evidência entre elas ficam com o trecho anterior).

Uso: assign_compilers.py [--split] [--check]
Depois de --split: rm -rf asm && ./run.sh make split && ./run.sh make
"""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from split_tu import set_compiler, split  # noqa: E402
import g0fill  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNC = re.compile(r"^(?:INCLUDE_ASM\(\"[^\"]+\",\s*(\w+)\);|(?!static inline)[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{)", re.M)


def current(key):
    """Compilador atual do arquivo, com o sufixo "+g0fill" se estiver em config/g0fill.txt."""
    suffix = "+g0fill" if g0fill.enabled(ROOT / key) else ""
    cfg = ROOT / "config" / "compilers.txt"
    for l in cfg.read_text(encoding="utf-8").splitlines():
        p = l.split("#")[0].split()
        if len(p) == 2 and p[0] == key:
            return p[1] + suffix
    return "2.7.2-psx" + suffix


def evidence(c, target):
    out = []
    # função já em C: o build (SHA-1) garante que ela casa com o compilador atual do
    # arquivo; o registro .gcc só decide para casamentos ainda não aplicados
    here = current(c.relative_to(ROOT).as_posix())
    for m in FUNC.finditer(c.read_text(encoding="utf-8")):
        f = m.group(1) or m.group(2)
        if f.startswith("__maspsx"):
            continue
        g = ROOT / ".cache" / "auto" / target / f"{f}.gcc"
        if m.group(2):  # já em C
            out.append((f, here))
        elif g.exists():
            out.append((f, g.read_text().strip()))
    return out


def main():
    do_split, check = "--split" in sys.argv, "--check" in sys.argv
    changed = splits = 0
    mixed = []
    for c in sorted((ROOT / "src").rglob("*.c")):
        target = c.relative_to(ROOT / "src").parts[0]
        ev = evidence(c, target)
        kinds = {g for _, g in ev}
        if len(kinds) > 1:
            mixed.append(c)
            if do_split and not check:
                # fronteira em cada troca de compilador
                cur_file, cur_gcc = c.stem, ev[0][1]
                set_compiler(target, cur_file, cur_gcc)
                for f, g in ev[1:]:
                    if g != cur_gcc:
                        new = f"{cur_file.split('__')[0]}__{f[-8:] if f[-8:].isalnum() else f}"
                        split(target, cur_file, new, f, g)
                        splits += 1
                        cur_file, cur_gcc = new, g
            continue
        if kinds:
            want = kinds.pop()
            key = c.relative_to(ROOT).as_posix()
            if want != current(key):
                print(f"{key}: {current(key)} -> {want}")
                changed += 1
                if not check:
                    set_compiler(target, c.stem, want)
    print(f"{changed} arquivos com compilador ajustado; {len(mixed)} com evidência mista"
          + (f"; {splits} novas fronteiras criadas" if do_split else ""))
    sys.exit(1 if (mixed and check) else 0)


if __name__ == "__main__":
    main()
