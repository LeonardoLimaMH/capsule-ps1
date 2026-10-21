#!/usr/bin/env python3
"""Byte-matching de uma função isolada (rodar dentro do container: ./run.sh).

Compila um arquivo C com o mesmo pipeline do build (cpp -> cc1 PSX -> maspsx ->
as) e compara as instruções da função com as do binário original, extraídas do
assembly do splat. Campos de relocação (alvo de jal, %hi/%lo, %gp_rel) são
mascarados aqui; os endereços reais são verificados depois pelo SHA-1 do build
completo.

Uso:
  match.py <alvo> <função> <arquivo.c> [--gcc 2.7.2-psx] [--cflags "-O2 -G8"] [-q]
Código de saída 0 = bytes idênticos.
"""
import argparse
import pathlib
import re
import subprocess
import sys
import tempfile

import rabbitizer

ROOT = pathlib.Path(__file__).resolve().parent.parent
LINE = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/")
CPP_FLAGS = ("-Iinclude -undef -Wall -lang-c -nostdinc -D__GNUC__=2 -D__OPTIMIZE__ -Dmips "
             "-D__mips__ -D__mips -Dpsx -D__psx__ -D__psx -D_PSYQ -D__EXTENSIONS__ -D_MIPSEL "
             "-D_LANGUAGE_C -DLANGUAGE_C")
MASPSX = ("python3 /opt/maspsx/maspsx.py --aspsx-version=2.79 --expand-div --use-comm-section "
          "--run-assembler --gnu-as-path mips-linux-gnu-as -EL -Iinclude -march=r3000 "
          "-mtune=r3000 -no-pad-sections -O1")


def original(target, func):
    hits = list((ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"))
    if not hits:
        sys.exit(f"asm de {func} não encontrado em asm/{target}/nonmatchings")
    words, vram = [], None
    for line in hits[0].read_text(encoding="utf-8").splitlines():
        m = LINE.search(line)
        if m:
            if vram is None:
                vram = int(m.group(1), 16)
            words.append(int.from_bytes(bytes.fromhex(m.group(2)), "little"))
    return words, vram


def compile_c(src, gcc, cflags):
    tmp = pathlib.Path(tempfile.mkdtemp())
    obj = tmp / "f.o"
    cmd = (f"mips-linux-gnu-cpp {CPP_FLAGS} {src} | /opt/gcc-{gcc}/cc1 {cflags} -quiet "
           f"-mcpu=3000 -fgnu-linker -mgas -msoft-float -gcoff | {MASPSX} -o {obj}")
    r = subprocess.run(cmd, shell=True, cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        sys.exit("falha de compilação:\n" + r.stderr)
    return obj


def sh(cmd):
    return subprocess.run(cmd, shell=True, capture_output=True, text=True, check=True).stdout


def compiled(obj, func):
    text = (pathlib.Path(obj).parent / "t.bin")
    sh(f"mips-linux-gnu-objcopy -O binary --only-section=.text {obj} {text}")
    blob = text.read_bytes()
    syms = []
    for l in sh(f"mips-linux-gnu-nm -n {obj}").splitlines():
        p = l.split()
        if len(p) == 3 and p[1] in "Tt" and not p[2].startswith(("L", "$")):
            syms.append((int(p[0], 16), p[2]))
    start = next((a for a, n in syms if n == func), None)
    if start is None:
        sys.exit(f"função {func} não encontrada no objeto compilado")
    nxt = [a for a, n in syms if a > start]
    end = min(nxt) if nxt else len(blob)
    relocs = {}
    section = None
    for l in sh(f"mips-linux-gnu-readelf -rW {obj}").splitlines():
        if l.startswith("Relocation section"):
            section = l.split("'")[1]
            continue
        p = l.split()
        if (section == ".rel.text" and len(p) >= 3 and re.fullmatch(r"[0-9a-f]{8}", p[0])
                and p[2].startswith("R_MIPS")):
            relocs[int(p[0], 16)] = p[2]
    words = [int.from_bytes(blob[o:o + 4], "little") for o in range(start, end, 4)]
    masks = []
    for i in range(len(words)):
        r = relocs.get(start + i * 4)
        masks.append(0xFC000000 if r == "R_MIPS_26" else 0xFFFF0000 if r else 0xFFFFFFFF)
    # remove nops de alinhamento que o assembler possa ter adicionado no fim
    return words, masks


def dis(w, vram):
    return rabbitizer.Instruction(w, vram=vram).disassemble()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--cflags", default="-O2 -G8")
    ap.add_argument("-q", action="store_true")
    a = ap.parse_args()
    ow, vram = original(a.target, a.func)
    cw, masks = compiled(compile_c(a.src, a.gcc, a.cflags), a.func)
    while len(cw) > len(ow) and cw[-1] == 0:
        cw.pop()
        masks.pop()
    n = max(len(ow), len(cw))
    diffs = 0
    out = []
    for i in range(n):
        o = ow[i] if i < len(ow) else None
        c = cw[i] if i < len(cw) else None
        m = masks[i] if i < len(masks) else 0xFFFFFFFF
        same = o is not None and c is not None and (o & m) == (c & m)
        diffs += not same
        ds = dis(o, vram + 4 * i) if o is not None else "-"
        dc = dis(c, vram + 4 * i) if c is not None else "-"
        out.append(f"{'  ' if same else '>>'} {vram + 4 * i:08X}  {ds:<40} | {dc}")
    if not a.q or diffs:
        print(f"{'ORIGINAL':<52}| COMPILADO ({a.gcc} {a.cflags})")
        print("\n".join(out))
    status = "MATCH" if diffs == 0 else f"DIFERENTE ({diffs} instruções, {len(ow)} vs {len(cw)})"
    print(f"[{status}] {a.target}:{a.func}")
    sys.exit(0 if diffs == 0 else 1)


if __name__ == "__main__":
    main()
