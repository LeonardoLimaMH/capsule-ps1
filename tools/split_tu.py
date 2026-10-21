#!/usr/bin/env python3
"""Separa um arquivo-fonte em duas unidades de tradução numa fronteira de função.

Tudo a partir de <primeira_função> (inclusive) até o fim de src/<alvo>/<arquivo>.c
vai para src/<alvo>/<novo>.c. O YAML do splat ganha o subsegmento
[offset, c, <novo>] logo após o do arquivo original, e os INCLUDE_ASM movidos
passam a apontar para asm/<alvo>/nonmatchings/<novo>/. Opcionalmente registra o
compilador do novo arquivo em config/compilers.txt.

Depois de rodar: ./run.sh make split && ./run.sh make   (o SHA-1 deve continuar OK)

Uso:
  split_tu.py <alvo> <arquivo> <novo> <primeira_função> [--gcc 2.8.1-psx]
"""
import argparse
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNC_START = re.compile(r"^(INCLUDE_ASM\(\"[^\"]+\",\s*(\w+)\);|[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{)", re.M)


def func_offset(target, folder, func):
    asm = ROOT / "asm" / target / "nonmatchings" / folder / f"{func}.s"
    m = re.search(r"/\* ([0-9A-F]+) [0-9A-F]{8} [0-9A-F]{8} \*/", asm.read_text(encoding="utf-8"))
    return int(m.group(1), 16)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("file")
    ap.add_argument("new")
    ap.add_argument("first")
    ap.add_argument("--gcc")
    a = ap.parse_args()
    src = ROOT / "src" / a.target / f"{a.file}.c"
    text = src.read_text(encoding="utf-8")
    starts = [(m.start(), m.group(2) or m.group(3)) for m in FUNC_START.finditer(text)]
    pos = next((p for p, name in starts if name == a.first), None)
    if pos is None:
        sys.exit(f"{a.first} não encontrada em {src}")
    # o offset vem do asm (existe para toda função, decompilada ou não, após um split)
    off = func_offset(a.target, a.file, a.first)
    header_end = starts[0][0]
    header = text[:header_end]
    moved = text[pos:].replace(f'"asm/{a.target}/nonmatchings/{a.file}"',
                               f'"asm/{a.target}/nonmatchings/{a.new}"')
    new = ROOT / "src" / a.target / f"{a.new}.c"
    if new.exists():
        sys.exit(f"{new} já existe")
    new.write_text(header + moved, encoding="utf-8", newline="\n")
    src.write_text(text[:pos].rstrip() + "\n", encoding="utf-8", newline="\n")

    yml = ROOT / "config" / f"{a.target}.yaml"
    y = yml.read_text(encoding="utf-8")
    m = re.search(rf"^(\s+)- \[(0x[0-9A-Fa-f]+), c, {re.escape(a.file)}\]\n", y, re.M)
    if not m:
        sys.exit(f"subsegmento c '{a.file}' não encontrado em {yml}")
    ins = f"{m.group(1)}- [{off:#X}, c, {a.new}]\n".replace("0X", "0x")
    y = y[:m.end()] + ins + y[m.end():]
    yml.write_text(y, encoding="utf-8", newline="\n")

    if a.gcc:
        cfg = ROOT / "config" / "compilers.txt"
        lines = cfg.read_text(encoding="utf-8").splitlines() if cfg.exists() else [
            "# arquivo-fonte  compilador   (padrão: 2.7.2-psx)"]
        lines.append(f"src/{a.target}/{a.new}.c {a.gcc}")
        cfg.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    print(f"{a.first} @ {off:#x}: {src.relative_to(ROOT)} -> {new.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
