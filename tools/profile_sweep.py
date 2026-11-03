#!/usr/bin/env python3
"""Varredura de perfis: o C equivalente (equiv/) de cada função ainda em assembly,
compilado com cada perfil de compilador, procurando byte-matching.

Ideia adaptada do projeto Yu-Gi-Oh! Forbidden Memories Recompiled
(tools/project/run_remaining_profile_pass.py, MIT): repassar toda função pendente por
todos os perfis antes de mexer no C. Aqui os perfis são compilador (GCC 2.7.2 / 2.8.1)
x perfil das bibliotecas PsyQ (-G0 + aspsx_fill); o GCC 2.7.2 do CDK da Sony (2.7.2-cdk)
entrou depois de casar uma família de funções que nenhum dos outros dois fechava. Flags extras (-fno-schedule-insns,
-fno-strength-reduce, -fno-cse-follow-jumps, -O1, -msplit-addresses) foram medidas numa
amostra de 57 funções e não casaram nenhuma: o jogo usa as flags padrão.

O primeiro perfil testado é o da unidade de tradução onde a função está hoje: um
casamento nele entra no build sem separar arquivos (tools/autodecomp.py --apply).

Resultados (retomável: funções já registradas não são refeitas, a menos que o C de
equiv/ ou o perfil da TU tenham mudado desde a linha gravada):
  .cache/sweep/results.tsv          alvo, função, resultado, perfil, perfil da TU, diferença,
                                    fp=<sha1 do C + perfil da TU> (linhas sem fp contam como velhas)
  .cache/sweep/<alvo>/<func>.c/.gcc candidatos casados, no formato do autodecomp

Uso (dentro do container):
  profile_sweep.py [alvos...] [--limit N] [--jobs 4]
  profile_sweep.py --stage <alvo>   copia os casados no perfil da TU para .cache/auto/<alvo>
  profile_sweep.py --stage <alvo> --all   inclui os casados em outro perfil (para --split)
"""
import argparse
import concurrent.futures
import hashlib
import pathlib
import re
import shutil
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import g0fill  # noqa: E402

SWEEP = ROOT / ".cache" / "sweep"
RESULTS = SWEEP / "results.tsv"
ONLY = []  # --profiles: testa só estes compiladores
TARGETS = ("yuugi", "slpm", "raise", "chess", "etc")
INCLUDE = re.compile(r'INCLUDE_ASM\("[^"]*",\s*(\w+)\)')
STATUS = re.compile(r"\[(MATCH[^\]]*|DIFERENTE[^\]]*)\]")


def tu_profile(path):
    """perfil do arquivo-fonte: compilador (config/compilers.txt) + g0fill."""
    gcc = "2.7.2-psx"
    for line in (ROOT / "config" / "compilers.txt").read_text(encoding="utf-8").splitlines():
        p = line.split("#")[0].split()
        if len(p) == 2 and (ROOT / p[0]).resolve() == path.resolve():
            gcc = p[1]
    return gcc + ("+g0fill" if g0fill.enabled(path) else "")


def pending(target):
    """(função, perfil da TU) das funções em INCLUDE_ASM com C equivalente."""
    out = []
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        prof = None
        for func in INCLUDE.findall(c.read_text(encoding="utf-8")):
            if (ROOT / "equiv" / target / f"{func}.c").exists():
                prof = prof or tu_profile(c)
                out.append((func, prof))
    return out


BASE = ["2.7.2-psx", "2.8.1-psx", "2.7.2-cdk"]


def profiles(target, tu, asm_text):
    base = BASE
    allp = base + ([g + "+g0fill" for g in base]
                   if target in ("yuugi", "slpm") and "$gp" not in asm_text else [])
    if ONLY:
        return [p for p in allp if p.split("+")[0] in ONLY]
    return [tu] + [p for p in allp if p != tu]


