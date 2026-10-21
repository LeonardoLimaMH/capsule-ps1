#!/usr/bin/env python3
"""Gera o assembly de TODAS as funções de um alvo em .cache/fullasm/<alvo>/.

O split normal só grava .s das funções ainda em INCLUDE_ASM. Ferramentas de
análise (gêmeos, detecção de assembly escrito à mão) precisam de todas, então
rodamos o splat com uma cópia da config apontando src/asm/ld/auto para .cache
(nada do projeto é alterado) e um src vazio (tudo vira INCLUDE_ASM).

Uso (no container): full_asm.py <alvo> [...]
Resultado: .cache/fullasm/<alvo>/nonmatchings/<arquivo>/<função>.s
"""
import pathlib
import re
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent


def generate(target):
    base = ROOT / ".cache" / "fullasm"
    out = base / target
    shutil.rmtree(out, ignore_errors=True)
    shutil.rmtree(base / f"src_{target}", ignore_errors=True)
    y = (ROOT / "config" / f"{target}.yaml").read_text(encoding="utf-8")
    rel = f".cache/fullasm"
    y = re.sub(r"(?m)^  asm_path: .*$", f"  asm_path: {rel}/{target}", y)
    y = re.sub(r"(?m)^  src_path: .*$", f"  src_path: {rel}/src_{target}", y)
    y = re.sub(r"(?m)^  build_path: .*$", f"  build_path: {rel}/build_{target}", y)
    y = re.sub(r"(?m)^  ld_script_path: .*$", f"  ld_script_path: {rel}/{target}.ld", y)
    y = re.sub(r"(?m)^  undefined_funcs_auto_path: .*$", f"  undefined_funcs_auto_path: {rel}/uf_{target}.txt", y)
    y = re.sub(r"(?m)^  undefined_syms_auto_path: .*$", f"  undefined_syms_auto_path: {rel}/us_{target}.txt", y)
    cfg = base / f"{target}.yaml"
    base.mkdir(parents=True, exist_ok=True)
    # base_path ".." é relativo à pasta da config: a cópia fica dois níveis abaixo
    cfg.write_text(y.replace("  base_path: ..", "  base_path: ../.."), encoding="utf-8")
    r = subprocess.run(["splat", "split", str(cfg)], cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        sys.exit(r.stderr[-2000:])
    subprocess.run([sys.executable, "tools/postsplit.py", str(out)], cwd=ROOT, check=True,
                   capture_output=True)
    n = len(list((out / "nonmatchings").rglob("*.s")))
    print(f"{target}: {n} funções em {out.relative_to(ROOT)}")


if __name__ == "__main__":
    for t in sys.argv[1:] or ["yuugi", "slpm", "chess", "raise", "etc"]:
        generate(t)
