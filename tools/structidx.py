#!/usr/bin/env python3
"""Reescreve a indexação em bytes de globais (`(i * 0x110) + D_X`) como array de struct.

O m2c escreve `M2C_FIELD((i * 0x110) + (u8 *)D_X, s16 *, 6)`. Com aritmética em bytes o
GCC dobra o deslocamento no %lo do símbolo (lw 0(r) com %lo(D_X+6)); o original
costuma ter o endereço do elemento e o deslocamento na própria instrução
(lh 6(r)), que é o que o compilador gera para `D_X[i].campo`. Para cada símbolo indexado
com passo N, junta os deslocamentos e tipos acessados na função, sintetiza
`typedef struct { ...campos...; } S_X;` de tamanho N e troca a declaração para
`extern S_X D_X[];`. Formas tratadas:

  M2C_FIELD((i * N) + D_X, T *, off)      -> D_X[i].f_off
  *(T *)((i * N) + D_X)                   -> D_X[i].f_0
  void *p; p = (i * N) + D_X; ...M2C_FIELD(p, T *, off)...
                                          -> S_X *p; p = &D_X[i]; ...p->f_off...

Outros usos do símbolo ficam como `((u8 *)D_X)`. Símbolos com campos sobrepostos ou
desalinhados ficam como estão.

Uso: structidx.py <entrada.c> <saída.c>   (sai com 1 se nada mudou)
"""
import re
import sys

SIZES = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "M2C_UNK": 4, "f32": 4}
SITE = re.compile(r" \* (0x[0-9A-Fa-f]+|\d+)\) \+ (\(u8 \*\))?(D_[0-9A-F]{8})\b")
FIELD = r"M2C_FIELD\(\(?{e}\)?, ([\w ]+?\*+), (0x[0-9A-Fa-f]+|\d+)\)"


def open_of(code, close):
    """Índice do '(' que casa com o ')' em code[close]."""
    depth = 0
    for j in range(close, -1, -1):
        if code[j] == ")":
            depth += 1
        elif code[j] == "(":
            depth -= 1
            if depth == 0:
                return j
    return -1


def elem(t):
    """Tipo do campo apontado por `T *` e seu tamanho, ou None."""
    t = t.strip()
    if not t.endswith("*"):
        return None
    base = t[:-1].strip()
    if base.endswith("*"):
        return base, 4
    if base in SIZES:
        return base, SIZES[base]
    return None


class Sym:
    def __init__(self, n):
        self.n, self.fields, self.bad = n, {}, False

    def add(self, off, typ):
        e = elem(typ)
        if e is None or off % e[1] or off + e[1] > self.n:
            self.bad = True
            return
        old = self.fields.get(off)
        if old is not None and old != e:
            self.bad = True
        self.fields[off] = e

    def typedef(self, name):
        out, pos, align = [], 0, 1
        for off in sorted(self.fields):
            t, sz = self.fields[off]
            if off < pos:
                return None
            if off > pos:
                out.append(f"    u8 _p{pos:X}[0x{off - pos:X}];")
            out.append(f"    {t} f_{off:X};")
            pos, align = off + sz, max(align, sz)
        if pos < self.n:
            out.append(f"    u8 _p{pos:X}[0x{self.n - pos:X}];")
        if self.n % align:
            return None
        return "typedef struct {\n" + "\n".join(out) + f"\n}} S_{name[2:]};\n"


