#!/usr/bin/env python3
"""candidates.py <matched.json> <árvore src dos agentes> <saída>: para cada função casada no app que ainda é
INCLUDE_ASM no main, grava <saída>/<alvo>/<f>.db.c (C casado do banco) e <f>.tree.c (a função com os
helpers/tipos que ela usa, tirada do arquivo do agente, onde o C do banco pode depender de coisas criadas com
edit_file). Imprime "<alvo> <f>" de cada uma."""
import json
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from with_helpers import extract  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parents[2]
data = json.load(open(sys.argv[1]))
tree, out = pathlib.Path(sys.argv[2]), pathlib.Path(sys.argv[3])
asm = {}
for p in (ROOT / "src").glob("*/*.c"):
    for m in re.finditer(r'INCLUDE_ASM\("[^"]+", (\w+)\)', p.read_text(errors="replace")):
        asm[(p.parent.name, m.group(1))] = p
agent_files = {}
for r in data["matched"]:
    t, f = r["t"], r["f"]
    if (t, f) not in asm:
        continue
    d = out / t
    d.mkdir(parents=True, exist_ok=True)
    if r["src"].strip():
        s = r["src"] if '#include "common.h"' in r["src"] else '#include "common.h"\n' + r["src"]
        (d / f"{f}.db.c").write_text(s, encoding="utf-8", newline="\n")
    if t not in agent_files:
        agent_files[t] = [(p, p.read_text(errors="replace")) for p in sorted((tree / "src" / t).glob("*.c"))]
    for p, s in agent_files[t]:
        if re.search(rf"^[A-Za-z_][^;\n]*\b{f}\s*\([^;]*$", s, re.M):
            r2 = extract(s, f)
            if r2:
                (d / f"{f}.tree.c").write_text('#include "common.h"\n' + r2.replace('#include "common.h"\n', ""),
                                               encoding="utf-8", newline="\n")
                break
    print(t, f)
