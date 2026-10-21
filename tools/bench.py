#!/usr/bin/env python3
"""Bancada fixa para medir o pipeline de decompilação automática.

Uma melhoria só conta se aumentar casamentos byte a byte num conjunto FIXO de
funções, sem regredir os controles. "Compila" não é "casa": o relatório separa
as duas coisas.

Conjunto (config/bench.txt, versionado e nunca reescrito; para mudar, crie uma
nova versão com --freeze --version N):
  - pendentes: amostra sorteada (semente fixa) de funções ainda em asm de cada
    binário, sem assembly original nem GTE, até 0x400 bytes;
  - controles: funções já casadas. O pipeline as reconstrói do zero (sem usar o
    C guardado); se uma heurística fizer um controle deixar de casar, é regressão.

Uso (no container; requer tools/full_asm.py):
  bench.py --freeze                       # cria config/bench.txt (uma vez)
  bench.py --run ROTULO [--heur a,b,...]  # roda; salva .cache/bench/ROTULO.json
                                          # e acrescenta uma linha em docs/BENCH.md
  bench.py --ablate                       # padrão + cada heurística removida
  bench.py --compare A B                  # diferenças por função entre duas rodadas
"""
import argparse
import concurrent.futures as cf
import datetime
import json
import pathlib
import random
import re
import statistics
import sys
from collections import Counter

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import autodecomp as ad  # noqa: E402
import typeinfer  # noqa: E402
from handwritten import load as load_handwritten  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
BENCH = ROOT / "config" / "bench.txt"
OUT = ROOT / ".cache" / "bench"
LOG = ROOT / "docs" / "BENCH.md"
SAMPLE = {"yuugi": 60, "slpm": 20, "chess": 40, "raise": 40, "etc": 20}
CONTROLS = {"yuugi": 15, "slpm": 5, "chess": 10, "raise": 10, "etc": 2}
GTE = re.compile(r"\b(rtps|rtpt|nclip|mvmva|mfc2|mtc2|cfc2|ctc2|lwc2|swc2)\b")


def freeze(version):
    if BENCH.exists():
        sys.exit(f"{BENCH} já existe: a bancada é fixa (crie outra versão manualmente se preciso)")
    rng = random.Random(1234)
    lines = [f"# Bancada fixa v{version} de tools/bench.py (gerada em {datetime.date.today()}). Não editar.",
             "# alvo função tipo tamanho"]
    for t in SAMPLE:
        hand = load_handwritten(t)
        cached = {p.stem for p in (ad.CACHE / t).glob("*.c")}
        pend, ctrl = [], []
        for c, f in ad.pending_functions(t):
            p = ad.asm_path(t, f)
            if p is None or f in hand or f in cached:
                continue
            txt = p.read_text(encoding="utf-8")
            if ad.func_size(p) <= 0x400 and not GTE.search(txt):
                pend.append((f, ad.func_size(p)))
        for f in sorted(cached):
            p = ad.asm_path(t, f)
            if p is not None:
                ctrl.append((f, ad.func_size(p)))
        pend.sort()
        ctrl.sort()
        rng.shuffle(pend)
        rng.shuffle(ctrl)
        lines += [f"{t} {f} pendente {sz:#x}" for f, sz in sorted(pend[:SAMPLE[t]], key=lambda x: x[0])]
        lines += [f"{t} {f} controle {sz:#x}" for f, sz in sorted(ctrl[:CONTROLS[t]], key=lambda x: x[0])]
    BENCH.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"{BENCH.relative_to(ROOT)}: {len(lines) - 2} funções")


def load_bench():
    out = []
    for l in BENCH.read_text(encoding="utf-8").splitlines():
        if l and not l.startswith("#"):
            t, f, kind, sz = l.split()
            out.append((t, f, kind, int(sz, 16)))
    return out


def run(label, heur, jobs):
    bench = load_bench()
    for t in {b[0] for b in bench}:
        ad.HANDWRITTEN[t] = load_handwritten(t)
    ad.PROTOS.clear()
    ad.PROTOS.update(typeinfer.known_prototypes(list(SAMPLE)))

    def one(b):
        t, f, kind, sz = b
        try:
            c, gcc, rec = ad.evaluate(t, f, heur)
        except Exception as e:  # registra e segue: uma função não derruba a bancada
            rec = {"reason": f"erro: {e}"}
        rec.update({"target": t, "func": f, "kind": kind, "size": sz})
        return rec

    with cf.ThreadPoolExecutor(jobs) as ex:
        res = list(ex.map(one, bench))
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / f"{label}.json").write_text(json.dumps({"label": label, "heur": sorted(heur), "results": res},
                                                  indent=1), encoding="utf-8")
    summarize(label, sorted(heur), res)


