#!/usr/bin/env python3
"""Permuter em lote nos quase-acertos (candidato medido na bancada fixa).

Seleciona funções pendentes cuja melhor tentativa do pipeline tem o MESMO
tamanho do original e até --max-diff instruções diferentes, roda o
decomp-permuter por --seconds em cada uma e verifica o melhor resultado com
tools/match.py. Pontuação 0 = bytes idênticos (correção garantida pela
comparação; os testes diferenciais conferem o comportamento depois da aplicação).

Uso (no container):
  permute_batch.py --bench [--seconds 120] [--max-diff 40]   # funções da bancada (medição)
  permute_batch.py --target yuugi [...]                       # todas as pendentes de um alvo
Casamentos vão para .cache/auto (aplicar com autodecomp.py --apply).
"""
import argparse
import pathlib
import re
import shutil
import subprocess
import sys
import tempfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402
import bench  # noqa: E402
from handwritten import load as load_handwritten  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent


def candidates(funcs, max_diff, cached=False):
    out = []
    for t, f in funcs:
        ad.HANDWRITTEN.setdefault(t, load_handwritten(t))
        rec = ad.load_best(t, f) if cached else None
        if rec is not None:  # melhor tentativa gravada pela última rodada do autodecomp
            c, gcc = None, None
        else:
            c, gcc, rec = ad.evaluate(t, f, ad.DRAFT_HEURISTICS)
        if c:
            out.append((t, f, None, gcc, 0))  # já casa com o conjunto de rascunho
        elif (rec.get("same_len") and rec.get("n", 999) <= max_diff and rec.get("c")
              and "+" not in (rec.get("gcc") or "")):  # tools/permute.py não conhece o perfil g0fill
            out.append((t, f, rec["c"], rec["gcc"], rec["n"]))
    return out


def permute(t, f, c, gcc, seconds, jobs):
    src = pathlib.Path(tempfile.mkdtemp()) / f"{f}.c"
    src.write_text(ad.HEADER + c + "\n", encoding="utf-8")
    d = ROOT / ".cache" / "permuter" / f
    subprocess.run(["python3", "tools/permute.py", t, f, str(src), "--seconds", str(seconds),
                    "--jobs", str(jobs), "--gcc", gcc], cwd=ROOT, capture_output=True, text=True)
    outs = sorted(d.glob("output-*"), key=lambda p: int(p.name.split("-")[1]))
    for o in outs[:3]:
        cand = o / "source.c"
        r = subprocess.run(["python3", "tools/match.py", t, f, str(cand), "-q", "--gcc", gcc],
                           cwd=ROOT, capture_output=True, text=True)
        if r.returncode == 0:
            body = cand.read_text(encoding="utf-8")
            m = re.search(rf"^[^\n;]*\b{f}\s*\(", body, re.M)
            return body[m.start():] if m else body
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--bench", action="store_true")
    ap.add_argument("--target")
    ap.add_argument("--seconds", type=int, default=120)
    ap.add_argument("--max-diff", type=int, default=40)
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--cached", action="store_true",
                    help="usar a melhor tentativa gravada pelo autodecomp (.cache/best) em vez de reavaliar")
    a = ap.parse_args()
    if a.bench:
        funcs = [(t, f) for t, f, kind, _ in bench.load_bench() if kind == "pendente"]
    else:
        funcs = [(a.target, f) for _, f in ad.pending_functions(a.target)]
    cands = candidates(funcs, a.max_diff, a.cached)
    print(f"{len(cands)} quase-acertos (mesmo tamanho, <= {a.max_diff} instruções diferentes)", flush=True)
    won = 0
    for t, f, c, gcc, n in sorted(cands, key=lambda x: x[4]):
        code = None if c is None else permute(t, f, c, gcc, a.seconds, a.jobs)
        if c is None:
            print(f"  {t}:{f} já casa com o conjunto de rascunho", flush=True)
            continue
        if code:
            store = ad.CACHE / t
            store.mkdir(parents=True, exist_ok=True)
            # o permuter trabalha sobre C pré-processado: guarda só a função (mais o
            # include dos tipos do Ghidra, se o rascunho veio dele)
            types = ad.ghidra2c.TYPES if ad.ghidra2c.TYPES in c else ""
            (store / f"{f}.c").write_text(types + code.strip() + "\n", encoding="utf-8")
            (store / f"{f}.gcc").write_text(gcc + "\n", encoding="utf-8")
            won += 1
        print(f"  {t}:{f} (n={n}): {'MATCH' if code else 'sem casamento'}", flush=True)
    print(f"permuter em lote: {won} casamentos novos em {len([c for c in cands if c[2]])} tentativas")


if __name__ == "__main__":
    main()
