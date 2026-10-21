#!/usr/bin/env python3
"""Reproduz no linker script o preenchimento do .text dos objetos do SDK.

Evidência (docs/NOTES.md): o .text de cada objeto das bibliotecas PsyQ tem
tamanho múltiplo de 16 bytes, completado com zeros (nops) depois da última
função. Enquanto essa função está em INCLUDE_ASM os nops fazem parte do .s;
quando ela vira C, o compilador não os gera. Este script insere no linker script
gerado pelo splat, para cada objeto do SDK com tamanho original múltiplo de 16:

    __pad_<obj>_start = .;          (antes do primeiro arquivo do objeto)
    . = . + ((16 - ((. - __pad_<obj>_start) & 15)) & 15);   (depois do último)

O preenchimento é relativo ao início do objeto (não um ALIGN absoluto) e vale 0
quando os nops ainda vêm do .s, então nunca altera um build que já bate.

Uso: ldpad.py <alvo> [...]   (o Makefile chama depois de gerar build/<alvo>.ld)
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TEXT_LINE = re.compile(r"^(\s*)build/src/(\w+)/(sdk_[\w]+?)(__\w+)?\.c\.o\(\.text\);\s*$")


NONMATCH = re.compile(r"^nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", re.M)
FIRST = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ")


def file_extents(target):
    """Arquivo-base (sem o sufixo "__...") -> (início, fim) a partir do asm completo."""
    ext = {}
    for s in (ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob("*.s"):
        t = s.read_text(encoding="utf-8")
        addrs = [int(x, 16) for x in FIRST.findall(t)]
        if not addrs:
            continue
        base = s.parent.name.split("__")[0]
        # fim = última palavra listada + 4 (o tamanho do cabeçalho "nonmatching"
        # do splat não conta os nops de preenchimento que o .s contém)
        lo, hi = addrs[0], addrs[-1] + 4
        b0, e0 = ext.get(base, (lo, hi))
        ext[base] = (min(b0, lo), max(e0, hi))
    return ext


def padded_objects(target):
    """Arquivos-base que são EXATAMENTE um objeto do SDK com .text múltiplo de 16.

    Exige que a extensão do(s) arquivo(s) coincida com a do objeto identificado
    por assinatura; senão o preenchimento seria calculado sobre outro tamanho.
    """
    out = set()
    p = ROOT / "config" / f"psyq_objs.{target}.txt"
    if not p.exists():
        return out
    ext = file_extents(target)
    for l in p.read_text(encoding="utf-8").splitlines():
        if l.startswith("0x"):
            b, e, obj, _ = l.split()
            b, e = int(b, 16), int(e, 16)
            lib, o = obj.split("/")
            name = f"sdk_{lib.lower()}_{o.lower().replace('.obj', '')}"
            if (e - b) % 16 == 0 and ext.get(name) == (b, e):
                out.add(name)
    return out


def patch(target):
    ld = ROOT / "build" / f"{target}.ld"
    lines = ld.read_text(encoding="utf-8").splitlines()
    if any("__pad_" in l for l in lines):
        return 0
    want = padded_objects(target)
    # posições (primeira, última) das linhas .text de cada objeto (base + pedaços "__")
    spans = {}
    for i, l in enumerate(lines):
        m = TEXT_LINE.match(l)
        if m and m.group(3) in want:
            first, _ = spans.get(m.group(3), (i, i))
            spans[m.group(3)] = (first, i)
    out = []
    starts = {f: base for base, (f, _) in spans.items()}
    ends = {l_: base for base, (_, l_) in spans.items()}
    for i, l in enumerate(lines):
        indent = re.match(r"^(\s*)", l).group(1)
        if i in starts:
            out.append(f"{indent}__pad_{starts[i]}_start = .;")
        out.append(l)
        if i in ends:
            out.append(f"{indent}. = . + ((16 - ((. - __pad_{ends[i]}_start) & 15)) & 15);")
    ld.write_text("\n".join(out) + "\n", encoding="utf-8")
    return len(spans)


if __name__ == "__main__":
    for t in sys.argv[1:]:
        print(f"ldpad {t}: {patch(t)} objetos do SDK com preenchimento de .text")
