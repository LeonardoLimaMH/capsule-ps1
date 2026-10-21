#!/usr/bin/env python3
"""Ajusta config/compilers.txt usando a evidência mais forte disponível.

Para cada src/<alvo>/*.c, as funções já escritas em C casaram com um compilador
conhecido (.cache/auto/<alvo>/<função>.gcc, ou GCC 2.7.2 para as escritas à mão).
Se todas concordam, esse passa a ser o compilador do arquivo (sobrepõe a
heurística de estilo do plan_tus.py). Arquivos com evidência mista são listados:
precisam de uma fronteira de TU entre as funções divergentes.

Uso: assign_compilers.py [--check]
"""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from split_tu import set_compiler  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNC_DEF = re.compile(r"^(?!static inline)[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{", re.M)


def current(path):
    cfg = ROOT / "config" / "compilers.txt"
    key = path.relative_to(ROOT).as_posix()
    for l in cfg.read_text(encoding="utf-8").splitlines():
        p = l.split("#")[0].split()
        if len(p) == 2 and p[0] == key:
            return p[1]
    return "2.7.2-psx"


def main():
    changed, mixed = 0, []
    for c in sorted((ROOT / "src").rglob("*.c")):
        target = c.relative_to(ROOT / "src").parts[0]
        ev = {}
        for m in FUNC_DEF.finditer(c.read_text(encoding="utf-8")):
            f = m.group(1)
            if f.startswith("__maspsx"):
                continue
            g = ROOT / ".cache" / "auto" / target / f"{f}.gcc"
            ev[f] = g.read_text().strip() if g.exists() else "2.7.2-psx"
        kinds = set(ev.values())
        if len(kinds) > 1:
            mixed.append((c.relative_to(ROOT).as_posix(), ev))
            continue
        if kinds:
            want = kinds.pop()
            if want != current(c):
                changed += 1
                if "--check" not in sys.argv:
                    set_compiler(target, c.stem, want)
                print(f"{c.relative_to(ROOT).as_posix()}: {current(c)} -> {want}")
    for path, ev in mixed:
        print(f"MISTO {path}: {ev}")
    print(f"{changed} arquivos ajustados, {len(mixed)} com evidência mista")
    sys.exit(1 if mixed else 0)


if __name__ == "__main__":
    main()
