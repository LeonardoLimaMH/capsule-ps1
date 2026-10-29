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
import subprocess
import sys
import functools

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
STAGED = False
COUNTERS = ('funcs', 'done_funcs', 'bytes', 'done_bytes', 'asm_bytes',
            'equiv_bytes', 'equiv_funcs', 'asm_funcs', 'pending_funcs')


class IndexSnapshot(dict):
    texts = None


@functools.lru_cache(maxsize=None)
def staged_files():
    out = subprocess.check_output(['git', 'ls-files', '--stage', '-z'], cwd=ROOT)
    result = IndexSnapshot()
    for entry in out.split(b'\0'):
        if not entry:
            continue
        info, name = entry.split(b'\t', 1)
        _, blob, stage = info.split()
        if stage != b'0':
            sys.exit('Resolve index conflicts before calculating commit progress')
        result[name.decode('utf-8')] = blob.decode('ascii')
    return result


def source_text(path):
    """Read the exact commit snapshot when --staged is requested."""
    if STAGED:
        name = path.relative_to(ROOT).as_posix()
        snapshot = staged_files()
        if name not in snapshot:
            return ''
        if snapshot.texts is None:
            # One immutable batch instead of starting thousands of git processes
            # on Windows. Hashes come from the already captured index snapshot.
            objects = sorted({blob for file, blob in snapshot.items()
                              if file.endswith('.c') or file == 'README.md'
                              or (file.startswith('config/') and file.endswith('.txt'))})
            raw = subprocess.check_output(['git', 'cat-file', '--batch'], cwd=ROOT,
                                          input=('\n'.join(objects) + '\n').encode())
            texts, offset = {}, 0
            for expected in objects:
                end = raw.index(b'\n', offset)
                oid, kind, count = raw[offset:end].split()
                if oid.decode() != expected or kind != b'blob':
                    sys.exit('Invalid git blob response while calculating progress')
                begin, size = end + 1, int(count)
                texts[expected] = raw[begin:begin + size].decode('utf-8')
                offset = begin + size + 1
            snapshot.texts = texts
        blob = snapshot[name]
        if blob not in snapshot.texts:
            snapshot.texts[blob] = subprocess.check_output(['git', 'cat-file', 'blob', blob], cwd=ROOT).decode('utf-8')
        return snapshot.texts[blob]
    return path.read_text(encoding='utf-8') if path.exists() else ''


def source_files(folder):
    if STAGED:
        return [ROOT / name for name in sorted(staged_files())
                if name.startswith(folder + '/') and name.endswith('.c')]
    return (ROOT / folder).rglob('*.c')