def rewrite(code):
    syms = {}
    edits = []  # (início, fim, texto)
    ptrvars = {}  # var -> símbolo

    for m in SITE.finditer(code):
        close = m.start() + len(f" * {m.group(1)}")
        g0 = open_of(code, close)
        if g0 < 0:
            continue
        n = int(m.group(1), 0)
        if n in (1, 2, 4):
            continue
        name = m.group(3)
        idx = code[g0 + 1:m.start()]
        s_start, s_end = g0, m.end()
        sym = syms.setdefault(name, Sym(n))
        if sym.n != n:
            sym.bad = True
            continue
        site = f"{name}[{idx}]"
        # M2C_FIELD((site), T *, off)
        pre = code[:s_start]
        k = re.search(r"M2C_FIELD\(\(?$", pre)
        if k:
            rest = code[s_end:]
            r = re.match(r"\)?, ([\w ]+?\*+), (0x[0-9A-Fa-f]+|\d+)\)", rest)
            paren_ok = (pre.endswith("((") == rest.startswith(")"))
            if r and paren_ok:
                off = int(r.group(2), 0)
                sym.add(off, r.group(1))
                edits.append((k.start(), s_end + r.end(), f"{site}.f_{off:X}", name))
                continue
        # *(T *)(site)
        k = re.search(r"\*\(([\w ]+?\*+)\)\($", pre)
        if k and code[s_end:s_end + 1] == ")":
            sym.add(0, k.group(1))
            edits.append((k.start(), s_end + 1, f"{site}.f_0", name))
            continue
        # var = site;
        k = re.search(r"(\w+) = $", pre)
        if k and code[s_end:s_end + 1] == ";":
            var = k.group(1)
            if ptrvars.get(var, name) != name:
                sym.bad = True
                continue
            ptrvars[var] = name
            edits.append((s_start, s_end, f"&{site}", name))
            continue
        sym.bad = True

    # usos dos ponteiros: só M2C_FIELD(var, T *, off)
    for var, name in list(ptrvars.items()):
        sym = syms[name]
        decl = re.search(rf"^(\s+)void \*{var};$", code, re.M)
        if decl is None:
            sym.bad = True
            continue
        uses = [u for u in re.finditer(rf"\b{var}\b", code) if not (decl.start() <= u.start() < decl.end())]
        fields = list(re.finditer(FIELD.format(e=rf"\b{var}\b"), code))
        assigns = [u for u in uses if re.match(rf"{var} = &?", code[u.start():]) and
                   code[u.start():].startswith(f"{var} = (")]
        if len(fields) + len(assigns) != len(uses):
            sym.bad = True
            continue
        edits.append((decl.start(), decl.end(), f"{decl.group(1)}S_{name[2:]} *{var};", name))
        for f in fields:
            off = int(f.group(2), 0)
            sym.add(off, f.group(1))
            edits.append((f.start(), f.end(), f"{var}->f_{off:X}", name))

    good = {nm for nm, s in syms.items() if not s.bad and s.fields and s.typedef(nm)}
    if not good:
        return code

    keep = [e for e in edits if e[3] in good]
    keep.sort()
    out, pos = [], 0
    for a, b, t, _ in keep:
        if a < pos:
            return code
        out.append(code[pos:a])
        out.append(t)
        pos = b
    out.append(code[pos:])
    new = "".join(out)

    # declarações e usos restantes
    for nm in good:
        new = re.sub(rf"^(\s*)extern [\w ]+? {nm}\[\];", rf"\1extern S_{nm[2:]} {nm}[];", new, flags=re.M)
        new = re.sub(rf"\(u8 \*\){nm}\b", f"((u8 *){nm})", new)
        new = re.sub(rf"(?<![\w(*&])(?<!\(u8 \*\)){nm}\b(?!\[)", f"((u8 *){nm})", new)
        new = re.sub(rf"extern S_{nm[2:]} \(\(u8 \*\){nm}\)\[\];", f"extern S_{nm[2:]} {nm}[];", new)
    tds = "".join(syms[nm].typedef(nm) for nm in sorted(good))
    first = re.search(r"^(extern|[A-Za-z_][\w \*]*\b\w+\s*\([^;{]*\)\s*\{)", new, re.M)
    at = first.start() if first else 0
    return new[:at] + tds + "\n" + new[at:]


def main():
    src, dst = sys.argv[1:3]
    code = open(src, encoding="utf-8").read()
    new = rewrite(code)
    if new == code:
        sys.exit(1)
    open(dst, "w", encoding="utf-8", newline="\n").write(new)


if __name__ == "__main__":
    main()
