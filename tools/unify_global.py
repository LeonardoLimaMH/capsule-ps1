#!/usr/bin/env python3
"""Unifica as declarações de um global num arquivo-fonte (array de struct + casts).

Funções integradas de fontes diferentes declaram o mesmo global de jeitos diferentes:
`extern u8 D_X[];`, `extern M2C_UNK D_X[];` ou `extern S_X D_X[];` (array de struct,
necessário quando o código acessa `D_X[i].campo`). Num mesmo arquivo isso não compila.
Aqui:

  - as typedefs `S_X` do arquivo viram uma só, com a união dos campos (por deslocamento);
    o mesmo deslocamento com larguras diferentes vira `union`;
  - sobra uma única declaração `extern S_X D_X[];` no topo;
  - nas funções que viam o global com outro tipo T, cada uso passa a `((T *)D_X)`, o
    mesmo endereço e o mesmo tipo de antes (o código gerado não muda).

Confira depois todas as funções do arquivo (build ou .cache/tmp/funccmp2.py).

Uso: unify_global.py <arquivo.c> <D_XXXXXXXX>
"""
import re
import sys

SIZES = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "M2C_UNK": 4, "f32": 4}


def parse_struct(body):
    """[(off, tipo, nome)] dos campos f_XXX de uma struct gerada (structidx/ext)."""
    out, pos = [], 0
    for m in re.finditer(r"(\w+(?:\s*\*)?)\s+(\w+)(\[[^\]]+\])?;", body):
        t, name, arr = m.groups()
        n = int(arr[1:-1], 0) if arr else 1
        size = (4 if "*" in t else SIZES.get(t, 0)) * n
        if size == 0:
            return None
        if name.startswith("f_"):
            out.append((int(name[2:], 16), t, name))
        pos += size
    return out, pos


def main():
    path, sym = sys.argv[1:3]
    s = open(path, encoding="utf-8").read()

    # declarações múltiplas que incluem o símbolo viram uma por linha
    def split_multi(m):
        ind, t, names = m.group(1), m.group(2), [n.strip() for n in m.group(3).split(",")]
        return "".join(f"{ind}extern {t} {n};\n" for n in names)
    s = re.sub(rf"^(\s*)extern ([\w ]+?) ((?:[\w\[\]*]+\s*,\s*)*\*?{sym}\[\](?:\s*,\s*[\w\[\]*]+)*);\n",
               split_multi, s, flags=re.M)
    tname = "S_" + sym[2:]
    tdre = re.compile(r"typedef struct \{([^{}]*)\} " + tname + r";\n")
    fields, total = {}, None
    for m in tdre.finditer(s):
        p = parse_struct(m.group(1))
        if not p:
            sys.exit(f"struct {tname} com campo de tipo desconhecido")
        for off, t, name in p[0]:
            fields.setdefault(off, set()).add(t)
        if total not in (None, p[1]):
            sys.exit(f"tamanhos diferentes para {tname}: {total} e {p[1]}")
        total = p[1]
    if total is None:
        sys.exit(f"nenhuma typedef {tname} no arquivo")
    # struct unificada
    lines, pos, unions = [], 0, {}
    for off in sorted(fields):
        types = sorted(fields[off], key=lambda t: -SIZES.get(t, 4))
        width = max(SIZES.get(t, 4) for t in types)
        if off < pos:
            sys.exit(f"campos sobrepostos em {off:#x}")
        if off > pos:
            lines.append(f"    u8 _p{pos:X}[0x{off - pos:X}];")
        if len(types) == 1:
            lines.append(f"    {types[0]} f_{off:X};")
        else:
            members = " ".join(f"{t} {t.replace(' ', '')};" for t in types)
            lines.append(f"    union {{ {members} }} f_{off:X};")
            unions[off] = types
        pos = off + width
    if pos < total:
        lines.append(f"    u8 _p{pos:X}[0x{total - pos:X}];")
    unified = "typedef struct {\n" + "\n".join(lines) + f"\n}} {tname};\nextern {tname} {sym}[];\n\n"
    if unions:
        sys.exit("campos com larguras diferentes (" + ", ".join(f"{o:#x}" for o in unions) +
                 "): unifique à mão com union e acessos .tipo")
    s = tdre.sub("", s)
    s = re.sub(rf"^\s*extern {tname} {sym}\[\];\n", "", s, flags=re.M)

    # demais declarações: tipo visto por cada trecho do arquivo
    decl = re.compile(rf"^(\s*)extern ([\w ]+?)\s*(\*?)\s*{sym}\[\];\n", re.M)
    out, cur_file_type, i = [], None, 0
    # percorre o arquivo em funções (corpos entre chaves no nível de cima)
    chunks, depth, start = [], 0, 0
    for j, ch in enumerate(s):
        if ch == "{":
            if depth == 0:
                chunks.append(("top", s[start:j]))
                start = j
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                chunks.append(("body", s[start:j + 1]))
                start = j + 1
    chunks.append(("top", s[start:]))
    file_type = None
    for kind, text in chunks:
        if kind == "top":
            for m in decl.finditer(text):
                file_type = (m.group(2) + (" *" if m.group(3) else "")).strip()
            out.append(decl.sub("", text))
            continue
        local = None
        for m in decl.finditer(text):
            local = (m.group(2) + (" *" if m.group(3) else "")).strip()
        text = decl.sub("", text)
        t = local or file_type
        if t and t != tname:
            text = re.sub(rf"(?<![\w.>]){sym}\b", f"(({t} *){sym})", text)
        out.append(text)
    s = "".join(out)
    k = s.index("\n", s.index('#include "common.h"')) + 1
    s = s[:k] + "\n" + unified + s[k:]
    open(path, "w", encoding="utf-8", newline="\n").write(s)
    print(f"{sym}: struct de {total:#x} bytes, {len(fields)} campos")


if __name__ == "__main__":
    main()
