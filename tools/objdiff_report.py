#!/usr/bin/env python3
"""Relatório de progresso no formato do objdiff, para o ByteMatch (bytematch.dev).

O ByteMatch não lê o README: ele importa o report.json do objdiff-cli. Este script
monta, para cada arquivo de src/ (uma unidade de tradução):

  alvo  build/objdiff/target/<alvo>/<arquivo>.o  o assembly original de TODAS as
        funções do arquivo (.cache/fullasm, gerado no make split), na ordem do arquivo
  base  build/objdiff/base/<alvo>/<arquivo>.o    o C do arquivo, compilado com o mesmo
        pipeline do build, mas com INCLUDE_ASM vazio (-DOBJDIFF_BASE): só as funções
        realmente em C entram, as que ainda são assembly ficam como não casadas

e gera objdiff.json, build/objdiff/report.json e build/objdiff/functional.json (o C
equivalente de equiv/ que ainda não é byte-exact: "Functional C" do ByteMatch, que
não conta como progresso). Diferenças só de relocação são ignoradas
(functionRelocDiffs=none): os endereços reais já são provados pelos 5 SHA-1 do build.

Uso:
  ./run.sh python3 tools/objdiff_report.py            gera tudo em build/objdiff/
  python tools/objdiff_report.py --upload             envia ao ByteMatch (no host; lê
                                                      SITE e BYTE_MATCH_TOKEN do .env)
O objdiff-cli fica em .cache/bin/objdiff-cli (release oficial do encounter/objdiff).
"""
import argparse
import io
import json
import pathlib
import re
import shutil
import subprocess
import sys
import urllib.parse
import urllib.request
import zipfile

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

OUT = ROOT / "build" / "objdiff"
VERSION = "SLPM-86096"
TARGETS = {
    "yuugi": "YUUGI.EXE (jogo principal)",
    "slpm": "SLPM_860.96 (boot/loader)",
    "chess": "CHESS.BIN (batalha)",
    "raise": "RAISE.BIN (criação de monstros)",
    "etc": "ETC.BIN (menus)",
}
OBJDIFF = ROOT / ".cache" / "bin" / "objdiff-cli"
AS_FLAGS = "-EL -march=r3000 -mtune=r3000 -no-pad-sections -Iinclude"


def tu_functions(text):
    import split_tu
    return [m.group(2) or m.group(3) for m in split_tu.FUNC_START.finditer(text)]


def build_target(t, src, funcs):
    """Objeto com o assembly original das funções do arquivo, na ordem do arquivo."""
    folder = ROOT / ".cache" / "fullasm" / t / "nonmatchings" / src.stem
    lines = ['.include "include/macro.inc"', ".set noat", ".set noreorder", ".text"]
    n = 0
    for f in funcs:
        s = folder / f"{f}.s"
        if s.exists():
            lines.append(f'.include "{s.relative_to(ROOT).as_posix()}"')
            n += 1
    if not n:
        return None
    asm = OUT / "target" / t / f"{src.stem}.s"
    asm.parent.mkdir(parents=True, exist_ok=True)
    asm.write_text("\n".join(lines) + "\n", encoding="utf-8")
    obj = asm.with_suffix(".o")
    subprocess.run(f"mips-linux-gnu-as {AS_FLAGS} -o {obj} {asm}", shell=True, check=True, cwd=ROOT)
    return obj


def build_base(t, src, comp, g0, sp):
    """Objeto do C do arquivo, com INCLUDE_ASM vazio."""
    import match
    match.CPP_FLAGS = match.CPP_FLAGS.replace("-DOBJDIFF_BASE", "") + " -DOBJDIFF_BASE"
    obj = match.compile_c(src.relative_to(ROOT).as_posix(), comp, "-O2 -G8", g0, t, sp)
    dst = OUT / "base" / t / f"{src.stem}.o"
    dst.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy(obj, dst)
    return dst


def functional(units_funcs):
    """C equivalente (equiv/) das funções ainda em assembly. Confiança 'medium' para as que
    divergiram no modo estrito do difftest (--abi --isolate) e não foram refeitas depois."""
    strict_div = set()
    for p in (ROOT / ".cache" / "tmp").glob("ba_dt*.tsv"):
        for l in p.read_text(encoding="utf-8", errors="replace").splitlines():
            c = l.split("\t")
            if len(c) >= 4 and c[-1].startswith("[DIVERGENTE]"):
                strict_div.add((c[0], c[1]))
    out = []
    for t, pending in units_funcs.items():
        for f in sorted(pending):
            if (ROOT / "equiv" / t / f"{f}.c").exists():
                out.append({"name": f, "confidence": "medium" if (t, f) in strict_div else "high"})
    return {"functions": out}


