#!/usr/bin/env python3
"""perm_prep.py <near.json> <árvore src dos agentes> <saída> [N]: para as N quase-casadas mais perto do original,
grava <saída>/<alvo>/<f>.c com o melhor C do banco + só os tipos/helpers/externs do arquivo do agente que ele usa
(compila sozinho, como o decomp-permuter precisa). Imprime "<alvo> <f> <perfil> <candidato>"."""
import json
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from with_helpers import extract  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parents[2]
near = json.load(open(sys.argv[1]))
tree, out = pathlib.Path(sys.argv[2]), pathlib.Path(sys.argv[3])
limit = int(sys.argv[4]) if len(sys.argv) > 4 else 40
prof = {}
for line in (ROOT / "config" / "compilers.txt").read_text().splitlines():
    p = line.split()
    if len(p) >= 2:
        prof[p[0]] = p[1]
n = 0
for r in near:
    if n >= limit:
        break
    t, f = r["t"], r["f"]
    main_file = next((p for p in sorted((ROOT / "src" / t).glob("*.c"))
                      if re.search(rf'INCLUDE_ASM\("[^"]+", {f}\)', p.read_text(errors="replace"))), None)
    if main_file is None:
        continue
    agent_file = tree / "src" / t / main_file.name
    base = agent_file.read_text(errors="replace") if agent_file.exists() else main_file.read_text(errors="replace")
    src = extract(base + "\n" + r["src"].replace('#include "common.h"', ""), f)
    if not src:
        continue
    d = out / t
    d.mkdir(parents=True, exist_ok=True)
    c = d / f"{f}.c"
    # register T x asm("v0"): o parser do decomp-permuter não aceita; ele procura sem essas fixações
    src = re.sub(r'\s+(?:__)?asm(?:__)?\s*\(\s*"\$?\w+"\s*\)(?=\s*[=;,)])', "", src)
    c.write_text('#include "common.h"\n' + src.replace('#include "common.h"\n', ""), encoding="utf-8", newline="\n")
    print(t, f, prof.get(f"src/{t}/{main_file.name}", "2.7.2-psx"), c)
    n += 1
