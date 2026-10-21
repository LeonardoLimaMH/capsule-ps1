#!/usr/bin/env python3
"""Estima fronteiras entre unidades de tradução (arquivos-fonte originais).

Sinais combinados:
  1. objetos do SDK (config/psyq_objs.<alvo>.txt): fronteiras exatas;
  2. conflitos de $gp: o ASPSX decide $gp x %hi/%lo por arquivo, então se uma
     função acessa um global via $gp e outra via %hi/%lo, há pelo menos uma
     fronteira entre elas. O conjunto mínimo de fronteiras que separa todos os
     pares é obtido de forma gulosa (interval stabbing) e cada fronteira é
     ajustada para a posição do intervalo permitido mais próxima de uma troca
     de estilo de compilador, quando houver;
  3. estilo de compilador (tools/compiler_map.py): GCC 2.7.2 x 2.8.x.

Uso: tu_boundaries.py <alvo> [--start 0x...] [--end 0x...]
"""
import argparse
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from compiler_map import classify  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
GP = {"slpm": 0x80133474}


def functions(target):
    out = []
    for s in (ROOT / "asm" / target / "nonmatchings").rglob("*.s"):
        text = s.read_text(encoding="utf-8")
        m = re.search(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ", text)
        if not m:
            continue
        kind, _ = classify(s)
        out.append((int(m.group(1), 16), s.stem, text, kind))
    out.sort()
    return out


def sym_addrs(target):
    addrs = {}
    mp = ROOT / "build" / f"{target}.map"
    for l in mp.read_text(encoding="utf-8").splitlines():
        m = re.match(r"\s+0x([0-9a-f]{8})\s+(\w+)\s*$", l)
        if m:
            addrs[m.group(2)] = int(m.group(1), 16)
    return addrs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--start", type=lambda x: int(x, 0), default=0)
    ap.add_argument("--end", type=lambda x: int(x, 0), default=0xFFFFFFFF)
    a = ap.parse_args()
    gp = GP.get(a.target, 0x80078B6C)
    addrs = sym_addrs(a.target)
    funcs = [f for f in functions(a.target) if a.start <= f[0] < a.end]
    starts = [f[0] for f in funcs]

    # 2. conflitos de $gp
    modes = {}  # símbolo -> {"gp": [endereços], "abs": [...]}
    for addr, name, text, _ in funcs:
        for s in set(re.findall(r"%gp_rel\((\w+)\)", text)):
            modes.setdefault(s, {"gp": [], "abs": []})["gp"].append(addr)
        # só loads/stores contam: tomar o endereço (lui+addiu) não depende do $gp
        for s in set(re.findall(r"\b(?:lw|lh|lhu|lb|lbu|sw|sh|sb)\s+\$\w+, %lo\((\w+)\)", text)):
            sa = addrs.get(s)
            if sa is not None and gp - 0x8000 <= sa < gp + 0x8000:
                modes.setdefault(s, {"gp": [], "abs": []})["abs"].append(addr)
    intervals = []
    for s, m in modes.items():
        for g in m["gp"]:
            for b in m["abs"]:
                lo, hi = min(g, b), max(g, b)
                if lo != hi:
                    intervals.append((lo, hi, s))
    # fronteira = início de função f com lo < f <= hi
    intervals.sort(key=lambda x: x[1])
    style_change = {funcs[i][0] for i in range(1, len(funcs))
                    if funcs[i][3] in ("2.7", "2.8") and funcs[i - 1][3] in ("2.7", "2.8")
                    and funcs[i][3] != funcs[i - 1][3]}
    chosen = []
    for lo, hi, s in intervals:
        if any(lo < c <= hi for c, _ in chosen):
            continue
        cands = [f for f in starts if lo < f <= hi]
        pref = [f for f in cands if f in style_change]
        chosen.append(((pref or cands)[-1], s))
    # 1. objetos do SDK
    sdk = []
    p = ROOT / "config" / f"psyq_objs.{a.target}.txt"
    if p.exists():
        for l in p.read_text(encoding="utf-8").splitlines():
            if l.startswith("0x"):
                b, e, obj, _ = l.split()
                sdk.append((int(b, 16), int(e, 16), obj))
    print(f"{len(funcs)} funções, {len(intervals)} pares em conflito de $gp, "
          f"{len(chosen)} fronteiras mínimas; {len(style_change)} trocas de estilo de compilador")
    names = {f[0]: f[1] for f in funcs}
    for c, s in sorted(chosen):
        print(f"  fronteira $gp  antes de {names[c]} ({c:#x})  [símbolo {s}]")
    for c in sorted(style_change):
        print(f"  troca de estilo antes de {names[c]} ({c:#x})")
    for b, e, obj in sdk:
        if a.start <= b < a.end:
            print(f"  SDK {obj}: {b:#x}-{e:#x}")


if __name__ == "__main__":
    main()
