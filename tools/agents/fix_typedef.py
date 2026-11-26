# fix_typedef.py arquivo nome: cada redefinição do typedef `nome` vira `nome_2`, `nome_3`...
# (e os usos seguintes até a próxima redefinição)
import re, sys, pathlib
path, name = sys.argv[1:3]
p = pathlib.Path(path); s = p.read_text()
defs = [m.start() for m in re.finditer(rf"typedef (?:struct|union)\s*\w*\s*\{{(?:[^{{}}]|\{{[^{{}}]*\}})*\}}\s*{name}\s*;", s)]
if len(defs) < 2:
    defs = [m.start() for m in re.finditer(rf"typedef [^;{{]*\b{name}\s*;", s)]
cuts = defs + [len(s)]
out = s[:cuts[1]] if len(defs) > 1 else s
for k in range(1, len(defs)):
    out += re.sub(rf"\b{name}\b", f"{name}_{k + 1}", s[cuts[k]:cuts[k + 1]])
p.write_text(out); print(path, name, len(defs))
