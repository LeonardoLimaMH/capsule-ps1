#!/usr/bin/env python3
"""Corrige somas de endereço em bytes do m2c sobre globais declarados com elementos maiores.

O m2c escreve `(i * 4) + D_X` e `*((i * 2) + D_X)` com deslocamentos em bytes (o tipo de
D_X é desconhecido para ele). Quando a declaração vira `extern M2C_UNK D_X[];` (ou s16,
u32...), o C escala o deslocamento de novo pelo tamanho do elemento: o índice fica ×4 (ou ×2)
maior que no original. Aqui cada soma crua com um desses globais passa a ser feita sobre
`(u8 *)D_X`; quando a soma é desreferenciada (`*(...)`), a leitura mantém o tipo declarado
(`*(T *)(...)`). Somas com cast explícito, índices `D_X[i]` e `*D_X + n` não mudam.

Uso: bytearith.py <entrada.c> <saída.c>   (sai com 1 se nada mudou)
     bytearith.py --check <alvo> <função> <entrada.c> [--gcc 2.7.2-psx]
         compara com o assembly original (tools/align_diff.py) antes e depois
"""
import re
import sys

SIZES = {"M2C_UNK": 4, "M2C_UNK32": 4, "s32": 4, "u32": 4, "M2C_UNK16": 2, "s16": 2, "u16": 2}
DECL = re.compile(r"extern\s+(\w+)\s+(D_[0-9A-F]{8})\s*\[\]\s*;")


def enclosing(code, pos):
    """Índice do `(` que abre o menor grupo que contém pos (ou -1)."""
    depth = 0
    for i in range(pos - 1, -1, -1):
        c = code[i]
        if c == ")":
            depth += 1
        elif c == "(":
            if depth == 0:
                return i
            depth -= 1
        elif c in ";{}":
            return -1
    return -1


LOADS = {"lb": "s8", "lbu": "u8", "lh": "s16", "lhu": "u16", "lw": "s32", "sb": "u8", "sh": "s16", "sw": "s32"}


def trace(rows, i, window=16):
    """Leitura feita pelo endereço que a linha i forma com %lo(): direta (`lh $v0,
    %lo(D_X)($at)`) ou por um registrador derivado dele por addu/addiu nas linhas seguintes."""
    r = rows[i]
    if r[0] in LOADS:
        return r[0]
    if r[0] != "addiu":
        return None
    derived = {r[1].rstrip(",")}
    for x in rows[i + 1:i + window]:
        if not x:
            continue
        regs = [a.rstrip(",") for a in x[1:]]
        if x[0] in LOADS and len(regs) == 2:
            base = regs[1][regs[1].find("(") + 1:-1]
            if base in derived:
                return x[0]
        if x[0] in ("addu", "addiu") and any(a in derived for a in regs[1:]):
            derived.add(regs[0])
        elif regs and regs[0] in derived and x[0] not in LOADS:
            derived.discard(regs[0])  # registrador reescrito
    return None


def asm_loads(target, func):
    """{símbolo: tipo} da leitura que segue cada referência %lo(D_X) no assembly original,
    quando todas as leituras de um símbolo têm a mesma largura e sinal."""
    import pathlib
    root = pathlib.Path(__file__).resolve().parent.parent
    path = next((root / ".cache" / "fullasm" / target / "nonmatchings").rglob(f"{func}.s"), None)
    if path is None:
        return {}
    rows = [l.split("*/")[-1].split() for l in path.read_text(errors="replace").splitlines()]
    seen = {}
    for i, r in enumerate(rows):
        for name in re.findall(r"%lo\((D_[0-9A-F]{8})\)", " ".join(r)):
            op = trace(rows, i)
            if op:
                seen.setdefault(name, set()).add(LOADS[op])
    return {n: next(iter(t)) for n, t in seen.items() if len(t) == 1}


def rewrite(code, loads=None):
    loads = loads or {}
    decl = {n: t for t, n in DECL.findall(code) if t in SIZES}
    edits = []  # (posição, texto a inserir)
    for name, typ in decl.items():
        for m in re.finditer(rf"\b{name}\b", code):
            before = code[:m.start()].rstrip()
            after = code[m.end():].lstrip()
            if code[m.start() - 1:m.start()] in ("*", "&") or after.startswith("["):
                continue
            if before.endswith("extern " + typ) or re.search(rf"\b{typ}\s*$", before):
                continue  # declaração
            if before.endswith("+"):
                pass
            elif after.startswith("+") and not after.startswith("++"):
                if before.endswith(")") or before.endswith("*"):
                    continue  # cast explícito ou valor desreferenciado
            else:
                continue
            edits.append((m.start(), "(u8 *)"))
            open_ = enclosing(code, m.start())
            if open_ <= 0:
                continue
            prev = code[:open_].rstrip()
            if prev.endswith("*") and not re.search(r"[\w)\]]\s*\*$", prev):
                edits.append((open_, f"({loads.get(name, typ)} *)"))
    if not edits:
        return code
    for pos, text in sorted(set(edits), reverse=True):
        code = code[:pos] + text + code[pos:]
    return code


def overlap(target, func, src, gcc):
    """Instruções (mnemônico + imediato, sem registradores, desvios e relocações) que o
    compilado tem em comum com o original: mede deslocamentos e escalas sem o ruído de
    alocação e ordem."""
    import collections
    import contextlib
    import io
    import pathlib
    sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
    import align_diff
    import match
    ow, vram = match.original(target, func)
    with contextlib.redirect_stderr(io.StringIO()):
        cw, masks = match.compiled(match.compile_c(src, gcc, "-O2 -G8", False, target), func)

    def bag(ins):
        return collections.Counter((op, rest) for op, _, rest, reloc, _ in ins
                                   if not reloc and not op.startswith(("b", "j")))
    o = bag(align_diff.decode(ow, vram))
    c = bag(align_diff.decode(cw, vram, masks))
    return sum((o & c).values()) - sum((c - o).values()), sum(o.values())


def check(target, func, src, gcc):
    import pathlib
    import tempfile
    code = pathlib.Path(src).read_text(encoding="utf-8")
    new = rewrite(code, asm_loads(target, func))
    if new == code:
        return None
    with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False, encoding="utf-8",
                                     dir=pathlib.Path(src).parent) as f:
        f.write(new)
    try:
        a = overlap(target, func, src, gcc)
        try:
            b = overlap(target, func, f.name, gcc)
        except SystemExit:
            b = None
    finally:
        pathlib.Path(f.name).unlink()
    return a, b, new


def main():
    if sys.argv[1] == "--check":
        target, func, src = sys.argv[2:5]
        gcc = sys.argv[sys.argv.index("--gcc") + 1] if "--gcc" in sys.argv else "2.7.2-psx"
        r = check(target, func, src, gcc)
        if r is None:
            sys.exit("nada a mudar")
        a, b, _ = r
        print(f"em comum com o original: {a[0]}/{a[1]} -> {b[0] if b else 'não compila'}")
        return
    src, out = sys.argv[1:3]
    code = open(src, encoding="utf-8").read()
    new = rewrite(code)
    if new == code:
        sys.exit(1)
    open(out, "w", encoding="utf-8", newline="\n").write(new)


if __name__ == "__main__":
    main()
