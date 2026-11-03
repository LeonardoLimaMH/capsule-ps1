#!/usr/bin/env python3
"""Reescreve acessos em bytes a registros (`D + i*N + off`, `p + off`) como campos de struct.

Complementa tools/structidx.py, que trata a saída do m2c (M2C_FIELD). O C de equiv/ usa
macros escritos à mão (`#define PL(a) (D_X + (...) * 0x79C)`, `P16(o)`...). Aqui o
arquivo é pré-processado (só os macros dele; os #include voltam depois) e:

  *(T *)(D_X + (I) * N + OFF)    -> D_X[I].f_OFF
  *(T *)((I) * N + D_X + OFF)    -> idem
  u8 *p = D_X + (I) * N;  ...  *(T *)(p + OFF)  -> S_X *p = &D_X[I]; ... p->f_OFF

Para cada símbolo, os campos acessados formam `typedef struct {...} S_X;` de tamanho N,
e o global passa a `extern S_X D_X[];`. Usos que sobram do símbolo ficam como
`((u8 *)D_X)`; usos de `p` fora desses acessos ficam como `((u8 *)p)`. Símbolos com
campos sobrepostos ou desalinhados ficam como estavam.

Uso: structify.py <entrada.c> <saída.c>    (sai com 1 se nada mudou)
"""
import re
import subprocess
import sys

SIZES = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "M2C_UNK": 4}
NUM = r"(0x[0-9A-Fa-f]+|\d+)"


def expand_macros(code):
    """Expande os macros do próprio arquivo com o cpp (sem os #include)."""
    incs = [l for l in code.splitlines() if l.startswith("#include")]
    body = "\n".join(l for l in code.splitlines() if not l.startswith("#include"))
    r = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-traditional-cpp"] if False else
                       ["cpp", "-P", "-undef", "-nostdinc"], input=body, capture_output=True, text=True)
    if r.returncode:
        return None
    return "\n".join(incs) + "\n" + r.stdout


def group_end(s, i):
    d = 0
    for j in range(i, len(s)):
        if s[j] == "(":
            d += 1
        elif s[j] == ")":
            d -= 1
            if d == 0:
                return j
    return -1


def strip_parens(e):
    e = e.strip()
    while e.startswith("(") and group_end(e, 0) == len(e) - 1:
        e = e[1:-1].strip()
    return e


def split_plus(e):
    """Termos de uma soma no nível de cima."""
    out, d, cur = [], 0, []
    for ch in e:
        if ch in "([":
            d += 1
        elif ch in ")]":
            d -= 1
        if ch == "+" and d == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    out.append("".join(cur).strip())
    return out


class Rec:
    def __init__(self, n):
        self.n, self.f, self.bad = n, {}, False

    def add(self, off, t):
        """Registra o campo; devolve False se o acesso precisa de cast (mesma largura,
        outro tipo que o do campo)."""
        sz = SIZES.get(t, 4 if t.endswith("*") else None)
        if sz is None or off % sz or off + sz > self.n:
            self.bad = True
            return True
        old = self.f.get(off)
        if old is None:
            self.f[off] = (t, sz)
            return True
        if old[1] != sz:
            self.bad = True
            return True
        return old[0] == t

    def typedef(self, name):
        out, pos = [], 0
        for off in sorted(self.f):
            t, sz = self.f[off]
            if off < pos:
                return None
            if off > pos:
                out.append(f"    u8 _p{pos:X}[0x{off - pos:X}];")
            out.append(f"    {t} f_{off:X};")
            pos = off + sz
        if pos < self.n:
            out.append(f"    u8 _p{pos:X}[0x{self.n - pos:X}];")
        return "typedef struct {\n" + "\n".join(out) + f"\n}} S_{name[2:]};\n"


def flatten(terms):
    """Achata somas entre parênteses: ((D + I*N) + OFF) -> [D, I*N, OFF]."""
    out = []
    for t in terms:
        t0 = strip_parens(t)
        sub = split_plus(t0)
        if len(sub) > 1:
            out += flatten(sub)
        else:
            out.append(t0)
    return out


