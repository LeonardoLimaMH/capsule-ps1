#!/usr/bin/env python3
"""Fixa no linker script a extensão original do .text de cada arquivo-fonte.

Evidência (docs/NOTES.md): o .text de cada objeto das bibliotecas PsyQ termina
com nops de preenchimento depois da última função. Enquanto essa função está em
INCLUDE_ASM os nops fazem parte do .s; quando ela vira C, o compilador não os
gera. O mesmo vale para funções do SDK que não foram identificadas por assinatura
e caíram em arquivos `main_*`/`loader_*` (ex.: `_SpuDataCallback`, 0x24 bytes de
código + 0xC de nops), inclusive quando o objeto original começa antes do arquivo.

Para cada arquivo (ou objeto do SDK separado em pedaços "sdk_x__y") o script
insere, em volta das suas linhas .text:

    __pad_<arq>_start = .;
    ...
    . = __pad_<arq>_start + <extensão original>;

A extensão vem do asm completo (.cache/fullasm: da primeira à última palavra
listada, nops finais incluídos). Num build que bate, a atribuição não move nada;
se o C perdeu os nops finais, ela os repõe; se o código ficou MAIOR, o ld falha
("cannot move location counter backwards") em vez de deslocar o resto.
Fronteiras de objeto no meio de um arquivo: tools/pad_split.py.

Uso: ldpad.py <alvo> [...]   (o Makefile chama depois de gerar build/<alvo>.ld)
"""
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TEXT_LINE = re.compile(r"^(\s*)build/src/(\w+)/(\w+?)(__\w+)?\.c\.o\(\.text\);\s*$")


NONMATCH = re.compile(r"^nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", re.M)
FIRST = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ")


def group(name):
    """Objeto original de um arquivo: pedaços "sdk_x__y" são um objeto do SDK; os demais
    arquivos ("main_x__y" vêm de separações por compilador ou por fim de objeto) são cada
    um o seu próprio objeto."""
    return name.split("__")[0] if name.startswith("sdk_") else name


def file_extents(target):
    """Arquivo-base (sem o sufixo "__...") -> (início, fim) a partir do asm completo."""
    ext = {}
    for s in (ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob("*.s"):
        t = s.read_text(encoding="utf-8")
        addrs = [int(x, 16) for x in FIRST.findall(t)]
        if not addrs:
            continue
        base = group(s.parent.name)
        # fim = última palavra listada + 4 (o tamanho do cabeçalho "nonmatching"
        # do splat não conta os nops de preenchimento que o .s contém)
        lo, hi = addrs[0], addrs[-1] + 4
        b0, e0 = ext.get(base, (lo, hi))
        ext[base] = (min(b0, lo), max(e0, hi))
    return ext


def patch(target):
    ld = ROOT / "build" / f"{target}.ld"
    lines = ld.read_text(encoding="utf-8").splitlines()
    if any("__pad_" in l for l in lines):
        return 0
    ext = file_extents(target)
    # posições (primeira, última) das linhas .text de cada objeto (base + pedaços "__")
    spans = {}
    for i, l in enumerate(lines):
        m = TEXT_LINE.match(l)
        key = m and group(m.group(3) + (m.group(4) or ""))
        if m and key in ext:
            first, _ = spans.get(key, (i, i))
            spans[key] = (first, i)
    out = []
    starts = {f: base for base, (f, _) in spans.items()}
    ends = {l_: base for base, (_, l_) in spans.items()}
    for i, l in enumerate(lines):
        indent = re.match(r"^(\s*)", l).group(1)
        if i in starts:
            out.append(f"{indent}__pad_{starts[i]}_start = .;")
        out.append(l)
        if i in ends:
            b, e = ext[ends[i]]
            out.append(f"{indent}. = __pad_{ends[i]}_start + 0x{e - b:X};")
    ld.write_text(chr(10).join(out) + chr(10), encoding="utf-8")
    return len(spans)


if __name__ == "__main__":
    for t in sys.argv[1:]:
        print(f"ldpad {t}: {patch(t)} arquivos com extensão original fixada")
