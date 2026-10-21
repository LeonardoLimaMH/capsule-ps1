#!/usr/bin/env python3
"""Diagnóstico das falhas do autodecomp numa amostra de funções (no container).

Para cada função ainda em INCLUDE_ASM (e não casada), gera o rascunho como o
autodecomp e compara com o original, registrando: compila?, tamanho igual?,
número de instruções diferentes e a categoria da primeira diferença
(ver classify()). Serve para priorizar melhorias e medir o efeito delas.

Uso: autodiag.py <alvo> [--n 80] [--max-size 0x200] [--seed 1] [--save arquivo.json]
"""
import argparse
import json
import pathlib
import random
import re
import subprocess
import sys
import tempfile
from collections import Counter

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
ROW = re.compile(r"^(>>|  ) [0-9A-F]{8}  (.{40}) \| (.*)$")


def classify(o, c):
    """Categoria de uma linha divergente (original x compilado)."""
    oo, cc = o.split(), c.split()
    if not oo or not cc or cc[0] == "-" or oo[0] == "-":
        return "tamanho"
    if oo[0] != cc[0]:
        pair = {oo[0], cc[0]}
        if pair & {"lh", "lhu", "lb", "lbu", "lw"} and len(pair & {"lh", "lhu", "lb", "lbu", "lw"}) == 2:
            return "tipo de load (sinal/largura)"
        if pair & {"sll", "sra", "srl", "andi"}:
            return "extensão/truncamento"
        if pair & {"slt", "sltu", "sltiu", "slti"}:
            return "comparação com/sem sinal"
        return "ordem/instrução diferente"
    if oo[1:] != cc[1:]:
        return "registradores"
    return "outro"


def diag(target, func):
    asm = ad.asm_path(target, func)
    text = asm.read_text(encoding="utf-8")
    draft = ad.run_m2c(target, func, asm)
    if draft is None:
        return {"f": func, "r": "m2c falhou"}
    c = ad.to_c(draft, func, text, {})
    if c is None:
        return {"f": func, "r": "tipo composto"}
    tmp = pathlib.Path(tempfile.mkdtemp()) / f"{func}.c"
    tmp.write_text(ad.HEADER + c + "\n", encoding="utf-8")
    r = subprocess.run(["python3", "tools/match.py", target, func, str(tmp), "--gcc",
                        ad.file_compiler(next((ROOT / "src" / target).rglob("*.c")))],
                       cwd=ROOT, capture_output=True, text=True, timeout=120)
    if "DIFERENTE" not in r.stdout and r.returncode:
        return {"f": func, "r": "não compila", "err": r.stdout[-300:] + r.stderr[-300:]}
    if r.returncode == 0:
        return {"f": func, "r": "MATCH"}
    m = re.search(r"\((\d+) instruções, (\d+) vs (\d+)\)", r.stdout)
    first = next((ROW.match(l) for l in r.stdout.splitlines() if l.startswith(">>")), None)
    return {"f": func, "r": "diferente", "n": int(m.group(1)), "len_o": int(m.group(2)),
            "len_c": int(m.group(3)),
            "cat": classify(first.group(2).strip(), first.group(3).strip()) if first else "?",
            "first": (first.group(2).strip() + " | " + first.group(3).strip()) if first else ""}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("--n", type=int, default=80)
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--save")
    ap.add_argument("--full", action="store_true", help="pipeline completo do autodecomp (conta casamentos)")
    a = ap.parse_args()
    store = ad.CACHE / a.target
    hand = ad.load_handwritten(a.target)
    pool = []
    for c, f in ad.pending_functions(a.target):
        p = ad.asm_path(a.target, f)
        if p and not (store / f"{f}.c").exists() and f not in hand and ad.func_size(p) <= a.max_size:
            t = p.read_text(encoding="utf-8")
            if not re.search(r"\b(rtps|rtpt|nclip|mvmva|mfc2|mtc2|cfc2|ctc2|lwc2|swc2)\b", t):
                pool.append(f)
    random.Random(a.seed).shuffle(pool)
    import concurrent.futures as cf
    if a.full:
        ad.HANDWRITTEN[a.target] = hand
        ad.PROTOS.update(ad.typeinfer.known_prototypes(
            [a.target] + (["yuugi"] if a.target in ("chess", "raise", "etc") else [])))
        with cf.ThreadPoolExecutor(12) as ex:
            res = list(ex.map(lambda f: ad.try_function(a.target, f), pool[:a.n]))
        print(Counter(r[2] for r in res))
        return
    with cf.ThreadPoolExecutor(12) as ex:
        res = list(ex.map(lambda f: diag(a.target, f), pool[:a.n]))
    print(Counter(r["r"] for r in res))
    d = [r for r in res if r["r"] == "diferente"]
    print("tamanho igual:", sum(r["len_o"] == r["len_c"] for r in d), "de", len(d))
    print("categorias da 1ª diferença:", Counter(r["cat"] for r in d).most_common())
    print("≤3 instruções diferentes:", sum(r["n"] <= 3 for r in d))
    for r in sorted(d, key=lambda r: r["n"])[:15]:
        print(f"  {r['f']:<16} n={r['n']:<3} {r['cat']:<28} {r['first']}")
    if a.save:
        pathlib.Path(a.save).write_text(json.dumps(res, indent=1))


if __name__ == "__main__":
    main()
