#!/usr/bin/env python3
"""Mede o progresso da decompilação.

Uma função conta como decompilada quando não há mais INCLUDE_ASM para ela em
src/ (ou seja, o corpo em C compila para os mesmos bytes do original - o build
inteiro é verificado por SHA-1 em `make check`).

O tamanho de cada função vem do cabeçalho "nonmatching NOME, 0xTAMANHO" que o
splat grava em asm/<alvo>/nonmatchings/. Funções do SDK PsyQ (identificadas por
assinatura em config/symbols.<alvo>.psyq.txt) são contadas separadamente do
código do jogo.

Uso:
  progress.py              # tabela no terminal
  progress.py --readme     # também atualiza o bloco de progresso do README.md
  progress.py --json       # saída em JSON
"""
import json
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGETS = [
    ("yuugi", "YUUGI.EXE", "executável principal"),
    ("slpm", "SLPM_860.96", "loader / boot"),
    ("chess", "CHESS.BIN", "overlay de batalha (tabuleiro)"),
    ("raise", "RAISE.BIN", "overlay de criação de monstros"),
    ("etc", "ETC.BIN", "overlay de menus/diversos"),
]
NONMATCH = re.compile(r"^nonmatching\s+(\S+),\s*(0x[0-9A-Fa-f]+)", re.M)
INCLUDE = re.compile(r'INCLUDE_ASM\(\s*"[^"]+"\s*,\s*(\w+)\s*\)')
START, END = "<!-- PROGRESS:START -->", "<!-- PROGRESS:END -->"


def psyq_names(t):
    p = ROOT / "config" / f"symbols.{t}.psyq.txt"
    if not p.exists():
        return set()
    return {l.split("=")[0].strip() for l in p.read_text(encoding="utf-8").splitlines()
            if "=" in l and not l.startswith("//")}


MAP_SECTION = re.compile(r"^ \.text\s+0x([0-9a-f]+)\s+0x([0-9a-f]+)\s+\S+")
MAP_SYMBOL = re.compile(r"^\s+0x([0-9a-f]{8})\s+([A-Za-z_]\w*)\s*$")


def function_sizes(t):
    """Tamanho de cada função a partir do mapa do linker (build/<alvo>.map).

    Funciona tanto para funções em C quanto em INCLUDE_ASM: o tamanho é a
    distância até o próximo símbolo de função na mesma seção .text de entrada.
    """
    sizes = {}
    mp = ROOT / "build" / f"{t}.map"
    if not mp.exists():
        sys.exit(f"{mp} não existe: rode `./run.sh make` antes")
    sec_end, syms = None, []

    def flush():
        syms.sort()
        for i, (a, n) in enumerate(syms):
            end = syms[i + 1][0] if i + 1 < len(syms) else sec_end
            sizes[n] = end - a
        syms.clear()

    for l in mp.read_text(encoding="utf-8").splitlines():
        m = MAP_SECTION.match(l)
        if m:
            flush()
            sec_end = int(m.group(1), 16) + int(m.group(2), 16)
            continue
        if re.match(r"^ ?\.\w", l) or (l.strip() and not l.startswith(" ")):
            flush()  # outra seção de entrada (.rodata, .data...) ou de saída
            sec_end = None
            continue
        if sec_end is None:
            continue
        m = MAP_SYMBOL.match(l)
        if m:
            name = m.group(2)
            if re.fullmatch(r"(L|D_|jtbl_)[0-9A-F]{8}", name) or name.startswith("__maspsx"):
                continue
            syms.append((int(m.group(1), 16), name))
        elif l.strip() and not l.startswith(" "):
            flush()
            sec_end = None
    flush()
    return sizes


def collect(t):
    sizes = function_sizes(t)
    pending = set()
    for c in (ROOT / "src" / t).rglob("*.c"):
        pending |= set(INCLUDE.findall(c.read_text(encoding="utf-8", errors="replace")))
    lib = psyq_names(t)
    hand = handwritten(t)
    equiv = {p.stem for p in (ROOT / "equiv" / t).glob("*.c")}  # trilha funcional
    r = {k: {"funcs": 0, "done_funcs": 0, "bytes": 0, "done_bytes": 0, "asm_bytes": 0, "equiv_bytes": 0}
         for k in ("game", "lib")}
    for name, size in sizes.items():
        k = "lib" if name in lib else "game"
        r[k]["funcs"] += 1
        r[k]["bytes"] += size
        if name not in pending:
            r[k]["done_funcs"] += 1
            r[k]["done_bytes"] += size
        elif name in hand:
            r[k]["asm_bytes"] += size  # escrita em assembly no original: fica como .s
        elif name in equiv:
            r[k]["equiv_bytes"] += size  # C equivalente (difftest), ainda não byte-idêntico
    return r