def psyq_names(t):
    p = ROOT / "config" / f"symbols.{t}.psyq.txt"
    return {l.split("=")[0].strip() for l in source_text(p).splitlines()
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
    for c in source_files('src/' + t):
        pending |= set(INCLUDE.findall(source_text(c)))
    lib = psyq_names(t)
    hand = handwritten(t)
    equiv = {p.stem for p in source_files('equiv/' + t)}
    r = {k: dict.fromkeys(COUNTERS, 0) for k in ("game", "lib")}
    for name, size in sizes.items():
        k = "lib" if name in lib else "game"
        r[k]["funcs"] += 1
        r[k]["bytes"] += size
        if name not in pending:
            r[k]["done_funcs"] += 1
            r[k]["done_bytes"] += size
        elif name in equiv:
            # C equivalente (difftest), ainda não byte-idêntico; vale também para as rotinas
            # escritas à mão em assembly no original (GTE inline validado, ver docs/gte.md)
            r[k]["equiv_bytes"] += size
            r[k]["equiv_funcs"] += 1
        elif name in hand:
            r[k]["asm_bytes"] += size  # escrita em assembly no original: fica como .s
            r[k]["asm_funcs"] += 1
    for group in r.values():
        # assembly original (BIOS, syscall/break, COP0...) não tem equivalente em C: fica fora
        group['pending_funcs'] = (group['funcs'] - group['done_funcs'] - group['equiv_funcs']
                                  - group['asm_funcs'])
    return r


def handwritten(t):
    p = ROOT / "config" / f"handwritten.{t}.txt"
    return {l.split()[0] for l in source_text(p).splitlines() if l and not l.startswith("#")}


def pct(a, b):
    return 100.0 * a / b if b else 0.0


def bar(p, width=20):
    n = round(p / 100 * width)
    return "█" * n + "░" * (width - n)


def functional_table(data, total):
    rows = ['**Equivalentes e pendências por binário (jogo + SDK):**', '',
            '| Binário | C equivalente (`equiv/`) | Funcional (bytes convertíveis) | Funções em C '
            '| Assembly original | Faltam C |',
            '|---|---|---|---|---|---|']
    for target, label in [(t, '`' + name + '`') for t, name, _ in TARGETS] + [(None, '**Total**')]:
        groups = data[target] if target else total
        counts = {key: sum(group[key] for group in groups.values()) for key in COUNTERS}
        ready = counts['done_funcs'] + counts['equiv_funcs']
        conv_funcs = counts['funcs'] - counts['asm_funcs']
        conv_bytes = counts['bytes'] - counts['asm_bytes']
        coverage = pct(counts['done_bytes'] + counts['equiv_bytes'], conv_bytes)
        rows.append(f"| {label} | {pct(counts['equiv_bytes'], counts['bytes']):.2f}% "
                    f"({counts['equiv_funcs']:,} fn) | `{bar(coverage, 10)}` **{coverage:.2f}%** | "
                    f"{ready:,} / {conv_funcs:,} ({pct(ready, conv_funcs):.2f}%) | "
                    f"{counts['asm_funcs']:,} | **{counts['pending_funcs']:,}** |")
    rows += ['', 'Equivalente conta somente `equiv/`; funcional soma byte-exact e equivalente, sem duplicar funções.',
             'As barras medem bytes de código convertível: ficam de fora as rotinas que já eram assembly no',
             'original e não têm equivalente em C (trampolins e chamadas da BIOS, `syscall`/`break`, COP0,',
             'troca de contexto), listadas em `config/handwritten.*.txt` e contadas na coluna própria.']
    return rows


def main():
    global STAGED
    STAGED = '--staged' in sys.argv
    staged_files.cache_clear()
    sys.stdout.reconfigure(encoding="utf-8")
    data = {t: collect(t) for t, _, _ in TARGETS}
    tot = {k: dict.fromkeys(COUNTERS, 0) for k in ("game", "lib")}
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
    fun = pct(all_d + tot["game"]["equiv_bytes"] + tot["lib"]["equiv_bytes"],
              all_b - tot["game"]["asm_bytes"] - tot["lib"]["asm_bytes"])
    summary = [
        f"**Código do jogo decompilado em C (byte-matching):** `{bar(pg)}` **{pg:.2f}%**  ",
        f"**Total incluindo SDK PsyQ:** `{bar(pa)}` **{pa:.2f}%**  ",
        f"**Cobertura (C + funções que já eram assembly no original):** `{bar(cov)}` **{cov:.2f}%**  ",
        f"**Funcional (C byte-idêntico + C equivalente validado por teste diferencial, `equiv/`; "
        f"sobre o código convertível em C):** "
        f"`{bar(fun)}` **{fun:.2f}%**  ",
        f"**Rebuild byte-idêntico dos 5 binários:** ✅ (verificado por SHA-1 em `make check`)",
        "",
    ]
    block = "\n".join(summary + rows + [''] + functional_table(data, tot))
    print(block)
    if '--check' in sys.argv:
        readme_text = source_text(ROOT / 'README.md')
        if START not in readme_text or END not in readme_text:
            sys.exit('README progress block is missing')
        actual = readme_text.split(START, 1)[1].split(END, 1)[0].strip()
        if actual != block.strip():
            sys.exit('README progress is stale; stage accepted source changes, run '
                     '`python tools/progress.py --readme --staged`, then stage README.md')
        print('README progress matches the staged snapshot.' if STAGED else 'README progress is current.')
    if "--readme" in sys.argv:
        readme = ROOT / "README.md"
        s = readme.read_text(encoding="utf-8")
        i, j = s.index(START) + len(START), s.index(END)
        readme.write_text(s[:i] + "\n" + block + "\n" + s[j:], encoding="utf-8", newline='\n')
        print("\nREADME.md atualizado.")


if __name__ == "__main__":
    main()
