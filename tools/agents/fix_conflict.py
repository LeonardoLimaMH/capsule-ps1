# fix_conflict.py arquivo símbolo: troca cada `extern T S[];`/`extern T S;` de bloco por uso com
# cast ((T *)S) dentro da função, para conviver com a declaração de arquivo de outro tipo
import re, sys, pathlib
path, sym = sys.argv[1:3]
p = pathlib.Path(path); s = p.read_text()
FN = re.compile(r"(?m)^[A-Za-z_][^;{}\n]*\b\w+\s*\([^;{}]*\)\s*\{")
out, i, changed = [], 0, 0
for m in FN.finditer(s):
    if m.start() < i: continue
    depth, j = 0, m.end() - 1
    while True:
        if s[j] == "{": depth += 1
        elif s[j] == "}":
            depth -= 1
            if depth == 0: break
        j += 1
    body = s[m.start():j + 1]
    d = re.search(rf"^\s*extern\s+([\w\s\*]+?)\s*(\*?)\s*\b{sym}\s*(\[\])?\s*;\n", body, re.M)
    if d:
        t = d.group(1).strip() + (" *" if d.group(2) else "")
        arr = bool(d.group(3))
        body = body[:d.start()] + body[d.end():]
        cast = f"((({t} *)&{sym})[0])" if not arr else f"(({t} *){sym})"
        body = re.sub(rf"\b{sym}\b", cast, body)
        changed += 1
    out.append(s[i:m.start()]); out.append(body); i = j + 1
out.append(s[i:])
p.write_text("".join(out)); print(path, sym, changed)