def asm_text(target, func):
    for p in (ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"):
        return p.read_text(encoding="utf-8", errors="replace")
    return ""


def try_profile(target, func, src, prof):
    gcc, _, extra = prof.partition("+")
    cmd = [sys.executable, str(ROOT / "tools" / "match.py"), target, func, str(src), "--gcc", gcc, "-q"]
    if extra == "g0fill":
        cmd.append("--g0fill")
    try:
        r = subprocess.run(cmd, capture_output=True, text=True, timeout=120, cwd=ROOT)
    except subprocess.TimeoutExpired:
        return "ERRO", "tempo esgotado"
    m = STATUS.search(r.stdout)
    if not m:
        return "ERRO", (r.stderr.strip().splitlines() or ["?"])[-1][:120]
    if m.group(1).startswith("MATCH"):
        return ("MATCH", "") if r.returncode == 0 else ("ERRO", "match retornou erro")
    return "DIFERENTE", m.group(1)[len("DIFERENTE "):]


def fingerprint(target, func, tu):
    """Identifica a entrada da varredura: o C de equiv/ e o perfil da TU onde a função está."""
    src = (ROOT / "equiv" / target / f"{func}.c").read_bytes()
    return "fp=" + hashlib.sha1(src + b"\0" + tu.encode()).hexdigest()[:16]


def sweep_one(target, func, tu):
    src = ROOT / "equiv" / target / f"{func}.c"
    best = None
    for prof in profiles(target, tu, asm_text(target, func)):
        res, info = try_profile(target, func, src, prof)
        if res == "MATCH":
            d = SWEEP / target
            d.mkdir(parents=True, exist_ok=True)
            shutil.copy(src, d / f"{func}.c")
            (d / f"{func}.gcc").write_text(prof + "\n", encoding="utf-8")
            return (target, func, "MATCH", prof, tu, "", fingerprint(target, func, tu))
        if res == "DIFERENTE":
            n = int(re.match(r"\((\d+)", info).group(1)) if re.match(r"\((\d+)", info) else 10 ** 6
            if best is None or n < best[0]:
                best = (n, prof, info)
        elif best is None:
            best = (10 ** 6, prof, info)
    return (target, func, "DIFERENTE" if best[0] < 10 ** 6 else "ERRO", best[1], tu, best[2],
            fingerprint(target, func, tu))


def stage(target, every=False):
    """copia para .cache/auto/<alvo> os casados no mesmo perfil da TU (integração direta);
    com every=True copia todos, para o assign_compilers.py --split separar as TUs."""
    auto = ROOT / ".cache" / "auto" / target
    auto.mkdir(parents=True, exist_ok=True)
    n = 0
    # última linha de cada função, e só se ainda vale para o C e a TU de agora
    current = {f: fingerprint(target, f, tu) for f, tu in pending(target)}
    latest = {}
    for line in RESULTS.read_text(encoding="utf-8").splitlines():
        p = line.split("\t")
        if p[0] == target:
            latest[p[1]] = p
    for func, p in latest.items():
        t, _, res, prof, tu = p[:5]
        if p[-1] != current.get(func):
            continue
        if res == "MATCH" and (every or prof == tu):
            shutil.copy(SWEEP / t / f"{func}.c", auto / f"{func}.c")
            (auto / f"{func}.gcc").write_text(prof + "\n", encoding="utf-8")
            n += 1
    print(f"{n} candidatos de {target} copiados para .cache/auto/{target}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("targets", nargs="*", default=list(TARGETS))
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("--stage")
    ap.add_argument("--profiles", default="", help="só estes compiladores (ex.: 2.7.2-cdk)")
    ap.add_argument("--results", default="", help="arquivo de resultados (padrão results.tsv)")
    ap.add_argument("--skip-matched", default="", help="pula as casadas neste arquivo de resultados")
    ap.add_argument("--all", action="store_true", help="com --stage: inclui os casados em outro perfil")
    a = ap.parse_args()
    SWEEP.mkdir(parents=True, exist_ok=True)
    global RESULTS, ONLY
    if a.results:
        RESULTS = ROOT / a.results
    if a.profiles:
        ONLY = a.profiles.split(",")
    if a.stage:
        stage(a.stage, a.all)
        return
    # uma linha só vale se o C e o perfil da TU continuam os mesmos (fp na última coluna)
    seen = {}
    if RESULTS.exists():
        for l in RESULTS.read_text(encoding="utf-8").splitlines():
            p = l.split("\t")
            if len(p) >= 7 and p[-1].startswith("fp="):
                seen[(p[0], p[1])] = p[-1]
    done = set()
    if a.skip_matched:
        done |= {tuple(l.split("\t")[:2]) for l in (ROOT / a.skip_matched).read_text(encoding="utf-8").splitlines()
                 if l.split("\t")[2] == "MATCH"}
    work = [(t, f, tu) for t in a.targets for f, tu in pending(t)
            if (t, f) not in done and seen.get((t, f)) != fingerprint(t, f, tu)]
    total = len(work)
    if a.limit:
        work = work[:a.limit]
    print(f"{total} funções pendentes na varredura; neste lote: {len(work)}", flush=True)
    matched = 0
    with concurrent.futures.ThreadPoolExecutor(a.jobs) as ex, RESULTS.open("a", encoding="utf-8") as out:
        for row in ex.map(lambda w: sweep_one(*w), work):
            out.write("\t".join(row) + "\n")
            out.flush()
            if row[2] == "MATCH":
                matched += 1
                print(f"MATCH {row[0]}:{row[1]} {row[3]}" + ("" if row[3] == row[4] else f" (TU: {row[4]})"),
                      flush=True)
    print(f"lote: {matched} casadas de {len(work)}")


if __name__ == "__main__":
    main()