def summarize(label, heur, res):
    pend = [r for r in res if r["kind"] == "pendente"]
    ctrl = [r for r in res if r["kind"] == "controle"]
    m = sum(r["reason"] == "MATCH" for r in pend)
    cm = sum(r["reason"] == "MATCH" for r in ctrl)
    comp = sum(r.get("compiles", False) or r["reason"] == "MATCH" for r in pend)
    same = sum(r.get("same_len", False) for r in pend)
    ns = [r["n"] for r in pend if r.get("n")]
    med = statistics.median(ns) if ns else 0
    cats = Counter(r.get("cat", r["reason"]) for r in pend if r["reason"] != "MATCH").most_common(4)
    print(f"[{label}] pendentes casadas {m}/{len(pend)} | controles {cm}/{len(ctrl)} | compila {comp} | "
          f"tamanho igual {same} | mediana de instruções diferentes {med}")
    print("  causas:", cats)
    if not LOG.exists():
        LOG.write_text("# Histórico da bancada fixa (tools/bench.py)\n\n"
                       "Cada linha é uma rodada no mesmo conjunto `config/bench.txt`. *Casadas* = bytes "
                       "idênticos; *compila* e *tamanho igual* são métricas auxiliares, não sucesso.\n\n"
                       "| Data | Rótulo | Heurísticas | Pendentes casadas | Controles casados | Compila | "
                       "Tamanho igual | Mediana instr. dif. | Principais causas |\n"
                       "|---|---|---|---|---|---|---|---|---|\n", encoding="utf-8")
    row = (f"| {datetime.date.today()} | {label} | {', '.join(heur) or '—'} | {m}/{len(pend)} | "
           f"{cm}/{len(ctrl)} | {comp} | {same} | {med} | "
           f"{'; '.join(f'{k} ({v})' for k, v in cats)} |\n")
    with LOG.open("a", encoding="utf-8") as fh:
        fh.write(row)


def compare(a, b):
    ra = {(r["target"], r["func"]): r for r in json.loads((OUT / f"{a}.json").read_text())["results"]}
    rb = {(r["target"], r["func"]): r for r in json.loads((OUT / f"{b}.json").read_text())["results"]}
    gained = [k for k in ra if ra[k]["reason"] != "MATCH" and rb[k]["reason"] == "MATCH"]
    lost = [k for k in ra if ra[k]["reason"] == "MATCH" and rb[k]["reason"] != "MATCH"]
    better = [k for k in ra if ra[k].get("n") and rb[k].get("n") and rb[k]["n"] < ra[k]["n"]]
    worse = [k for k in ra if ra[k].get("n") and rb[k].get("n") and rb[k]["n"] > ra[k]["n"]]
    print(f"{a} -> {b}: +{len(gained)} casadas, -{len(lost)} perdidas (REGRESSÃO se > 0), "
          f"{len(better)} mais próximas, {len(worse)} mais distantes")
    for k in gained:
        print("  + ", *k)
    for k in lost:
        print("  - ", *k, "(", rb[k]["reason"], ")")
    return len(lost)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--freeze", action="store_true")
    ap.add_argument("--version", type=int, default=1)
    ap.add_argument("--run")
    ap.add_argument("--heur", help="lista separada por vírgula (padrão: DEFAULT_HEURISTICS)")
    ap.add_argument("--ablate", action="store_true")
    ap.add_argument("--compare", nargs=2)
    ap.add_argument("--jobs", type=int, default=14)
    a = ap.parse_args()
    if a.freeze:
        return freeze(a.version)
    if a.compare:
        sys.exit(1 if compare(*a.compare) else 0)
    if a.ablate:
        run("padrao", ad.DEFAULT_HEURISTICS, a.jobs)
        for h in sorted(ad.ALL_HEURISTICS):
            run(f"sem-{h}", ad.DEFAULT_HEURISTICS - {h}, a.jobs)
        return
    if a.run:
        heur = frozenset(a.heur.split(",")) if a.heur is not None else ad.DEFAULT_HEURISTICS
        heur -= {""}
        unknown = heur - set(ad.ALL_HEURISTICS)
        if unknown:
            sys.exit(f"heurísticas desconhecidas: {unknown}")
        run(a.run, heur, a.jobs)


if __name__ == "__main__":
    main()
