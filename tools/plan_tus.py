#!/usr/bin/env python3
"""Planeja e aplica a separação de um binário em unidades de tradução (TUs).

Fronteiras (sempre em início de função), combinando:
  1. conflitos de $gp: conjunto mínimo de fronteiras que separa toda função
     que acessa um global via $gp de toda função que o acessa via %hi/%lo;
  2. ilhas de compilador: troca entre estilo GCC 2.7.2 e 2.8.x
     (tools/compiler_map.py; funções sem assinatura ficam com o trecho anterior);
  3. objetos do SDK (config/psyq_objs.<alvo>.txt, >= 0x40 bytes): início e fim.
Cada TU recebe o compilador majoritário de suas funções (config/compilers.txt).

A separação não altera bytes; depois de aplicar:
  rm -rf asm && ./run.sh make split && ./run.sh make

Uso:
  plan_tus.py <alvo>            # mostra o plano
  plan_tus.py <alvo> --apply    # aplica (src/, config/<alvo>.yaml, config/compilers.txt)
"""
import argparse
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from split_tu import set_compiler, split  # noqa: E402
from tu_boundaries import GP, functions, sym_addrs  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
BASE = {"yuugi": "main", "slpm": "loader", "chess": "chess", "raise": "raise", "etc": "etc"}
LOADS = re.compile(r"\b(?:lw|lh|lhu|lb|lbu|sw|sh|sb)\s+\$\w+, %lo\((\w+)\)")


def gp_boundaries(target, funcs):
    gp = GP.get(target, 0x80078B6C)
    addrs = sym_addrs(target)
    modes = {}
    for addr, name, text, _ in funcs:
        for s in set(re.findall(r"%gp_rel\((\w+)\)", text)):
            modes.setdefault(s, ([], []))[0].append(addr)
        for s in set(LOADS.findall(text)):
            sa = addrs.get(s)
            if sa is not None and gp - 0x8000 <= sa < gp + 0x8000:
                modes.setdefault(s, ([], []))[1].append(addr)
    intervals = sorted(((min(g, b), max(g, b)) for g_list, b_list in modes.values()
                        for g in g_list for b in b_list if g != b), key=lambda x: x[1])
    starts = [f[0] for f in funcs]
    chosen = set()
    for lo, hi in intervals:
        if not any(lo < c <= hi for c in chosen):
            chosen.add(max(f for f in starts if lo < f <= hi))
    return chosen, len(intervals)


def style_boundaries(funcs):
    out, prev = set(), None
    for addr, _, _, kind in funcs:
        if kind not in ("2.7", "2.8"):
            continue
        if prev is not None and kind != prev:
            out.add(addr)
        prev = kind
    return out


def sdk_objects(target):
    p = ROOT / "config" / f"psyq_objs.{target}.txt"
    objs = []
    if p.exists():
        for l in p.read_text(encoding="utf-8").splitlines():
            if l.startswith("0x"):
                b, e, obj, _ = l.split()
                if int(e, 16) - int(b, 16) >= 0x40:
                    objs.append((int(b, 16), int(e, 16), obj))
    return objs


def plan(target):
    funcs = functions(target)
    # remove duplicatas (mesma função em duas pastas de nonmatchings) mantendo a ordem
    seen, uniq = set(), []
    for f in funcs:
        if f[1] not in seen:
            seen.add(f[1])
            uniq.append(f)
    funcs = uniq
    starts = {f[0]: f[1] for f in funcs}
    gp_b, npairs = gp_boundaries(target, funcs)
    st_b = style_boundaries(funcs)
    objs = sdk_objects(target)
    sdk_b = {b for b, e, _ in objs if b in starts} | {e for b, e, _ in objs if e in starts}
    bounds = sorted((gp_b | st_b | sdk_b) - {funcs[0][0]})
    obj_at = {b: obj for b, e, obj in objs}
    segs = []
    edges = [funcs[0][0]] + bounds + [0xFFFFFFFF]
    for i in range(len(edges) - 1):
        lo, hi = edges[i], edges[i + 1]
        members = [f for f in funcs if lo <= f[0] < hi]
        k27 = sum(f[3] == "2.7" for f in members)
        k28 = sum(f[3] == "2.8" for f in members)
        gcc = "2.8.1-psx" if k28 > k27 else "2.7.2-psx"
        if i == 0:
            name = BASE[target]
        elif lo in obj_at:
            lib, obj = obj_at[lo].split("/")
            name = f"sdk_{lib.lower()}_{obj.lower().replace('.obj', '')}"
        else:
            name = f"{BASE[target]}_{lo:08X}"
        why = ",".join(w for w, s in (("gp", gp_b), ("estilo", st_b), ("sdk", sdk_b)) if lo in s) or "início"
        segs.append((lo, starts[lo], name, gcc, len(members), why))
    return segs, npairs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    segs, npairs = plan(a.target)
    print(f"{a.target}: {len(segs)} unidades de tradução ({npairs} pares de conflito de $gp)")
    for lo, first, name, gcc, n, why in segs:
        print(f"  {lo:08X} {name:<34} {gcc:<10} {n:4d} funções  [{why}]")
    if not a.apply:
        return
    current = segs[0][2]
    set_compiler(a.target, current, segs[0][3])
    for lo, first, name, gcc, n, why in segs[1:]:
        split(a.target, current, name, first, gcc)
        current = name
    print("aplicado. Agora: rm -rf asm && ./run.sh make split && ./run.sh make")


if __name__ == "__main__":
    main()