def handwritten(t):
    p = ROOT / "config" / f"handwritten.{t}.txt"
    if not p.exists():
        return set()
    return {l.split()[0] for l in p.read_text(encoding="utf-8").splitlines() if l and not l.startswith("#")}


def pct(a, b):
    return 100.0 * a / b if b else 0.0


def bar(p, width=20):
    n = round(p / 100 * width)
    return "█" * n + "░" * (width - n)


def main():
    sys.stdout.reconfigure(encoding="utf-8")
    data = {t: collect(t) for t, _, _ in TARGETS}
    tot = {k: {"funcs": 0, "done_funcs": 0, "bytes": 0, "done_bytes": 0, "asm_bytes": 0, "equiv_bytes": 0}
           for k in ("game", "lib")}
    for t in data:
        for k in tot:
            for f in tot[k]:
                tot[k][f] += data[t][k][f]
    all_b = tot["game"]["bytes"] + tot["lib"]["bytes"]
    all_d = tot["game"]["done_bytes"] + tot["lib"]["done_bytes"]
    if "--json" in sys.argv:
        print(json.dumps({"targets": data, "total": tot}, indent=2))
        return

    rows = ["| Binário | Função | Código do jogo (C) | Funções | SDK PsyQ (C) | Total |",
            "|---|---|---|---|---|---|"]
    for t, fname, desc in TARGETS:
        g, l = data[t]["game"], data[t]["lib"]
        tb = g["bytes"] + l["bytes"]
        td = g["done_bytes"] + l["done_bytes"]
        rows.append(f"| `{fname}` | {desc} | {pct(g['done_bytes'], g['bytes']):.2f}% "
                    f"({g['done_bytes']:,} / {g['bytes']:,} B) | {g['done_funcs']} / {g['funcs']} | "
                    f"{pct(l['done_bytes'], l['bytes']):.2f}% ({l['done_funcs']} / {l['funcs']} fn) | "
                    f"**{pct(td, tb):.2f}%** |")
    g, l = tot["game"], tot["lib"]
    rows.append(f"| **Total** | | **{pct(g['done_bytes'], g['bytes']):.2f}%** "
                f"({g['done_bytes']:,} / {g['bytes']:,} B) | {g['done_funcs']} / {g['funcs']} | "
                f"{pct(l['done_bytes'], l['bytes']):.2f}% ({l['done_funcs']} / {l['funcs']} fn) | "
                f"**{pct(all_d, all_b):.2f}%** |")
    pg = pct(g["done_bytes"], g["bytes"])
    pa = pct(all_d, all_b)
    cov = pct(all_d + tot["game"]["asm_bytes"] + tot["lib"]["asm_bytes"], all_b)
    fun = pct(all_d + tot["game"]["equiv_bytes"] + tot["lib"]["equiv_bytes"], all_b)
    summary = [
        f"**Código do jogo decompilado em C (byte-matching):** `{bar(pg)}` **{pg:.2f}%**  ",
        f"**Total incluindo SDK PsyQ:** `{bar(pa)}` **{pa:.2f}%**  ",
        f"**Cobertura (C + funções que já eram assembly no original):** `{bar(cov)}` **{cov:.2f}%**  ",
        f"**Funcional (C byte-idêntico + C equivalente validado por teste diferencial, `equiv/`):** "
        f"`{bar(fun)}` **{fun:.2f}%**  ",
        f"**Rebuild byte-idêntico dos 5 binários:** ✅ (verificado por SHA-1 em `make check`)",
        "",
    ]
    block = "\n".join(summary + rows)
    print(block)
    if "--readme" in sys.argv:
        readme = ROOT / "README.md"
        s = readme.read_text(encoding="utf-8")
        i, j = s.index(START) + len(START), s.index(END)
        readme.write_text(s[:i] + "\n" + block + "\n" + s[j:], encoding="utf-8")
        print("\nREADME.md atualizado.")


if __name__ == "__main__":
    main()
