#!/usr/bin/env python3
"""perm_merge.py <candidato.c> <source.c do permuter> <função> <saída.c>: troca, no candidato original (com
#include e tipos), a definição da função pela do resultado do permuter (que é C pré-processado)."""
import pathlib
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from csplit import func_name, items  # noqa: E402

cand, perm, fn, out = sys.argv[1:5]
new = next((it for it in items(pathlib.Path(perm).read_text(errors="replace")) if func_name(it) == fn), None)
if new is None:
    sys.exit(f"{fn} não está em {perm}")
its = items(pathlib.Path(cand).read_text(errors="replace"))
if not any(func_name(it) == fn for it in its):
    sys.exit(f"{fn} não está em {cand}")
s = "\n\n".join((new if func_name(it) == fn else it).strip() for it in its) + "\n"
pathlib.Path(out).write_text(s, encoding="utf-8", newline="\n")