def generate():
    import progress
    comp = {}
    for l in (ROOT / "config" / "compilers.txt").read_text(encoding="utf-8").splitlines():
        p = l.split("#")[0].split()
        if len(p) >= 2:
            comp[p[0]] = p[1]
    g0 = set((ROOT / "config" / "g0fill.txt").read_text(encoding="utf-8").split())
    sp = set((ROOT / "config" / "spfill.txt").read_text(encoding="utf-8").split())
    include = re.compile(r'^INCLUDE_ASM\("[^"]+",\s*(\w+)\);', re.M)

    if OUT.exists():
        shutil.rmtree(OUT)
    units, pending_all = [], {}
    for t in TARGETS:
        lib = progress.psyq_names(t)
        pending_all[t] = set()
        for src in sorted((ROOT / "src" / t).glob("*.c")):
            text = src.read_text(encoding="utf-8")
            funcs = tu_functions(text)
            pending = set(include.findall(text))
            pending_all[t] |= pending
            key = src.relative_to(ROOT).as_posix()
            tobj = build_target(t, src, funcs)
            if tobj is None:
                continue
            gcc = comp.get(key, "2.7.2-psx").split("+")[0]
            bobj = build_base(t, src, gcc, key in g0, key in sp) if len(pending) < len(funcs) else None
            sdk = sum(f in lib for f in funcs) * 2 > len(funcs)
            unit = {
                "name": f"{t}/{src.stem}",
                "target_path": tobj.relative_to(ROOT).as_posix(),
                "metadata": {
                    "source_path": key,
                    "progress_categories": [t, f"{t}.{'sdk' if sdk else 'game'}"],
                    "complete": not pending,
                },
            }
            if bobj is not None:
                unit["base_path"] = bobj.relative_to(ROOT).as_posix()
            units.append(unit)
        print(f"{t}: {sum(u['name'].startswith(t + '/') for u in units)} unidades", flush=True)

    cats = []
    for t, label in TARGETS.items():
        cats += [{"id": t, "name": label},
                 {"id": f"{t}.game", "name": f"{t.upper()}: código do jogo"},
                 {"id": f"{t}.sdk", "name": f"{t.upper()}: SDK PsyQ"}]
    cfg = {
        "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
        "custom_make": "true",
        "build_target": False,
        "build_base": False,
        "units": units,
        "progress_categories": cats,
    }
    (ROOT / "objdiff.json").write_text(json.dumps(cfg, indent=2, ensure_ascii=False) + "\n",
                                       encoding="utf-8", newline="\n")
    subprocess.run([str(OBJDIFF), "report", "generate", "-p", str(ROOT), "-o", str(OUT / "report.json"),
                    "-c", "functionRelocDiffs=none"], check=True, cwd=ROOT)
    (OUT / "functional.json").write_text(json.dumps(functional(pending_all), indent=1) + "\n",
                                         encoding="utf-8", newline="\n")
    rep = json.loads((OUT / "report.json").read_text(encoding="utf-8"))
    m = rep.get("measures", {})
    print(f"report.json: código casado {m.get('matched_code_percent', 0):.2f}% "
          f"({m.get('matched_functions', 0)} de {m.get('total_functions', 0)} funções)")


def env():
    vals = {}
    for l in (ROOT / ".env").read_text(encoding="utf-8").splitlines():
        if "=" in l and not l.lstrip().startswith("#"):
            k, v = l.split("=", 1)
            vals[k.strip()] = v.strip().strip('"').strip("'")
    return vals


def upload():
    e = env()
    site, token = e["SITE"], e["BYTE_MATCH_TOKEN"]
    owner, repo = re.search(r"github\.com[/:]([^/]+)/([^/.]+)", site).groups()
    commit = subprocess.run(["git", "rev-parse", "HEAD"], capture_output=True, text=True,
                            cwd=ROOT, check=True).stdout.strip()
    msg = subprocess.run(["git", "log", "-1", "--format=%s"], capture_output=True, text=True,
                         cwd=ROOT, check=True).stdout.strip()
    when = subprocess.run(["git", "log", "-1", "--format=%cI"], capture_output=True, text=True,
                          cwd=ROOT, check=True).stdout.strip()
    buf = io.BytesIO()
    with zipfile.ZipFile(buf, "w", zipfile.ZIP_DEFLATED) as z:
        z.write(OUT / "report.json", "report.json")
        z.write(OUT / "functional.json", "functional.json")
    q = urllib.parse.urlencode({"version": VERSION, "commit": commit, "commit_message": msg,
                                "commit_timestamp": when})
    req = urllib.request.Request(f"https://bytematch.dev/api/v1/projects/{owner}/{repo}/reports?{q}",
                                 data=buf.getvalue(), method="POST",
                                 headers={"Authorization": f"Bearer {token}",
                                          "Content-Type": "application/zip",
                                          # o Cloudflare do site recusa o User-Agent padrão do urllib
                                          "User-Agent": "ygo-mcbb-decomp-objdiff-report/1.0"})
    try:
        with urllib.request.urlopen(req, timeout=120) as r:
            print(r.status, r.read().decode("utf-8", "replace"))
    except urllib.error.HTTPError as err:
        sys.exit(f"ByteMatch respondeu {err.code}: {err.read().decode('utf-8', 'replace')[:500]}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--upload", action="store_true", help="só envia o relatório já gerado")
    a = ap.parse_args()
    if a.upload:
        upload()
    else:
        generate()


if __name__ == "__main__":
    main()
