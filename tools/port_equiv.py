#!/usr/bin/env python3
"""Porta um C equivalente de uma função do SDK de um alvo para a cópia em outro.

O SDK PsyQ é linkado em mais de um executável (p.ex. prnt em YUUGI.EXE e no loader
SLPM): o código é o mesmo, só mudam os endereços dos globais e das funções. Alinha
os dois assemblies instrução a instrução e troca no C cada símbolo do alvo de
origem pelo correspondente do destino.

  port_equiv.py <origem> <função> <destino> <função-destino> <saída.c>
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"\*/\s+([a-z0-9.]+)\s*(.*)$")
SYM = re.compile(r"\b((?:D|jtbl|func)_[0-9A-Fa-f]{8}|[A-Za-z_]\w*)\b")


def asm(t, f):
    for d in ("asm", ".cache/fullasm"):
        for p in (ROOT / d / t / "nonmatchings").rglob(f + ".s"):
            return [m.groups() for l in p.read_text(encoding="utf-8").splitlines() if (m := INSN.search(l))]
    sys.exit(f"sem assembly de {t}:{f}")


def main():
    st, sf, dt, df, out = sys.argv[1:6]
    a, b = asm(st, sf), asm(dt, df)
    if len(a) != len(b):
        sys.exit(f"tamanhos diferentes: {len(a)} x {len(b)}")
    m = {sf: df}
    for (oa, xa), (ob, xb) in zip(a, b):
        if oa != ob:
            sys.exit(f"instruções diferentes: {oa} {xa} x {ob} {xb}")
        if xa == xb:
            continue
        ta = re.findall(r"[A-Za-z_]\w*", xa)
        tb = re.findall(r"[A-Za-z_]\w*", xb)
        if len(ta) != len(tb):
            sys.exit(f"operandos diferentes: {xa} x {xb}")
        for u, v in zip(ta, tb):
            if u != v and not u.startswith(("L", "hi", "lo", "gp_rel")):
                if m.get(u, v) != v:
                    sys.exit(f"mapeamento ambíguo: {u} -> {m[u]} / {v}")
                m[u] = v
    src = (ROOT / "equiv" / st / f"{sf}.c").read_text(encoding="utf-8")
    src = re.sub(r"\b\w+\b", lambda k: m.get(k.group(0), k.group(0)), src)
    pathlib.Path(out).write_text(src, encoding="utf-8")
    print(" ".join(f"{k}->{v}" for k, v in m.items()))


if __name__ == "__main__":
    main()
