#!/usr/bin/env python3
"""Confere se um candidato acessa via $gp só os globais que o original acessa via $gp.

O match.py mascara os campos de relocação, então um candidato que declara um global com
tamanho (acesso relativo ao $gp) "casa" mesmo quando o original usa outro símbolo do
$gp ali; no link isso vira "relocation truncated to fit: R_MIPS_GPREL16". Aqui os
símbolos das relocações GPREL16 do objeto compilado são comparados com os %gp_rel(...)
do assembly original.

Uso (no container): gp_check.py <alvo> <arquivo.c|pasta> [--gcc 2.7.2-cdk]
  pasta: confere cada <f>.c (com <f>.gcc ao lado), imprime OK/RUIM por função.
"""
import argparse
import contextlib
import io
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent


def gp_symbols_original(target, func):
    for p in (ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"):
        return set(re.findall(r"%gp_rel\((\w+)\)", p.read_text(encoding="utf-8", errors="replace")))
    return set()


def gp_symbols_candidate(target, src, gcc):
    with contextlib.redirect_stderr(io.StringIO()):
        obj = match.compile_c(src, gcc, "-O2 -G8", False, target)
    out = subprocess.run(["mips-linux-gnu-readelf", "-rW", str(obj)], capture_output=True, text=True).stdout
    return {l.split()[4] for l in out.splitlines() if "R_MIPS_GPREL16" in l and len(l.split()) >= 5}


def check(target, src, gcc):
    func = pathlib.Path(src).stem
    extra = gp_symbols_candidate(target, src, gcc) - gp_symbols_original(target, func)
    return extra


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("path")
    ap.add_argument("--gcc", default="2.7.2-psx")
    a = ap.parse_args()
    p = pathlib.Path(a.path)
    files = sorted(p.glob("*.c")) if p.is_dir() else [p]
    for f in files:
        g = f.with_suffix(".gcc")
        gcc = g.read_text().strip().split("+")[0] if g.exists() else a.gcc
        try:
            extra = check(a.target, f, gcc)
        except SystemExit as e:
            print(f"{f.stem}: ERRO {str(e)[:80]}")
            continue
        print(f"{f.stem}: " + ("OK" if not extra else f"RUIM (via $gp só no candidato: {', '.join(sorted(extra))})"))


if __name__ == "__main__":
    main()
