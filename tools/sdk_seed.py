#!/usr/bin/env python3
"""Casamentos do SDK PsyQ a partir da decompilação aberta das bibliotecas (sozud/psy-q-decomp, MIT).

Para cada função do SDK ainda em INCLUDE_ASM (config/symbols.<alvo>.psyq.txt diz de qual
.OBJ ela veio), procura o .c correspondente em ext/psy-q-decomp/src/<lib>/<obj>.c,
pré-processa com os headers do próprio projeto (-DVERSION=40) e testa com tools/match.py
nas variantes de compilação das bibliotecas da PsyQ 4.0 (-O3 -G0 -funsigned-char, como o
build do sozud) e nas nossas (-O2, g0fill). Só o byte-matching decide.

Pré-requisito: git clone https://github.com/sozud/psy-q-decomp ext/psy-q-decomp
Uso (no container): sdk_seed.py [--target slpm] [--jobs 8] [--only NOME]
Resultados: .cache/sdk_seed/<alvo>/<função>.i (+ .txt com a variante que casou)
"""
import argparse
import os
import concurrent.futures as cf
import pathlib
import re
import subprocess

ROOT = pathlib.Path(__file__).resolve().parent.parent
EXT = ROOT / "ext" / "psy-q-decomp"
OUT = ROOT / ".cache" / "sdk_seed"
CPP = ("mips-linux-gnu-cpp -undef -D__GNUC__=2 -D__OPTIMIZE__ -Dmips -D__mips__ -D__mips -Dpsx "
       "-D__psx__ -D__psx -D__EXTENSIONS__ -D_MIPSEL -D__CHAR_UNSIGNED__ -D_LANGUAGE_C -DLANGUAGE_C "
       "-DVERSION=40 -lang-c -nostdinc")
# (gcc, cflags, g0fill, aspsx)
VARIANTS = [
    ("2.7.2-psx", "-O3 -G0 -funsigned-char", True, "2.79"),
    ("2.7.2-psx", "-O3 -G0 -funsigned-char", False, "2.79"),
    ("2.7.2-psx", "-O2 -G0 -funsigned-char", True, "2.79"),
    ("2.7.2-psx", "-O3 -G0 -funsigned-char", True, "2.56"),
    ("2.7.2-cdk", "-O3 -G0 -funsigned-char", True, "2.79"),
    ("2.7.2-psx", "-O2 -G8", True, "2.79"),
]


def pending():
    asm = {}
    for p in (ROOT / "src").glob("*/*.c"):
        t = p.parent.name
        for m in re.finditer(r'INCLUDE_ASM\("[^"]+", (\w+)\)', p.read_text(errors="replace")):
            asm[(t, m.group(1))] = p
    for sym in (ROOT / "config").glob("symbols.*.psyq.txt"):
        t = sym.name.split(".")[1]
        for line in sym.read_text().splitlines():
            m = re.match(r"(\w+) = 0x[0-9A-Fa-f]+;.*\[(\w+)/(\w+)\.OBJ", line)
            if m and (t, m.group(1)) in asm:
                yield t, m.group(1), m.group(2), m.group(3)


def real_name(t, sym):
    return sym[len(t) + 1:] if sym.startswith(t + "_") else sym


def source_for(lib, obj):
    d = lib.lower()[3:] if lib.upper().startswith("LIB") else lib.lower()
    for cand in (EXT / "src" / d / f"{obj.lower()}.c", EXT / "src" / d / "gnu" / f"{obj.lower()}.c"):
        if cand.exists():
            return cand
    return None


def try_one(t, sym, lib, obj):
    src = source_for(lib, obj)
    if not src:
        return t, sym, "sem fonte"
    name = real_name(t, sym)
    text = src.read_text(errors="replace")
    if not re.search(rf"\b{re.escape(name)}\s*\(", text):
        return t, sym, f"{src.name} sem {name}"
    out = OUT / t
    out.mkdir(parents=True, exist_ok=True)
    inc = f"-I{src.parent} -I{EXT/'src'/'snd'} -I{EXT/'include'} -I{EXT/'include'/'psxsdk'}"
    r = subprocess.run(f"{CPP} {inc} {src}", shell=True, capture_output=True, text=True, cwd=EXT)
    if r.returncode != 0:
        return t, sym, "cpp: " + r.stderr.strip().splitlines()[-1][:120]
    pre = re.sub(r"^#.*$", "", r.stdout, flags=re.M)
    if name != sym:
        pre = re.sub(rf"\b{re.escape(name)}\b", sym, pre)
    ifile = out / f"{sym}.i"
    ifile.write_text(pre)
    last = "?"
    for gcc, cflags, g0, aspsx in VARIANTS:
        cmd = ["python3", "tools/match.py", t, sym, str(ifile), "--gcc", gcc, "--cflags", cflags, "-q"]
        if g0:
            cmd.append("--g0fill")
        r = subprocess.run(cmd, capture_output=True, text=True, cwd=ROOT, env={**os.environ, "ASPSX": aspsx})
        if r.returncode == 0:
            (out / f"{sym}.txt").write_text(f"{gcc} {cflags} g0fill={g0} aspsx={aspsx} {src.relative_to(EXT)}\n")
            return t, sym, f"MATCH {gcc} {cflags} g0fill={g0} aspsx={aspsx}"
        last = (r.stdout + r.stderr).strip().splitlines()[-1][:100] if (r.stdout + r.stderr).strip() else "diff"
    return t, sym, "não casou: " + last


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target")
    ap.add_argument("--only")
    ap.add_argument("--jobs", type=int, default=8)
    a = ap.parse_args()
    todo = [x for x in pending() if (not a.target or x[0] == a.target) and (not a.only or x[1] == a.only)]
    print(len(todo), "funções do SDK pendentes")
    res = {}
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for t, sym, msg in ex.map(lambda x: try_one(*x), todo):
            res[(t, sym)] = msg
            print(f"{t}:{sym}: {msg}", flush=True)
    n = sum(m.startswith("MATCH") for m in res.values())
    print(f"casaram {n} de {len(todo)}")


if __name__ == "__main__":
    main()
