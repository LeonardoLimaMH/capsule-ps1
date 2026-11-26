#!/usr/bin/env python3
"""split_rodata.py <alvo> <arquivo original> <novo>...: reparte o subsegmento .rodata de um arquivo C que foi
dividido em TUs (isolate.py / split_tu.py). Cada pedaço gera o próprio .rodata (tabelas de switch, strings);
o trecho [lo, .rodata, original] do YAML vira um subsegmento por pedaço, na ordem do código, com o tamanho
que cada objeto gera. Os objetos já têm que estar compilados (build/src/<alvo>/<arquivo>.c.o).
Sai com erro (sem mexer em nada) se a soma não fechar com o tamanho do trecho original."""
import re
import subprocess
import sys
from pathlib import Path

t, orig, *new = sys.argv[1:]
y_path = Path(f"config/{t}.yaml")
y = y_path.read_text(encoding="utf-8")
rows = list(re.finditer(r"^(\s+)- \[(0x[0-9A-Fa-f]+), (\.?\w+)(?:, (\w+))?\]\n", y, re.M))
host = next((r for r in rows if r.group(3) == ".rodata" and r.group(4) == orig), None)
if host is None:
    print("sem subsegmento .rodata: nada a repartir")
    sys.exit(0)
lo = int(host.group(2), 16)
after = [int(r.group(2), 16) for r in rows if r.start() > host.start()]
hi = after[0] if after else None


def rodata(stem):
    o = Path(f"build/src/{t}/{stem}.c.o")
    if not o.exists():
        sys.exit(f"objeto não compilado: {o}")
    out = subprocess.run(["mips-linux-gnu-readelf", "-SW", str(o)], capture_output=True, text=True).stdout
    total = 0
    for line in out.splitlines():
        m = re.search(r"\]\s+(\.r(?:o)?data[\w.]*)\s+\S+\s+\S+\s+\S+\s+([0-9a-f]+)", line)
        if m:
            total += int(m.group(2), 16)
    return total


# ordem do código: a mesma dos subsegmentos c no YAML
code_order = [r.group(4) for r in rows if r.group(3) == "c"]
own = {r.group(4) for r in rows if r.group(3) == ".rodata"} - {orig}
pieces = sorted([orig, *[n for n in new if n not in own]],
                key=lambda s: code_order.index(s) if s in code_order else 1 << 30)
sizes = {s: rodata(s) for s in pieces}
if hi is not None and sum(sizes.values()) != hi - lo:
    sys.exit(f"soma dos .rodata {sum(sizes.values()):#x} != trecho {hi - lo:#x}: {sizes}")
ind = host.group(1)
at, ins = lo, ""
for s in pieces:
    if sizes[s]:
        ins += f"{ind}- [0x{at:X}, .rodata, {s}]\n"
        at += sizes[s]
y = y[:host.start()] + ins + y[host.end():]
y_path.write_text(y, encoding="utf-8", newline="\n")
print("rodata repartido:", ", ".join(f"{s.split('__')[-1]}={sizes[s]:#x}" for s in pieces))
