#!/usr/bin/env python3
"""Prepara e roda o decomp-permuter para uma função quase casada (no container).

O permuter aplica milhares de transformações aleatórias que preservam a
semântica do C (reordenar declarações, trocar tipos equivalentes, introduzir
temporários...) e mede a distância do código gerado para o original.

Uso:
  permute.py <alvo> <função> <arquivo.c> [--seconds 600] [--jobs 8]
O melhor resultado fica em .cache/permuter/<função>/output-*/source.c
"""
import argparse
import pathlib
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
COMPILE_SH = """#!/bin/bash
set -euo pipefail
INPUT="$(realpath "$1")"
OUTPUT="$(realpath -m "$3")"
cd /work
mips-linux-gnu-cpp -Iinclude -undef -lang-c -nostdinc -D__GNUC__=2 -Dmips -D__mips__ \\
    -Dpsx -D_MIPSEL -DLANGUAGE_C -DPERMUTER "$INPUT" \\
  | /opt/gcc-{gcc}/cc1 -O2 -G8 -quiet -mcpu=3000 -fgnu-linker -mgas -msoft-float \\
  | python3 tools/psx_as.py --target {target} --aspsx-version=2.79 --expand-div --use-comm-section \\
      --dont-force-G0 --run-assembler --gnu-as-path mips-linux-gnu-as -EL -Iinclude \\
      -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G8 -o "$OUTPUT"
"""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("--seconds", type=int, default=600)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--gcc", default="2.7.2-psx")
    a = ap.parse_args()
    asm = next((ROOT / "asm" / a.target / "nonmatchings").rglob(f"{a.func}.s"))
    d = ROOT / ".cache" / "permuter" / a.func
    shutil.rmtree(d, ignore_errors=True)
    d.mkdir(parents=True)
    # objeto-alvo: o assembly original montado isoladamente
    tgt_s = d / "target.s"
    tgt_s.write_text('.include "macro.inc"\n.set noat\n.set noreorder\n.section .text\n'
                     + asm.read_text(encoding="utf-8"), encoding="utf-8")
    subprocess.run(["mips-linux-gnu-as", "-EL", "-Iinclude", "-march=r3000", "-no-pad-sections",
                    "-G0", "-o", str(d / "target.o"), str(tgt_s)], cwd=ROOT, check=True)
    # o permuter trabalha sobre um C já pré-processado
    pre = subprocess.run(f"mips-linux-gnu-cpp -Iinclude -undef -lang-c -nostdinc -P -DPERMUTER {a.src}",
                         shell=True, cwd=ROOT, capture_output=True, text=True, check=True).stdout
    (d / "base.c").write_text(pre, encoding="utf-8")
    (d / "compile.sh").write_text(COMPILE_SH.replace("{gcc}", a.gcc).replace("{target}", a.target), encoding="utf-8")
    (d / "compile.sh").chmod(0o755)
    (d / "settings.toml").write_text(f'func_name = "{a.func}"\ncompiler_type = "gcc"\n', encoding="utf-8")
    cmd = ["timeout", str(a.seconds), "python3", "/opt/decomp-permuter/permuter.py", str(d),
           "-j", str(a.jobs), "--stop-on-zero", "--best-only"]
    print(" ".join(cmd))
    sys.exit(subprocess.run(cmd, cwd=ROOT).returncode)


if __name__ == "__main__":
    main()
