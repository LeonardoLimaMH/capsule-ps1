#!/usr/bin/env python3
"""Arquivos que podem passar para o GCC 2.7.2 do CDK (2.7.2-cdk).

Para cada arquivo-fonte com funções casadas pelo CDK (varredura de perfis,
.cache/sweep/results_cdk.tsv, ou autodecomp, .cache/auto/<alvo>/<f>.gcc), confere se TODAS
as funções já em C no arquivo também
casam com o CDK (tools/match.py sobre o próprio arquivo). Se sim, o arquivo pode trocar de
compilador sem mudar nenhum byte do build e os candidatos do CDK entram nele.

Uso (no container):
  cdk_files.py <alvo> [--apply]   --apply: grava config/compilers.txt e copia os candidatos
                                   para .cache/auto/<alvo> (integrar com autodecomp --apply)
"""
import argparse
import pathlib
import re
import shutil
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from assign_compilers import FUNC, current  # noqa: E402
from split_tu import set_compiler  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
CDK = "2.7.2-cdk"


def matches(target, func, src):
    r = subprocess.run([sys.executable, str(ROOT / "tools" / "match.py"), target, func, str(src), "--gcc", CDK, "-q"],
                       cwd=ROOT, capture_output=True, text=True)
    return r.returncode == 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    res = ROOT / ".cache" / "sweep" / "results_cdk.tsv"
    cdk = {l.split("\t")[1] for l in res.read_text(encoding="utf-8").splitlines()
           if l.split("\t")[0] == a.target and l.split("\t")[2] == "MATCH"}
    # candidatos do autodecomp que casaram com o CDK (.cache/auto/<alvo>/<f>.gcc)
    auto_dir = ROOT / ".cache" / "auto" / a.target
    from_auto = ({g.stem for g in auto_dir.glob("*.gcc") if g.read_text().strip() == CDK}
                 if auto_dir.exists() else set())
    cdk |= from_auto
    ok_files, staged = [], 0
    for c in sorted((ROOT / "src" / a.target).rglob("*.c")):
        text = c.read_text(encoding="utf-8")
        found = [m.group(1) or m.group(2) for m in FUNC.finditer(text)]
        mine = [f for f in found if f in cdk]
        if not mine:
            continue
        key = c.relative_to(ROOT).as_posix()
        if "+g0fill" in current(key):
            print(f"{key}: perfil PsyQ (g0fill), fica como está")
            continue
        in_c = [m.group(2) for m in FUNC.finditer(text) if m.group(2) and not m.group(2).startswith("__maspsx")]
        bad = [f for f in in_c if not matches(a.target, f, c)]
        if bad:
            print(f"{key}: {len(mine)} casadas no CDK, mas {len(bad)} já em C não casam no CDK ({', '.join(bad[:3])})")
            continue
        print(f"{key}: pode passar para o CDK ({len(mine)} casadas, {len(in_c)} já em C também casam)")
        ok_files.append((c, mine))
        if a.apply:
            set_compiler(a.target, c.stem, CDK)
            auto = ROOT / ".cache" / "auto" / a.target
            auto.mkdir(parents=True, exist_ok=True)
            for f in mine:
                if f in from_auto:
                    continue  # já está em .cache/auto
                shutil.copy(ROOT / ".cache" / "sweep" / a.target / f"{f}.c", auto / f"{f}.c")
                (auto / f"{f}.gcc").write_text(CDK + "\n", encoding="utf-8")
                staged += 1
    print(f"{len(ok_files)} arquivos podem passar para o CDK" + (f"; {staged} candidatos copiados" if a.apply else ""))


if __name__ == "__main__":
    main()
