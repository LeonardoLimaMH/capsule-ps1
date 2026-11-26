#!/usr/bin/env python3
"""rename_clash.py <arquivo-destino.c> <candidato.c> <função>: prepara o candidato para entrar no arquivo.

Itens do candidato que o destino já tem com o mesmo texto saem do candidato; itens que definem um nome que
o destino já define com outro texto (typedef/struct/helper static de mesmo nome e corpo diferente) são
renomeados no candidato para <nome>_<sufixo da função>. Assim a versão do main, da qual outras funções já
casadas dependem, fica intacta. Declarações extern/protótipos ficam (dedupe.py e o compilador cuidam)."""
import pathlib
import re
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from csplit import defined, func_name, is_decl_only, items  # noqa: E402

dst, cand, fn = sys.argv[1:4]
d = pathlib.Path(dst).read_text(errors="replace")
c = pathlib.Path(cand).read_text(errors="replace")
norm = lambda s: re.sub(r"\s+", " ", s).strip()  # noqa: E731
dst_items = [it for it in items(d) if "INCLUDE_ASM" not in it]
dst_text = {norm(it) for it in dst_items}
dst_names = set()
for it in dst_items:
    if not is_decl_only(it) and not it.lstrip().startswith("#include"):
        dst_names |= defined(it)
suffix = fn.split("_")[-1][-5:]
out, renames = [], {}
for it in items(c):
    if it.lstrip().startswith("#include"):
        out.append(it)
        continue
    if norm(it) in dst_text and func_name(it) != fn:
        continue
    if not is_decl_only(it) and func_name(it) != fn:
        for n in defined(it) & dst_names:
            renames[n] = f"{n}_{suffix}"
    out.append(it)
s = "\n\n".join(x.strip() for x in out) + "\n"
for old, new in renames.items():
    s = re.sub(rf"\b{re.escape(old)}\b", new, s)
pathlib.Path(cand).write_text(s, encoding="utf-8", newline="\n")
print("renomeados:", renames or "nenhum")