def analyze(terms):
    """(símbolo, índice, N, deslocamento) de uma soma D + I*N + OFF, ou None."""
    sym = idx = n = None
    off = 0
    for t in flatten(terms):
        t0 = strip_parens(t)
        m = re.fullmatch(r"(?:\(u8 \*\))?(D_[0-9A-F]{8})", t0)
        if m and sym is None:
            sym = m.group(1)
            continue
        m = re.fullmatch(NUM, t0)
        if m:
            off += int(t0, 0)
            continue
        m = re.fullmatch(r"(.+?)\s*\*\s*" + NUM, t0, re.S)
        if m and idx is None and int(m.group(2), 0) > 4:
            idx, n = m.group(1).strip(), int(m.group(2), 0)
            continue
        m = re.fullmatch(NUM + r"\s*\*\s*(.+)", t0, re.S)
        if m and idx is None and int(m.group(1), 0) > 4:
            idx, n = m.group(2).strip(), int(m.group(1), 0)
            continue
        return None
    if sym and idx is not None:
        return sym, idx, n, off
    return None


def rewrite(code):
    code = expand_macros(code)
    if code is None:
        return None
    recs, edits, ptrs = {}, [], {}
    # ponteiros para elemento: u8 *p = D + I*N;
    for m in re.finditer(r"\bu8 \*(\w+) = ([^;]+);", code):
        a = analyze(split_plus(strip_parens(m.group(2))))
        if a and a[3] == 0:
            sym, idx, n, _ = a
            r = recs.setdefault(sym, Rec(n))
            if r.n != n:
                r.bad = True
            ptrs[m.group(1)] = (sym, m.start(), m.end(), idx)
    # acessos *(T *)( ... )
    for m in re.finditer(r"\*\s*\((\w+) \*\)\s*\(", code):
        t = m.group(1)
        if t not in SIZES:
            continue
        o = m.end() - 1
        e = group_end(code, o)
        inner = code[o + 1:e]
        terms = split_plus(strip_parens(inner))
        a = analyze(terms)
        if a:
            sym, idx, n, off = a
            r = recs.setdefault(sym, Rec(n))
            if r.n != n:
                r.bad = True
                continue
            acc = f"{sym}[{idx}].f_{off:X}"
            if not r.add(off, t):
                acc = f"(*({t} *)&{acc})"
            edits.append((m.start(), e + 1, sym, acc))
            continue
        # p + OFF com p ponteiro para elemento
        base = strip_parens(terms[0])
        if base in ptrs and all(re.fullmatch(NUM, strip_parens(x)) for x in terms[1:]):
            off = sum(int(strip_parens(x), 0) for x in terms[1:])
            sym = ptrs[base][0]
            acc = f"{base}->f_{off:X}"
            if not recs[sym].add(off, t):
                acc = f"(*({t} *)&{acc})"
            edits.append((m.start(), e + 1, sym, acc))
    good = {s for s, r in recs.items() if not r.bad and r.f and r.typedef(s)}
    if not good:
        return None
    for v, (sym, a, b, idx) in ptrs.items():
        if sym in good:
            edits.append((a, b, sym, f"S_{sym[2:]} *{v} = &{sym}[{idx}];"))
    edits = sorted(e for e in edits if e[2] in good)
    out, pos = [], 0
    for a, b, _, t in edits:
        if a < pos:
            return None
        out += [code[pos:a], t]
        pos = b
    out.append(code[pos:])
    new = "".join(out)
    for v, (sym, *_r) in ptrs.items():
        if sym in good:
            new = re.sub(rf"(?<![\w>.]){v}\b(?!->|\s*=\s*&)", f"((u8 *){v})", new)
            new = new.replace(f"S_{sym[2:]} *((u8 *){v})", f"S_{sym[2:]} *{v}")
    for sym in good:
        lines = []
        for l in new.split("\n"):
            if l.lstrip().startswith("extern") and re.search(rf"\b{sym}\[\]", l):
                # tira o símbolo da declaração (sozinho ou numa lista)
                l = re.sub(rf"\s*,\s*{sym}\[\]|{sym}\[\]\s*,\s*", "", l)
                if re.fullmatch(rf"\s*extern [\w ]+? {sym}\[\];", l):
                    l = None
            elif not l.lstrip().startswith("extern"):
                # usos que sobram: o mesmo endereço, visto como bytes
                l = re.sub(rf"(?<![&\w]){sym}\b(?!\[)", f"((u8 *){sym})", l)
            if l is not None:
                lines.append(l)
        new = "\n".join(lines)
    decls = "".join(recs[s].typedef(s) + f"extern S_{s[2:]} {s}[];\n" for s in sorted(good))
    new = new.replace('#include "common.h"\n', '#include "common.h"\n' + decls, 1)
    return new


def main():
    src, dst = sys.argv[1:3]
    code = open(src, encoding="utf-8").read()
    new = rewrite(code)
    if not new or new == code:
        sys.exit(1)
    open(dst, "w", encoding="utf-8", newline="\n").write(new)


if __name__ == "__main__":
    main()
