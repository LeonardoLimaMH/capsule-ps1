"""with_helpers.py <arquivo dos agentes> <função> <saída>: a função + o que ela usa do arquivo dos agentes
(typedefs/structs/defines/externs de topo que ela ou seus helpers usam, e helpers static/inline chamados)."""
import re, sys
src = open(sys.argv[1], encoding="utf-8", errors="replace").read()
fn = sys.argv[2]
# fatia o arquivo em itens de topo
items, i, n, start, depth = [], 0, len(src), 0, 0
while i < n:
    c = src[i]
    if src.startswith("/*", i):
        i = src.find("*/", i) + 2; continue
    if src.startswith("//", i):
        i = src.find("\n", i); continue
    if c == '"':
        j = i + 1
        while src[j] != '"': j += 2 if src[j] == "\\" else 1
        i = j + 1; continue
    if depth == 0 and c == "#":
        e = src.find("\n", i)
        while src[e - 1] == "\\": e = src.find("\n", e + 1)
        items.append(src[start:e + 1]); start = i = e + 1; continue
    if c == "{": depth += 1
    elif c == "}":
        depth -= 1
        if depth == 0:
            j = i + 1
            head = re.sub(r"/\*.*?\*/", " ", src[start:i], flags=re.S).lstrip()
            if re.match(r"(?:typedef|struct|union|enum|static\s+(?:struct|union)|extern\s+(?:struct|union))\b", head) and "(" not in head.split("{")[0]:
                j = src.find(";", j) + 1
            items.append(src[start:j]); start = i = j; continue
    elif c == ";" and depth == 0:
        items.append(src[start:i + 1]); start = i + 1
    i += 1
items = [x for x in items if x.strip()]
def fname(it):
    m = re.search(r"\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*(?:[^;{]*;\s*)*\{", it, re.S)
    return m.group(1) if m and "{" in it and not re.match(r"\s*(typedef|struct|union|enum)\b", it) else None
funcs = {fname(it): it for it in items if fname(it)}
need, todo = set(), [fn]
while todo:
    f = todo.pop()
    if f in need or f not in funcs: continue
    need.add(f)
    for w in set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", funcs[f])):
        if w in funcs and w not in need and (funcs[w].lstrip().startswith("static") or "inline" in funcs[w]): todo.append(w)
KW = {"void", "int", "char", "short", "long", "unsigned", "signed", "const", "volatile", "extern", "static",
      "typedef", "struct", "union", "enum", "u8", "s8", "u16", "s16", "u32", "s32"}
def defined(it):
    t = re.sub(r"\{.*\}", " ", it, flags=re.S)
    if t.lstrip().startswith("#"):
        m = re.match(r"\s*#\s*define\s+(\w+)", t)
        return {m.group(1)} if m else set()
    names = set(re.findall(r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?:[;,=)]|\()", t))
    m = re.match(r"\s*(?:typedef\s+)?(?:struct|union|enum)\s+(\w+)", it)
    if m:
        names.add(m.group(1))
    return names - KW
code = "\n".join(funcs[f] for f in need)
keep = set()
changed = True
while changed:
    changed = False
    for k, it in enumerate(items):
        if k in keep or fname(it) or "INCLUDE_ASM" in it or "INCLUDE_RODATA" in it:
            continue
        if it.lstrip().startswith("#include") or any(re.search(r"\b%s\b" % re.escape(x), code) for x in defined(it)):
            keep.add(k)
            code += "\n" + it
            changed = True
out = []
for k, it in enumerate(items):
    f = fname(it)
    if (f is None and k in keep) or (f is not None and f in need):
        out.append(it.strip())
open(sys.argv[3], "w", encoding="utf-8", newline="\n").write("\n\n".join(out) + "\n")
print(sys.argv[2], "helpers:", sorted(need - {fn}), "itens:", len(out))
