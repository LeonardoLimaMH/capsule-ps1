"""Fatia C de nível de arquivo em itens (diretivas, typedefs/structs, declarações, funções) e diz que nomes
cada item define. Usado por with_helpers.py e rename_clash.py."""
import re

KW = {"void", "int", "char", "short", "long", "unsigned", "signed", "const", "volatile", "extern", "static",
      "inline", "register", "typedef", "struct", "union", "enum", "u8", "s8", "u16", "s16", "u32", "s32", "f32"}


def items(src):
    out, i, n, start, depth = [], 0, len(src), 0, 0
    while i < n:
        c = src[i]
        if src.startswith("/*", i):
            i = src.find("*/", i) + 2
            continue
        if src.startswith("//", i):
            i = src.find("\n", i)
            i = n if i < 0 else i
            continue
        if c in "\"'":
            j = i + 1
            while j < n and src[j] != c:
                j += 2 if src[j] == "\\" else 1
            i = j + 1
            continue
        if depth == 0 and c == "#" and src[start:i].strip() == "":
            e = src.find("\n", i)
            while e > 0 and src[e - 1] == "\\":
                e = src.find("\n", e + 1)
            e = n if e < 0 else e
            out.append(src[start:e + 1])
            start = i = e + 1
            continue
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                j = i + 1
                head = re.sub(r"/\*.*?\*/", " ", src[start:i], flags=re.S).lstrip()
                if (re.match(r"(?:typedef|struct|union|enum|static\s+(?:const\s+)?(?:struct|union)|extern\s+(?:struct|union)|const\s+struct)\b", head)
                        or "=" in head.split("{")[0]) and "(" not in head.split("{")[0].split("=")[0]:
                    j = src.find(";", j) + 1
                out.append(src[start:j])
                start = i = j
                continue
        elif c == ";" and depth == 0:
            out.append(src[start:i + 1])
            start = i + 1
        i += 1
    out.append(src[start:])
    return [x for x in out if x.strip()]


def func_name(it):
    if re.match(r"\s*(typedef|struct|union|enum|#)", it) or "{" not in it:
        return None
    m = re.search(r"\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*(?:[^;{]*;\s*)*\{", it, re.S)
    return m.group(1) if m else None


def defined(it):
    """Nomes que o item define (tipos, tags, funções, variáveis, macros)."""
    if it.lstrip().startswith("#"):
        m = re.match(r"\s*#\s*define\s+(\w+)", it)
        return {m.group(1)} if m else set()
    f = func_name(it)
    if f:
        return {f}
    names = set()
    m = re.match(r"\s*(?:typedef\s+)?(?:const\s+)?(?:struct|union|enum)\s+(\w+)\s*\{", it)
    if m:
        names.add(m.group(1))
    t = re.sub(r"\{.*\}", " ", it, flags=re.S)
    t = re.sub(r"\([^()]*\)\s*;\s*$", ";", t) if re.search(r"\w\s*\([^()]*\)\s*;\s*$", t) and "(*" not in t else t
    names |= set(re.findall(r"\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?=[;,=)])", t))
    m = re.search(r"\b([A-Za-z_]\w*)\s*\([^;{]*\)\s*;\s*$", it)
    if m and not it.lstrip().startswith("typedef"):
        names.add(m.group(1))
    return names - KW


def is_decl_only(it):
    """Declaração que pode repetir sem conflito (extern / protótipo)."""
    s = it.strip()
    return s.startswith("extern") or (func_name(it) is None and re.search(r"\)\s*;$", s) and not s.startswith("typedef"))
