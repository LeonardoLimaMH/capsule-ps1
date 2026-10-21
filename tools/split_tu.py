#!/usr/bin/env python3
"""Separa um arquivo-fonte em duas unidades de tradução numa fronteira de função.

Tudo a partir de <primeira_função> (inclusive) até o fim de src/<alvo>/<arquivo>.c
vai para src/<alvo>/<novo>.c. O YAML do splat ganha o subsegmento
[offset, c, <novo>] logo após o do arquivo original, e os INCLUDE_ASM movidos
passam a apontar para asm/<alvo>/nonmatchings/<novo>/. Opcionalmente registra o
compilador do novo arquivo em config/compilers.txt.

Depois de separar: rm -rf asm && ./run.sh make split && ./run.sh make
(o SHA-1 deve continuar OK: a separação não muda nenhum byte).

Uso:
  split_tu.py <alvo> <arquivo> <novo> <primeira_função> [--gcc 2.8.1-psx]
"""
import argparse
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
FUNC_START = re.compile(r"^(INCLUDE_ASM\(\"[^\"]+\",\s*(\w+)\);|[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{)", re.M)


def func_offset(target, func):
    """Offset no arquivo da função (procura o asm em qualquer pasta de nonmatchings)."""
    asm = next((ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"), None)
    if asm is not None:
        m = re.search(r"/\* ([0-9A-F]+) [0-9A-F]{8} [0-9A-F]{8} \*/", asm.read_text(encoding="utf-8"))
        return int(m.group(1), 16)
    # função já em C (o splat não gera .s para ela): endereço no mapa do linker
    mp = (ROOT / "build" / f"{target}.map").read_text(encoding="utf-8")
    addr = int(re.search(rf"^\s+0x([0-9a-f]{{8}})\s+{func}\s*$", mp, re.M).group(1), 16)
    y = (ROOT / "config" / f"{target}.yaml").read_text(encoding="utf-8")
    seg = re.search(r"type: code\s+start: (0x[0-9A-Fa-f]+)\s+vram: (0x[0-9A-Fa-f]+)", y)
    return addr - int(seg.group(2), 16) + int(seg.group(1), 16)


def set_compiler(target, name, gcc):
    cfg = ROOT / "config" / "compilers.txt"
    key = f"src/{target}/{name}.c"
    lines = [l for l in cfg.read_text(encoding="utf-8").splitlines() if not l.startswith(key + " ")] \
        if cfg.exists() else ["# arquivo-fonte  compilador   (padrão: 2.7.2-psx)"]
    if gcc and gcc != "2.7.2-psx":
        lines.append(f"{key} {gcc}")
    cfg.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")


def split(target, file, new, first, gcc=None):
    src = ROOT / "src" / target / f"{file}.c"
    text = src.read_text(encoding="utf-8")
    starts = [(m.start(), m.group(2) or m.group(3)) for m in FUNC_START.finditer(text)]
    pos = next((p for p, name in starts if name == first), None)
    if pos is None:
        raise SystemExit(f"{first} não encontrada em {src}")
    if pos == starts[0][0]:
        raise SystemExit(f"{first} já é a primeira função de {src}")
    off = func_offset(target, first)
    header = text[:starts[0][0]]
    moved = text[pos:].replace(f'"asm/{target}/nonmatchings/{file}"',
                               f'"asm/{target}/nonmatchings/{new}"')
    dst = ROOT / "src" / target / f"{new}.c"
    if dst.exists():
        raise SystemExit(f"{dst} já existe")
    dst.parent.mkdir(parents=True, exist_ok=True)
    dst.write_text(header + moved, encoding="utf-8", newline="\n")
    src.write_text(text[:pos].rstrip() + "\n", encoding="utf-8", newline="\n")

    yml = ROOT / "config" / f"{target}.yaml"
    y = yml.read_text(encoding="utf-8")
    m = re.search(rf"^(\s+)- \[(0x[0-9A-Fa-f]+), c, {re.escape(file)}\]\n", y, re.M)
    if not m:
        raise SystemExit(f"subsegmento c '{file}' não encontrado em {yml}")
    y = y[:m.end()] + f"{m.group(1)}- [0x{off:X}, c, {new}]\n" + y[m.end():]
    yml.write_text(y, encoding="utf-8", newline="\n")
    if gcc:
        set_compiler(target, new, gcc)
    return off


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("file")
    ap.add_argument("new")
    ap.add_argument("first")
    ap.add_argument("--gcc")
    a = ap.parse_args()
    off = split(a.target, a.file, a.new, a.first, a.gcc)
    print(f"{a.first} @ {off:#x}: src/{a.target}/{a.file}.c -> src/{a.target}/{a.new}.c")


if __name__ == "__main__":
    main()
