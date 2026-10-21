#!/usr/bin/env python3
"""Casamentos de graça a partir de funções gêmeas (código repetido no jogo).

Duas funções são gêmeas quando o código de máquina é idêntico depois de
mascarar os campos preenchidos por relocações (alvo de jal/j, %hi, %lo,
%gp_rel), com relocações dos mesmos tipos nas mesmas posições e saltos internos
para os mesmos offsets relativos. Os overlays deste jogo, por exemplo, levam
cópias próprias de rotinas do executável principal e do SDK.

Quando uma gêmea já está em C, o mesmo C é tentado para as outras trocando os
nomes que cada relocação referencia (funções e globais), e o byte-matching
decide, como em qualquer tentativa: uma gêmea só "parecida" (outras constantes,
outros tipos) não casa. Ideia do decomp.wtf (app/twins.py), implementada aqui
do zero sobre as ferramentas deste projeto.

Pré-requisito: tools/full_asm.py (assembly completo em .cache/fullasm).
Uso (no container):
  twins.py --report          # grupos de gêmeas
  twins.py [--jobs 12]       # tenta os casamentos; resultados em .cache/auto/
Depois: tools/autodecomp.py <alvo> --apply
"""
import argparse
import concurrent.futures as cf
import hashlib
import pathlib
import re
import subprocess
import sys
import tempfile
from collections import defaultdict

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from handwritten import load as load_handwritten  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
TARGETS = ["yuugi", "slpm", "chess", "raise", "etc"]
INSN = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/\s+([a-z0-9.]+)\s*(.*)$")
RELOC = re.compile(r"%(hi|lo|gp_rel)\(([A-Za-z_]\w*)\s*(?:\+\s*(0x[0-9A-Fa-f]+|\d+))?\)")
LABEL = re.compile(r"^L[0-9A-F]{8}$")
FUNC_DEF = re.compile(r"^(?!static inline)[A-Za-z_][\w \*]*?\b(\w+)\s*\([^;{]*\)\s*\{", re.M)


def fingerprint(path):
    words, kinds, refs, start = [], [], [], None
    for line in path.read_text(encoding="utf-8").splitlines():
        m = INSN.search(line)
        if not m:
            continue
        vram = int(m.group(1), 16)
        start = start if start is not None else vram
        w = int.from_bytes(bytes.fromhex(m.group(2)), "little")
        op, args = m.group(3), m.group(4).split("/*")[0].strip()
        r = RELOC.search(args)
        if op in ("jal", "j") and args and not args.startswith("$"):
            target = (vram & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if LABEL.match(args) or start <= target < start + 0x100000 and op == "j" and LABEL.match(args):
                kinds.append(f"j{target - start:+x}")
            else:
                kinds.append(op)
                refs.append((args, 0))
            w &= 0xFC000000
        elif r:
            kinds.append(r.group(1))
            refs.append((r.group(2), int(r.group(3), 0) if r.group(3) else 0))
            w &= 0xFFFF0000
        else:
            kinds.append("")
        words.append(w)
    h = hashlib.sha1(b"".join(x.to_bytes(4, "little") for x in words) + "|".join(kinds).encode())
    return h.hexdigest(), refs, len(words) * 4


def c_sources(target):
    """Função -> (código C, compilador) para tudo que já está em C."""
    out = {}
    auto = ROOT / ".cache" / "auto" / target
    for f in auto.glob("*.c"):
        g = auto / f"{f.stem}.gcc"
        out[f.stem] = (f.read_text(encoding="utf-8"), g.read_text().strip() if g.exists() else "2.7.2-psx")
    for c in (ROOT / "src" / target).rglob("*.c"):
        text = c.read_text(encoding="utf-8")
        for m in FUNC_DEF.finditer(text):
            name = m.group(1)
            if name in out or name.startswith("__maspsx"):
                continue
            # corpo por casamento de chaves
            i, depth = text.index("{", m.start()), 0
            for j in range(i, len(text)):
                depth += {"{": 1, "}": -1}.get(text[j], 0)
                if depth == 0:
                    out[name] = (text[m.start():j + 1], "2.7.2-psx")
                    break
    return out


def collect():
    groups = defaultdict(list)
    for t in TARGETS:
        for s in (ROOT / ".cache" / "fullasm" / t / "nonmatchings").rglob("*.s"):
            key, refs, size = fingerprint(s)
            groups[key].append((t, s.stem, refs, size))
    return {k: v for k, v in groups.items() if len(v) > 1}


def rename(code, mapping):
    if not mapping:
        return code
    rx = re.compile(r"\b(" + "|".join(map(re.escape, sorted(mapping, key=len, reverse=True))) + r")\b")
    return rx.sub(lambda m: mapping[m.group(1)], code)


def attempt(job):
    src_t, src_f, src_refs, code, gcc, dst_t, dst_f, dst_refs = job
    mapping = {src_f: dst_f}
    for (a, ao), (b, bo) in zip(src_refs, dst_refs):
        if ao != bo or mapping.get(a, b) != b:
            return dst_t, dst_f, None, "relocações incompatíveis"
        if a != b:
            mapping[a] = b
    new = rename(code, mapping)
    tmp = pathlib.Path(tempfile.mkdtemp()) / f"{dst_f}.c"
    tmp.write_text('#include "common.h"\n\n' + new + "\n", encoding="utf-8")
    for g in (gcc, "2.8.1-psx" if gcc == "2.7.2-psx" else "2.7.2-psx"):
        r = subprocess.run(["python3", "tools/match.py", dst_t, dst_f, str(tmp), "-q", "--gcc", g],
                           cwd=ROOT, capture_output=True, text=True, timeout=120)
        if r.returncode == 0:
            return dst_t, dst_f, (new, g), f"de {src_t}:{src_f}"
    return dst_t, dst_f, None, "não casou"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--jobs", type=int, default=12)
    a = ap.parse_args()
    groups = collect()
    sources = {t: c_sources(t) for t in TARGETS}
    hand = {t: load_handwritten(t) for t in TARGETS}
    members = sum(len(v) for v in groups.values())
    jobs, seen = [], set()
    for g in groups.values():
        have = [(t, f, refs) for t, f, refs, _ in g if f in sources[t]]
        for t, f, refs, size in g:
            if f in sources[t] or f in hand[t] or (t, f) in seen or not have:
                continue
            st, sf, srefs = have[0]
            code, gcc = sources[st][sf]
            jobs.append((st, sf, srefs, code, gcc, t, f, refs))
            seen.add((t, f))
    print(f"{len(groups)} grupos de gêmeas ({members} funções); {len(jobs)} gêmeas sem C com irmã já em C")
    if a.report:
        for g in sorted(groups.values(), key=lambda g: -len(g))[:15]:
            print("  " + ", ".join(f"{t}:{f}" for t, f, _, _ in g[:6]) + (" ..." if len(g) > 6 else ""))
        return
    ok = 0
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for t, f, res, why in ex.map(attempt, jobs):
            if res:
                code, gcc = res
                d = ROOT / ".cache" / "auto" / t
                d.mkdir(parents=True, exist_ok=True)
                (d / f"{f}.c").write_text(code + "\n", encoding="utf-8")
                (d / f"{f}.gcc").write_text(gcc + "\n", encoding="utf-8")
                ok += 1
                print(f"  MATCH {t}:{f} ({gcc}, {why})", flush=True)
    print(f"{ok} de {len(jobs)} gêmeas casadas")


if __name__ == "__main__":
    main()
