#!/usr/bin/env python3
"""Arquivos do SDK que podem passar para o perfil PsyQ com o retorno preenchido pelo `addu $sp`.

Parte das bibliotecas foi montada por um ASPSX que leva a desalocação do quadro para o delay
slot do `jr $ra` (tools/aspsx_fill.py --sp, config/spfill.txt). Para cada arquivo-fonte cujo
assembly original só tem esse padrão de retorno (nenhum `addiu $sp / jr $ra / nop`), testa o C
de equiv/ das funções ainda em INCLUDE_ASM com cada compilador no perfil -G0 + fill + sp; nos
arquivos só com o outro padrão (ou sem nenhum), no perfil -G0 + fill sem o sp. Um
compilador serve para o arquivo se todas as funções já em C nele também casam assim; então o
arquivo troca de perfil (config/compilers.txt, g0fill.txt, spfill.txt) e os candidatos vão
para .cache/auto/<alvo> (integrar com autodecomp.py --apply).

Uso (no container): spfill_files.py <alvo> [--apply] [--only arquivo]
"""
import argparse
import pathlib
import re
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from assign_compilers import FUNC, current  # noqa: E402
from split_tu import set_compiler  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
INCLUDE = re.compile(r"INCLUDE_ASM\([^,]+,\s*(\w+)\)")
COMPILERS = ["2.7.2-psx", "2.8.1-psx", "2.7.2-cdk", "2.6.3-psx"]
SPLIST = ROOT / "config" / "spfill.txt"


def epilogues(path):
    """(retornos `addiu $sp / jr $ra / nop`, retornos `jr $ra / addiu $sp`) de um .s."""
    rows = [re.sub(r"/\*.*?\*/", "", l).split() for l in path.read_text(errors="replace").splitlines()]
    rows = [x for x in rows if x and not x[0].startswith(("glabel", "endlabel", "nonmatching", "."))
            and not x[0].endswith(":")]
    nop = fill = 0
    for i in range(1, len(rows) - 1):
        if rows[i][:2] == ["jr", "$ra"]:
            nop += rows[i + 1][0] == "nop" and rows[i - 1][:2] == ["addiu", "$sp,"]
            fill += rows[i + 1][:2] == ["addiu", "$sp,"]
    return nop, fill


def matches(target, func, src, gcc, sp):
    r = subprocess.run([sys.executable, str(ROOT / "tools" / "match.py"), target, func, str(src),
                        "--gcc", gcc, "--g0fill", "-q"] + (["--spfill"] if sp else []),
                       cwd=ROOT, capture_output=True, text=True)
    return r.returncode == 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--only")
    a = ap.parse_args()
    idx = {p.stem: p for p in (ROOT / ".cache" / "fullasm" / a.target / "nonmatchings").rglob("*.s")}
    listed = SPLIST.read_text(encoding="utf-8").splitlines() if SPLIST.exists() else []
    g0 = set((ROOT / "config" / "g0fill.txt").read_text(encoding="utf-8").split())
    total = 0
    for c in sorted((ROOT / "src" / a.target).rglob("*.c")):
        key = c.relative_to(ROOT).as_posix()
        if a.only and a.only not in key:
            continue
        text = c.read_text(encoding="utf-8")
        in_c = [m.group(2) for m in FUNC.finditer(text) if m.group(2) and not m.group(2).startswith("__maspsx")]
        pending = INCLUDE.findall(text)
        nop = fill = 0
        for f in in_c + pending:
            if f in idx:
                n, k = epilogues(idx[f])
                nop, fill = nop + n, fill + k
        if fill and nop:
            continue  # padrões misturados: não é um arquivo só
        sp = bool(fill)
        if (not sp and key in g0 and key not in listed) or (sp and key in g0 and key in listed):
            continue  # já está no perfil: os candidatos casados já foram integrados
        cands = [f for f in pending if (ROOT / "equiv" / a.target / f"{f}.c").exists()]
        if not cands:
            continue
        best = None
        for gcc in COMPILERS:
            hit = [f for f in cands if matches(a.target, f, ROOT / "equiv" / a.target / f"{f}.c", gcc, sp)]
            if hit and (best is None or len(hit) > len(best[1])):
                best = (gcc, hit)
        if not best:
            print(f"{key}: nenhum dos {len(cands)} candidatos casa", flush=True)
            continue
        gcc, hit = best
        same = current(key) == gcc + "+g0fill" and (key in listed) == sp
        bad = [] if same else [f for f in in_c if not matches(a.target, f, c, gcc, sp)]
        if bad:
            print(f"{key}: {len(hit)} casam com {gcc}, mas {len(bad)} já em C não ({', '.join(bad[:3])})", flush=True)
            continue
        print(f"{key}: {gcc}+g0fill{'+sp' if sp else ''}, {len(hit)} casam ({', '.join(hit[:4])})", flush=True)
        total += len(hit)
        if a.apply:
            set_compiler(a.target, c.stem, gcc + "+g0fill")
            if sp and key not in listed:
                listed.append(key)
                SPLIST.write_text("\n".join(listed) + "\n", encoding="utf-8", newline="\n")
            auto = ROOT / ".cache" / "auto" / a.target
            auto.mkdir(parents=True, exist_ok=True)
            for f in hit:
                (auto / f"{f}.c").write_text((ROOT / "equiv" / a.target / f"{f}.c").read_text(encoding="utf-8"),
                                             encoding="utf-8", newline="\n")
                (auto / f"{f}.gcc").write_text(gcc + "+g0fill\n", encoding="utf-8")
    print(f"{total} funções casam no perfil com o retorno preenchido")


if __name__ == "__main__":
    main()
