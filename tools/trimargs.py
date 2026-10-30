#!/usr/bin/env python3
"""Tira argumentos que o m2c inventou em chamadas e mantém o que aproxima do original.

Sem o protótipo da função chamada, o m2c passa como argumento tudo o que estava em $a0-$a3
antes do jal. Quando a função original não recebe esses argumentos, o C compila movimentos
de registrador que o original não tem. Para cada chamada, testa a mesma chamada com 0..n-1
argumentos (os últimos saem primeiro) e fica, de forma gulosa, com a versão de menor
diferença (tools/align_diff.py). Grava <saída> se melhorou.

Uso (no container): trimargs.py <alvo> <função> <entrada.c> <saída.c> [--gcc X] [--g0fill] [--spfill]
"""
import argparse
import contextlib
import io
import pathlib
import re
import sys
import tempfile

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import align_diff  # noqa: E402

CALL = re.compile(r"\b(func_[0-9A-F]{8}|[A-Z]\w*|D_[0-9A-F]{8})\s*\(")
SKIP = {"M2C_FIELD", "M2C_GFIELD", "M2C_BITWISE", "M2C_STRUCT_COPY", "MULT_HI", "MULTU_HI",
        "INCLUDE_ASM"}


def args_span(code, i):
    """(fim, [(início, fim) de cada argumento]) da lista que abre em code[i] == '('."""
    depth, start, spans = 0, i + 1, []
    for j in range(i, len(code)):
        c = code[j]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                if code[start:j].strip():
                    spans.append((start, j))
                return j + 1, spans
        elif c == "," and depth == 1:
            spans.append((start, j))
            start = j + 1
    return -1, []


def calls(code):
    body = code.find("{")
    for m in CALL.finditer(code, body):
        if m.group(1) in SKIP:
            continue
        end, spans = args_span(code, m.end() - 1)
        if spans:
            yield m.end() - 1, end, spans


def score(target, func, code, opts):
    with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False, encoding="utf-8") as f:
        f.write(code)
    try:
        with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
            return align_diff.compare(target, func, f.name, opts.gcc, opts.g0fill, opts.spfill)["total"]
    except (SystemExit, Exception):
        return None
    finally:
        pathlib.Path(f.name).unlink()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target")
    ap.add_argument("func")
    ap.add_argument("src")
    ap.add_argument("out")
    ap.add_argument("--gcc", default="2.7.2-psx")
    ap.add_argument("--g0fill", action="store_true")
    ap.add_argument("--spfill", action="store_true")
    a = ap.parse_args()
    code = pathlib.Path(a.src).read_text(encoding="utf-8")
    best = score(a.target, a.func, code, a)
    if best is None:
        sys.exit("não compila")
    start = best
    k = 0
    while best and k < 64:
        k += 1
        found = None
        for open_, end, spans in calls(code):
            for n in range(len(spans) - 1, -1, -1):
                inner = code[spans[0][0]:spans[n - 1][1]] if n else ""
                cand = code[:open_ + 1] + inner + code[end - 1:]
                s = score(a.target, a.func, cand, a)
                if s is not None and s < best and (found is None or s < found[0]):
                    found = (s, cand)
        if not found:
            break
        best, code = found
    print(f"{a.func}: {start} -> {best}")
    if best < start:
        pathlib.Path(a.out).write_text(code, encoding="utf-8", newline="\n")
    else:
        sys.exit(1)


if __name__ == "__main__":
    main()
