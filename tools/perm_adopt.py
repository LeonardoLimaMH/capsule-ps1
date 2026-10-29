#!/usr/bin/env python3
"""Adota o resultado do permuter: troca a função no C de equiv/ pela versão permutada.

O permuter devolve o C já pré-processado (cabeçalhos expandidos), que não serve para
src/. Aqui só a definição da função vencedora é retirada de .cache/permuter/<f>/output-0-*/
e colocada no lugar da função no arquivo de equiv/ (includes, externs e comentários
continuam os de lá). O candidato vai para .cache/auto/<alvo>/<f>.c (+ .gcc) depois de
conferido com tools/match.py; a integração é a de sempre (autodecomp.py --apply + make).

Uso (no container): perm_adopt.py <alvo> <função> <gcc>
"""
import pathlib
import re
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent


def span(text, func):
    """início e fim (exclusivo) da definição de func: da linha da assinatura à chave final."""
    m = re.search(r"^[^\n;{}#]*\b" + re.escape(func) + r"\s*\([^;{]*\)\s*\{", text, re.M)
    if not m:
        return None
    depth, i = 0, m.end() - 1
    while i < len(text):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                return m.start(), i + 1
        i += 1
    return None


def main():
    target, func, gcc = sys.argv[1:4]
    outs = sorted((ROOT / ".cache" / "permuter" / func).glob("output-0-*/source.c"))
    if not outs:
        sys.exit(f"{func}: o permuter não chegou a 0")
    perm = outs[0].read_text(encoding="utf-8")
    src = (ROOT / "equiv" / target / f"{func}.c").read_text(encoding="utf-8")
    a, b = span(perm, func), span(src, func)
    if not a or not b:
        sys.exit(f"{func}: função não encontrada no resultado ou em equiv/")
    cand = src[:b[0]] + perm[a[0]:a[1]] + src[b[1]:]
    out = ROOT / ".cache" / "auto" / target
    out.mkdir(parents=True, exist_ok=True)
    path = out / f"{func}.c"
    path.write_text(cand, encoding="utf-8")
    r = subprocess.run([sys.executable, str(ROOT / "tools" / "match.py"), target, func, str(path),
                        "--gcc", gcc, "-q"], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        path.unlink()
        sys.exit(f"{func}: a versão adotada não casa ({r.stdout.strip().splitlines()[-1:]})")
    (out / f"{func}.gcc").write_text(gcc + "\n", encoding="utf-8")
    print(f"{func}: casada ({gcc}) -> {path.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
