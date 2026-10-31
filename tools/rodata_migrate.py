#!/usr/bin/env python3
"""Integra uma função que usa .rodata dando ao objeto C o trecho do .rodata que é dela.

O .rodata de cada executável é um bloco de assembly só (config/<alvo>.yaml: [off, rodata]);
uma função C com switch gera a própria tabela de saltos, que então sobraria. Quando os
símbolos do .rodata que a função usa (jtbl_*, ...) formam um trecho contíguo e o C
compilado gera exatamente esse número de bytes, o trecho vira um subsegmento
[início, .rodata, <arquivo>] no YAML (seguido de [fim, rodata]) e o INCLUDE_ASM é
trocado pelo C. Só para arquivos que ainda não têm subsegmento .rodata.

Depois: rm -rf asm && ./run.sh make split && ./run.sh make (o SHA-1 deve continuar OK).

Uso (no container): rodata_migrate.py <alvo> <função> <candidato.c> [--gcc X] [--dry]
"""
import argparse
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
REF = re.compile(r"%(?:hi|lo)\((\w+)\)")
LINE = re.compile(r"/\* ([0-9A-F]+) ([0-9A-F]{8})")


def segment(target):
    y = (ROOT / "config" / f"{target}.yaml").read_text(encoding="utf-8")
    seg = re.search(r"type: code\s+start: (0x[0-9A-Fa-f]+)\s+vram: (0x[0-9A-Fa-f]+)", y)
    return y, int(seg.group(1), 16), int(seg.group(2), 16)


def rodata_symbols(target):
    """{símbolo: (offset no arquivo, fim)} dos rótulos dos .rodata.s do alvo."""
    syms, order = {}, []
    for f in sorted((ROOT / "asm" / target / "data").glob("*.rodata.s")):
        cur = None
        for line in f.read_text(encoding="utf-8").splitlines():
            m = re.match(r"dlabel (\w+)", line.strip())
            if m:
                cur = m.group(1)
                order.append(cur)
                continue
            m = LINE.search(line)
            if m and cur:
                off = int(m.group(1), 16)
                s, e = syms.get(cur, (off, off))
                syms[cur] = (min(s, off), off)
    # cada símbolo vai até o início do próximo (inclui o alinhamento)
    out = {}
    starts = sorted(v[0] for v in syms.values())
    for name, (s, _) in syms.items():
        nxt = [x for x in starts if x > s]
        out[name] = (s, nxt[0] if nxt else None)
    return out


def rodata_size(obj):
    for line in match.sh(f"mips-linux-gnu-readelf -SW {obj}").splitlines():
        m = re.search(r"\]\s+\.r(?:o)?data\s+\S+\s+\S+\s+\S+\s+([0-9a-f]+)", line)
        if m:
            return int(m.group(1), 16)
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("cand")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--dry", action="store_true")
    a = ap.parse_args()

    src = next((p for p in (ROOT / "src" / a.target).glob("*.c")
                if re.search(rf"INCLUDE_ASM\([^)]*, {a.func}\);", p.read_text(encoding="utf-8"))), None)
    if src is None:
        sys.exit("função não está em INCLUDE_ASM")
    y, start, vram = segment(a.target)
    if re.search(rf"\.rodata, {re.escape(src.stem)}\]", y):
        sys.exit(f"{src.stem} já tem subsegmento .rodata")

    asm = next((ROOT / "asm" / a.target / "nonmatchings").rglob(f"{a.func}.s")).read_text(encoding="utf-8")
    syms = rodata_symbols(a.target)
    cand = pathlib.Path(a.cand).read_text(encoding="utf-8")
    # símbolos que o candidato declara (extern) continuam vindo do assembly
    used = sorted({s for s in REF.findall(asm) if s in syms and not re.search(rf"\b{s}\b", cand)},
                  key=lambda s: syms[s][0])
    if not used:
        sys.exit("a função não usa .rodata gerado pelo C")
    lo, hi = syms[used[0]][0], syms[used[-1]][1]
    inside = [n for n, (s, _) in syms.items() if lo <= s < hi]
    if sorted(inside) != sorted(used):
        sys.exit(f"trecho {lo:#x}-{hi:#x} não é contíguo: {sorted(set(inside) - set(used))}")

    obj = match.compile_c(a.cand, a.gcc, "-O2 -G8", False, a.target)
    size = rodata_size(obj)
    if size != hi - lo:
        sys.exit(f"o C gera {size:#x} bytes de .rodata; o trecho tem {hi - lo:#x}")
    print(f"{a.func}: .rodata {lo:#x}-{hi:#x} ({', '.join(used)}) -> {src.stem}")
    if a.dry:
        return

    # YAML: divide o subsegmento rodata que contém lo
    rows = list(re.finditer(r"^(\s+)- \[(0x[0-9A-Fa-f]+), (\.?rodata)(?:, (\w+))?\]\n", y, re.M))
    host = [r for r in rows if int(r.group(2), 16) <= lo and r.group(3) == "rodata"][-1]
    ind = host.group(1)
    nxt = [int(r.group(2), 16) for r in rows if int(r.group(2), 16) > lo]
    ins = f"{ind}- [0x{lo:X}, .rodata, {src.stem}]\n"
    if not nxt or nxt[0] != hi:
        ins += f"{ind}- [0x{hi:X}, rodata]\n"
    pos = next((r.start() for r in rows if int(r.group(2), 16) > lo), None)
    if pos is None:
        pos = host.end()
    if int(host.group(2), 16) == lo:
        y = y[:host.start()] + y[host.end():]
        pos -= host.end() - host.start()
    y = y[:pos] + ins + y[pos:]
    (ROOT / "config" / f"{a.target}.yaml").write_text(y, encoding="utf-8", newline="\n")

    # C: troca o INCLUDE_ASM pelo candidato (sem os #include)
    body = "\n".join(l for l in cand.splitlines() if not l.startswith("#include")).strip()
    text = src.read_text(encoding="utf-8")
    text = re.sub(rf'INCLUDE_ASM\("[^"]+", {a.func}\);', lambda _: body, text)
    src.write_text(text, encoding="utf-8", newline="\n")


if __name__ == "__main__":
    main()
