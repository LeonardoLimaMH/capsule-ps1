#!/usr/bin/env python3
"""Troca as strings literais de um candidato pelos símbolos do .rodata original.

Um candidato casado que usa strings ("DrawOTag(%08x)...\\n") geraria o próprio .rodata, e o
autodecomp --apply o adia até a migração do .rodata por unidade de tradução. Mas a string já
existe no .rodata original com um símbolo (D_8001132C): referenciá-la como `extern char
D_8001132C[]` produz o mesmo código (o endereço é uma relocação) e nada novo no .rodata.
As strings do C são associadas, na ordem em que aparecem, aos símbolos do .rodata
referenciados pelo assembly original na ordem da primeira referência; o resultado precisa
casar de novo (tools/match.py) para substituir o candidato em .cache/auto/<alvo>.

Uso (no container): rodata_externs.py <alvo> [função ...]
"""
import argparse
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from autodecomp import asm_path, rodata_range  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
STRING = re.compile(r'"(?:[^"\\]|\\.)*"')
INCLUDE_LINE = re.compile(r'^#include\s+"[^"]+"$', re.M)


def rewrite(target, func, code):
    lo, hi = rodata_range(target)
    asm = asm_path(target, func).read_text(encoding="utf-8")
    syms = []
    for s in re.findall(r"%hi\((D_([0-9A-F]{8}))\)", asm):
        if lo <= int(s[1], 16) < hi and s[0] not in syms:
            syms.append(s[0])
    body = INCLUDE_LINE.sub(lambda m: m.group(0).replace('"', "\0"), code)
    lits = STRING.findall(body)
    if not lits or len(lits) != len(syms):
        return None
    it = iter(syms)
    body = STRING.sub(lambda m: next(it), body).replace("\0", '"')
    decl = "".join(f"extern char {s}[];\n" for s in syms)
    # declarações depois dos #include do topo
    m = re.match(r"((?:#include[^\n]*\n|\s*\n)*)", body)
    return body[:m.end()] + decl + body[m.end():]


def matches(target, func, src, gcc):
    base, _, extra = gcc.partition("+")
    cmd = [sys.executable, str(ROOT / "tools" / "match.py"), target, func, str(src), "--gcc", base, "-q"]
    if extra == "g0fill":
        cmd += ["--g0fill"]
        if src_file_sp(target, func):
            cmd += ["--spfill"]
    return subprocess.run(cmd, cwd=ROOT, capture_output=True).returncode == 0


def src_file_sp(target, func):
    lst = ROOT / "config" / "spfill.txt"
    if not lst.exists():
        return False
    listed = set(lst.read_text(encoding="utf-8").split())
    for c in (ROOT / "src" / target).rglob("*.c"):
        if f", {func})" in c.read_text(encoding="utf-8"):
            return c.relative_to(ROOT).as_posix() in listed
    return False


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("funcs", nargs="*")
    a = ap.parse_args()
    auto = ROOT / ".cache" / "auto" / a.target
    funcs = a.funcs or [p.stem for p in sorted(auto.glob("*.c"))]
    for f in funcs:
        p = auto / f"{f}.c"
        code = p.read_text(encoding="utf-8")
        if not STRING.search(INCLUDE_LINE.sub("", code)):
            continue
        new = rewrite(a.target, f, code)
        if new is None:
            print(f"{f}: strings e símbolos do .rodata não se correspondem")
            continue
        tmp = auto / f"{f}.rodata_externs.c"
        tmp.write_text(new, encoding="utf-8", newline="\n")
        gcc = (auto / f"{f}.gcc").read_text().strip()
        ok = matches(a.target, f, tmp, gcc)
        if ok:
            p.write_text(new, encoding="utf-8", newline="\n")
        tmp.unlink()
        print(f"{f}: {'OK, strings trocadas por símbolos' if ok else 'não casa depois da troca'}")


if __name__ == "__main__":
    main()
