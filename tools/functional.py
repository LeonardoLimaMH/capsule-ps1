#!/usr/bin/env python3
"""Trilha funcional: C equivalente (não byte-idêntico) validado por teste diferencial.

Para cada função ainda em INCLUDE_ASM, pega o melhor rascunho que compila (gravado
pelo autodecomp em .cache/best, ou gerado na hora) e roda tools/difftest.py: o
original e o C executam lado a lado no Unicorn a partir dos mesmos estados
aleatórios, comparando registradores, a RAM inteira e as chamadas a funções do SDK.
Só "EQUIVALENTE" é aceito; divergente, inconclusivo e não suportado (GTE) ficam de
fora. Aceitas vão para equiv/<alvo>/<função>.c (versionado). O build padrão não
usa esses arquivos: ele continua byte-idêntico com INCLUDE_ASM.

Uso (no container):
  functional.py <alvo> [--jobs 2] [--limit N] [--only FUNC] [--retry]
  functional.py --check <alvo>    # revalida o que já está em equiv/
"""
import argparse
import concurrent.futures as cf
import json
import pathlib
import subprocess
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402
from handwritten import load as load_handwritten  # noqa: E402
import retuse  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
EQUIV = ROOT / "equiv"
TRIED = ROOT / ".cache" / "functional"  # resultado da última tentativa por função


def difftest(target, func, src):
    extra = [] if retuse.used(func) else ["--ignore-v0"]  # retorno que nenhum chamador lê
    r = subprocess.run(["python3", "tools/difftest.py", target, func, "--src", str(src), "--abi", "--isolate"] + extra,
                       cwd=ROOT, capture_output=True, text=True, timeout=900)
    out = (r.stdout.strip().splitlines() or [r.stderr.strip()[-200:]])[-1]
    return r.returncode, out


def draft(target, func):
    rec = ad.load_best(target, func)
    if rec is None:
        _, _, rec = ad.evaluate(target, func, ad.DRAFT_HEURISTICS)
    return rec.get("c")


def try_function(target, func, every=False):
    """Testa o rascunho mais próximo; com every, também os demais (all_drafts) até um passar."""
    c = draft(target, func)
    if c and "+g0fill" in (ad.load_best(target, func) or {}).get("gcc", ""):
        c = ad.scalarize(c)
    cands = [c] if c else []
    if every:
        cands += [d for d in ad.all_drafts(target, func) if d != c]
    if not cands:
        return func, "sem rascunho que compile"
    out = EQUIV / target / f"{func}.c"
    out.parent.mkdir(parents=True, exist_ok=True)
    code, msg = 2, "sem rascunho"
    for cand in cands:
        out.write_text(ad.HEADER + cand.strip() + "\n", encoding="utf-8", newline="\n")
        try:
            code, msg = difftest(target, func, out.relative_to(ROOT))
        except subprocess.TimeoutExpired:
            code, msg = 2, "tempo esgotado"
        if code == 0:
            break
    if code != 0:
        out.unlink()
    d = TRIED / target
    d.mkdir(parents=True, exist_ok=True)
    (d / f"{func}.json").write_text(json.dumps({"code": code, "msg": msg}, ensure_ascii=False),
                                    encoding="utf-8")
    return func, ("EQUIVALENTE" if code == 0 else msg.split("]")[0].lstrip("[") or "falhou")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--jobs", type=int, default=2)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--only")
    ap.add_argument("--retry", action="store_true", help="tentar de novo as que já falharam")
    ap.add_argument("--every", action="store_true",
                    help="além do rascunho mais próximo, testar todas as variantes (m2c, Ghidra)")
    ap.add_argument("--check", action="store_true")
    a = ap.parse_args()
    t = a.target
    ad.HANDWRITTEN.setdefault(t, load_handwritten(t))
    if a.check:
        bad = 0
        for f in sorted((EQUIV / t).glob("*.c")):
            code, msg = difftest(t, f.stem, f.relative_to(ROOT))
            if code:
                bad += 1
                print(f"  {f.stem}: {msg}")
        print(f"{t}: {bad} falhas na revalidação")
        sys.exit(1 if bad else 0)
    pending = {f for _, f in ad.pending_functions(t)}
    for old in (EQUIV / t).glob("*.c"):
        if old.stem not in pending:  # já casou byte a byte: o C equivalente sai
            old.unlink()
            print(f"  removido {old.stem} (já em C byte-idêntico)")
    funcs = []
    for _, f in ad.pending_functions(t):
        if (EQUIV / t / f"{f}.c").exists() or (a.only and f != a.only):
            continue
        if not a.retry and (TRIED / t / f"{f}.json").exists():
            continue
        if f in ad.HANDWRITTEN.get(t, {}):
            continue
        funcs.append(f)
    if a.limit:
        funcs = funcs[:a.limit]
    print(f"{t}: {len(funcs)} funções a tentar", flush=True)
    stats = {}
    with cf.ThreadPoolExecutor(a.jobs) as ex:
        for f, why in ex.map(lambda f: try_function(t, f, a.every), funcs):
            stats[why] = stats.get(why, 0) + 1
            if why == "EQUIVALENTE":
                print(f"  EQUIVALENTE {f}", flush=True)
    print("resumo:", stats)


if __name__ == "__main__":
    main()
