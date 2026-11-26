#!/usr/bin/env python3
"""with_helpers.py <arquivo.c> <função> <saída.c>: a função + só o que ela usa do arquivo (helpers static/inline
chamados, typedefs/structs/defines/externs de topo cujos nomes aparecem nela ou nos itens já levados).
Serve para tirar do arquivo de um agente o C de uma função sem trazer o resto (evita conflito de tipos)."""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from csplit import defined, func_name, items  # noqa: E402


def extract(src, fn):
    its = items(src)
    funcs = {func_name(it): it for it in its if func_name(it)}
    need, todo = set(), [fn]
    while todo:
        f = todo.pop()
        if f in need or f not in funcs:
            continue
        need.add(f)
        for w in set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", funcs[f])):
            if w in funcs and w not in need and (funcs[w].lstrip().startswith("static") or "inline" in funcs[w]):
                todo.append(w)
    if fn not in need:
        return None
    code = "\n".join(funcs[f] for f in need)
    keep, changed = set(), True
    while changed:
        changed = False
        for k, it in enumerate(its):
            if k in keep or func_name(it) or "INCLUDE_ASM" in it or "INCLUDE_RODATA" in it:
                continue
            if it.lstrip().startswith("#include") or any(re.search(r"\b%s\b" % re.escape(x), code) for x in defined(it)):
                keep.add(k)
                code += "\n" + it
                changed = True
    out = [it.strip() for k, it in enumerate(its) if (func_name(it) is None and k in keep) or func_name(it) in need]
    return "\n\n".join(out) + "\n"


if __name__ == "__main__":
    s = pathlib.Path(sys.argv[1]).read_text(encoding="utf-8", errors="replace")
    r = extract(s, sys.argv[2])
    if r is None:
        sys.exit(f"{sys.argv[2]} não está em {sys.argv[1]}")
    pathlib.Path(sys.argv[3]).write_text(r, encoding="utf-8", newline="\n")
    print(sys.argv[2], "ok")
