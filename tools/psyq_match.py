#!/usr/bin/env python3
"""Identifica funções das bibliotecas PsyQ (SDK oficial) por assinatura de bytes.

Usa as assinaturas públicas de https://github.com/lab313ru/psx_psyq_signatures
(baixadas em .cache/psyq_sigs/<versão>/). Para cada binário, procura cada
objeto (.OBJ) das bibliotecas; o padrão precisa casar em um único lugar.

Uso:
  psyq_match.py --report                 # cobertura por versão do SDK
  psyq_match.py --version 420 --write    # grava config/symbols.<alvo>.psyq.txt
"""
import argparse
import json
import pathlib
import re
from collections import defaultdict

ROOT = pathlib.Path(__file__).resolve().parent.parent
SIGS = ROOT / ".cache" / "psyq_sigs"

# alvo -> (arquivo, vram, tamanho do cabeçalho)
TARGETS = {
    "yuugi": ("disc/YUUGI.EXE", 0x80010000, 0x800),
    "slpm": ("disc/SLPM_860.96", 0x80110000, 0x800),
    "chess": ("disc/MASTER/PSF/CHESS.BIN", 0x80097800, 0),
    "raise": ("disc/MASTER/PSF/RAISE.BIN", 0x80097800, 0),
    "etc": ("disc/MASTER/PSF/ETC.BIN", 0x80097800, 0),
}
MIN_SIG_BYTES = 24  # assinaturas menores geram falsos positivos


def compile_sig(sig):
    parts = sig.split()
    rx = b"".join(b"." if p == "??" else re.escape(bytes([int(p, 16)])) for p in parts)
    fixed = sum(p != "??" for p in parts)
    return re.compile(rx, re.DOTALL), len(parts), fixed


def load_version(ver):
    objs = []
    for f in sorted((SIGS / ver).glob("*.json")):
        lib = f.stem.replace(".LIB", "")
        for e in json.load(open(f)):
            if not e.get("sig"):
                continue
            rx, n, fixed = compile_sig(e["sig"])
            if fixed < MIN_SIG_BYTES:
                continue
            objs.append((lib, e["name"], rx, n, e["labels"]))
    return objs


def scan(data, objs):
    """Retorna {offset: (lib, obj, tamanho, labels)} para assinaturas com casamento único."""
    found = {}
    for lib, obj, rx, n, labels in objs:
        hits = [m.start() for m in rx.finditer(data) if m.start() % 4 == 0]
        if len(hits) == 1:
            found[hits[0]] = (lib, obj, n, labels)
    return found


def union(write):
    main_names = set()
    versions = sorted(p.name for p in SIGS.iterdir() if p.is_dir())
    loaded = {v: load_version(v) for v in versions}
    for t, (f, vram, h) in TARGETS.items():
        data = open(ROOT / f, "rb").read()[h:]
        cands = []
        for v in versions:
            for off, (lib, obj, n, labels) in scan(data, loaded[v]).items():
                cands.append((n, off, v, lib, obj, labels))
        cands.sort(key=lambda c: (-c[0], c[2]))
        taken, chosen = [], []
        for n, off, v, lib, obj, labels in cands:
            if any(off < e and s < off + n for s, e in taken):
                continue
            taken.append((off, off + n))
            chosen.append((off, n, v, lib, obj, labels))
        chosen.sort()
        vers = defaultdict(int)
        for c in chosen:
            vers[c[2]] += 1
        print(f"{t}: {len(chosen)} objetos, {sum(c[1] for c in chosen):#x} bytes; versões: {dict(vers)}")
        if not write:
            continue
        lines = [f"// Funções do SDK PsyQ identificadas por assinatura (tools/psyq_match.py --union)",
                 f"// formato: nome = endereço; // type:func  [BIBLIOTECA/OBJETO PsyQ-versão]"]
        seen = set()
        for off, n, v, lib, obj, labels in chosen:
            for l in labels:
                nm = l["name"]
                if re.match(r"(loc|text|data|bss|rdata|sdata|sbss)_", nm) or nm in seen:
                    continue
                seen.add(nm)
                # overlays com cópia própria de uma função de biblioteca que também
                # existe no executável principal: prefixa para não sequestrar as
                # chamadas que o overlay faz à versão do principal
                if t != "yuugi" and nm in main_names:
                    nm = f"{t}_{nm}"
                lines.append(f"{nm} = 0x{vram + off + l['offset']:08X}; // type:func  [{lib}/{obj} PsyQ-{v}]")
        (ROOT / "config" / f"symbols.{t}.psyq.txt").write_text("\n".join(lines) + "\n", encoding="utf-8")
        if t == "yuugi":
            main_names = set(seen)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--version")
    ap.add_argument("--write", action="store_true")
    ap.add_argument("--union", action="store_true", help="combina todas as versões (maior assinatura vence)")
    a = ap.parse_args()
    if a.union:
        return union(a.write)
    versions = [a.version] if a.version else sorted(p.name for p in SIGS.iterdir() if p.is_dir())
    blobs = {t: (open(ROOT / f, "rb").read()[h:], v) for t, (f, v, h) in TARGETS.items()}
    for ver in versions:
        objs = load_version(ver)
        total = defaultdict(int)
        results = {}
        for t, (data, vram) in blobs.items():
            res = scan(data, objs)
            results[t] = res
            total[t] = sum(n for _, _, n, _ in res.values())
        print(f"PsyQ {ver}: " + "  ".join(f"{t}={len(results[t])} objs/{total[t]:#x} B" for t in blobs))
        if a.write:
            for t, res in results.items():
                vram = blobs[t][1]
                out = ROOT / "config" / f"symbols.{t}.psyq.txt"
                seen = set()
                lines = [f"// Funções do SDK PsyQ {ver} identificadas por assinatura (tools/psyq_match.py)"]
                for off in sorted(res):
                    lib, obj, n, labels = res[off]
                    funcs = [l for l in labels if not re.match(r"(loc|text|data|bss|rdata|sdata|sbss)_", l["name"])]
                    for i, l in enumerate(funcs):
                        if l["name"] in seen:
                            continue
                        seen.add(l["name"])
                        lines.append(f"{l['name']} = 0x{vram + off + l['offset']:08X}; // type:func lib:{lib} obj:{obj}")
                out.write_text("\n".join(lines) + "\n", encoding="utf-8")
                print(f"  -> {out.relative_to(ROOT)}: {len(lines) - 1} símbolos")


if __name__ == "__main__":
    main()
