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
import shlex
import shutil
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match
import g0fill

ROOT = pathlib.Path(__file__).resolve().parent.parent
COMPILE_SH = """#!/bin/bash
set -euo pipefail
INPUT="$(realpath "$1")"
OUTPUT="$(realpath -m "$3")"
cd {root}
mips-linux-gnu-cpp {cpp_flags} -DPERMUTER "$INPUT" \\
  | /opt/gcc-{gcc}/cc1 {cflags} -quiet -mcpu=3000 -fgnu-linker -mgas -msoft-float -gcoff \\
  | {backend}
"""


def compile_script(target, gcc, use_g0fill=False, spfill=False):
    backend = (g0fill.backend('"$OUTPUT"', spfill, target) if use_g0fill else
               f'{match.MASPSX} --target {target} -o "$OUTPUT"')
    return COMPILE_SH.format(root=shlex.quote(str(ROOT)), cpp_flags=match.CPP_FLAGS,
                             gcc=gcc, cflags='-O2 -G0' if use_g0fill else '-O2 -G8',
                             backend=backend)


def declare_implicit_calls(source):
    """Make C89's implicit int declarations visible to the permuter's type checker.

    Function pointers and existing declarations retain their original types.
    This does not infer argument types or rewrite the function body.
    """
    from pycparser import c_ast, c_parser

    tree = c_parser.CParser().parse(source)
    declared, called = set(), set()

    class Calls(c_ast.NodeVisitor):
        def visit_Decl(self, node):
            if node.name:
                declared.add(node.name)
            self.generic_visit(node)

        def visit_FuncCall(self, node):
            if isinstance(node.name, c_ast.ID):
                called.add(node.name.name)
            self.generic_visit(node)

    Calls().visit(tree)
    names = sorted(n for n in called - declared if not n.startswith('__builtin_'))
    return ''.join(f'extern int {name}();\n' for name in names) + source


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("--seconds", type=int, default=600)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true", help="perfil das bibliotecas PsyQ")
    ap.add_argument("--spfill", action="store_true", help="com o addu $sp no delay slot do retorno")
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
    pre = subprocess.run(["mips-linux-gnu-cpp", *shlex.split(match.CPP_FLAGS),
                          "-P", "-DPERMUTER", a.src], cwd=ROOT,
                         capture_output=True, text=True, check=True).stdout
    pre = declare_implicit_calls(pre)
    (d / "base.c").write_text(pre, encoding="utf-8")
    (d / "compile.sh").write_text(compile_script(a.target, a.gcc, a.g0fill, a.spfill), encoding="utf-8")
    (d / "compile.sh").chmod(0o755)
    (d / "settings.toml").write_text(f'func_name = "{a.func}"\ncompiler_type = "gcc"\n', encoding="utf-8")
    cmd = ["timeout", str(a.seconds), "python3", "/opt/decomp-permuter/permuter.py", str(d),
           "-j", str(a.jobs), "--stop-on-zero", "--best-only"]
    print(" ".join(cmd))
    sys.exit(subprocess.run(cmd, cwd=ROOT).returncode)


if __name__ == "__main__":
    main()
