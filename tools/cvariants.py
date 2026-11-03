#!/usr/bin/env python3
"""Testa combinações de reescritas de um C e mostra a melhor (busca manual guiada).

O arquivo de variantes tem grupos separados por uma linha '====' e, dentro de cada grupo,
alternativas separadas por '----'. A primeira alternativa de cada grupo é o trecho
exatamente como está no C de partida; as demais são reescritas dele. Todas as
combinações (produto cartesiano) são compiladas e pontuadas com tools/align_diff.py.

Uso (no container):
  cvariants.py <alvo> <função> <base.c> <variantes.txt> --gcc X [--g0fill] [-o saída.c]
"""
import argparse
import contextlib
import io
import itertools
import pathlib
import sys
import tempfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import align_diff  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("base")
    ap.add_argument("variants")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true")
    ap.add_argument("-o", dest="out")
    a = ap.parse_args()
    code = pathlib.Path(a.base).read_text(encoding="utf-8")
    groups = [[o.strip("\n") for o in g.split("\n----\n")]
              for g in pathlib.Path(a.variants).read_text(encoding="utf-8").split("\n====\n")]
    for i, g in enumerate(groups):
        if g[0] not in code:
            sys.exit(f"grupo {i}: o trecho original não está no C de partida")
    results = []
    for combo in itertools.product(*[range(len(g)) for g in groups]):
        c = code
        for g, k in zip(groups, combo):
            c = c.replace(g[0], g[k])
        with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False) as f:
            f.write(c)
        try:
            with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
                s = align_diff.compare(a.target, a.func, f.name, a.gcc, a.g0fill)["total"]
        except (SystemExit, Exception):
            s = None
        pathlib.Path(f.name).unlink()
        results.append((s if s is not None else 10 ** 6, combo, c))
    results.sort(key=lambda r: r[0])
    for s, combo, _ in results[:8]:
        print(f"{'falha' if s == 10 ** 6 else s:>6}  {combo}")
    best = results[0]
    if a.out and best[0] < 10 ** 6:
        pathlib.Path(a.out).parent.mkdir(parents=True, exist_ok=True)
        pathlib.Path(a.out).write_text(best[2], encoding="utf-8", newline="\n")
        print("melhor ->", a.out)


if __name__ == "__main__":
    main()
