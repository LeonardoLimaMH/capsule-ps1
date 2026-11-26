# dedupe.py arquivo.c...: remove de nível de arquivo os #include, typedefs e externs repetidos
# (idênticos ao texto de um anterior) que a integração de candidatos traz
import re, sys, pathlib
BLOCK = re.compile(r"(?ms)^(typedef struct \{.*?^\} \w+;\n|#include [^\n]+\n|extern [^\n(]+;\n|extern [^\n]+\(\);\n)")
for path in sys.argv[1:]:
    p = pathlib.Path(path); s = p.read_text(); seen = set(); out = []; pos = 0
    for m in BLOCK.finditer(s):
        out.append(s[pos:m.start()]); pos = m.end()
        if m.group(1) in seen:
            continue
        seen.add(m.group(1)); out.append(m.group(1))
    out.append(s[pos:])
    new = re.sub(r"\n{3,}", "\n\n", "".join(out))
    if new != s:
        p.write_text(new); print("dedupe:", path)
