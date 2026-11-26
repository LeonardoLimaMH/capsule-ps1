# apply_manual.py arquivo.c função candidato.c: troca o INCLUDE_ASM da função pelo C do candidato
import sys, re, pathlib
dst, fn, cand = sys.argv[1:4]
d = pathlib.Path(dst); s = d.read_text()
c = pathlib.Path(cand).read_text().replace('#include "common.h"\n', "").strip() + "\n"
pat = re.compile(rf'^INCLUDE_ASM\("[^"]+", {fn}\);\n', re.M)
assert pat.search(s), "INCLUDE_ASM não encontrado"
d.write_text(pat.sub(lambda m: c, s, count=1))
