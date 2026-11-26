#!/usr/bin/env python3
"""only_fn.py <candidato.c> <função> <saída.c>: o candidato com as OUTRAS funções que ele define (e que não são
static/inline) trocadas pelo protótipo. Uma TU própria tem que definir só a função dela; as outras já existem
em outro arquivo e seriam definidas duas vezes. Sem `inline`, o GCC -O2 não as incorpora, então o código da
função não muda. Entende definições no estilo K&R (`void f(a) s32 a; {`)."""
import re
import sys
from pathlib import Path

src, fn, out = sys.argv[1:4]
text = Path(src).read_text(errors="replace")
# cabeçalho, nome, parâmetros e (K&R) as declarações deles antes da chave
DEF = re.compile(r"(?m)^([A-Za-z_][^;{}\n#]*?\b(\w+)\s*\(([^;{}]*)\))((?:\s*[^;{}()#]+;)*)\s*\{")
pieces, at, n = [], 0, 0
for m in DEF.finditer(text):
    if m.start() < at:
        continue
    head, name, knr = m.group(1), m.group(2), m.group(4)
    if name in ("if", "while", "for", "switch", "return"):
        continue
    depth, i = 0, m.end() - 1
    while i < len(text):
        depth += (text[i] == "{") - (text[i] == "}")
        i += 1
        if depth == 0:
            break
    if name == fn or re.search(r"\b(static|inline|__inline__)\b", head):
        continue
    proto = " ".join(head.split())
    if knr.strip():  # K&R: o protótipo antigo não leva os nomes dos parâmetros
        proto = proto[:proto.rindex("(")] + "()"
    pieces.append(text[at:m.start()])
    pieces.append(proto + ";\n")
    at, n = i, n + 1
pieces.append(text[at:])
Path(out).write_text("".join(pieces))
print(f"outras funções viraram protótipo: {n}")
