#!/usr/bin/env python3
"""Converte o pseudo-C do Ghidra (.cache/ghidra/c/<alvo>/<f>.c) em rascunho compilável.

O Ghidra é fonte alternativa de rascunho, medida na bancada como a heurística
`ghidra` do autodecomp: a estrutura de controle e as expressões vêm do Ghidra; as
declarações de globais vêm do m2c (tipo inferido pela instrução de load usada), e
o `autodecomp.to_c` aplica as mesmas regras de $gp e %hi/%lo do pipeline padrão.

O pseudo-C é gerado no host por `tools/ghidra.py bench` (o Ghidra não roda no
container); funções sem arquivo em cache simplesmente não ganham a variante.
"""
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / ".cache" / "ghidra" / "c"

# tipos e intrínsecos do Ghidra em termos do C do GCC 2.7.2
TYPES = """typedef unsigned char undefined, undefined1, byte, uchar, bool;
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword;
typedef unsigned long ulong;
typedef signed char sbyte;
typedef long long longlong, undefined8;
typedef unsigned long long ulonglong;
typedef int code();
#define true 1
#define false 0
#define CONCAT11(a, b) ((((unsigned)(a) & 0xFF) << 8) | ((b) & 0xFF))
#define CONCAT12(a, b) ((((unsigned)(a) & 0xFF) << 16) | ((b) & 0xFFFF))
#define CONCAT13(a, b) (((unsigned)(a) << 24) | ((b) & 0xFFFFFF))
#define CONCAT21(a, b) ((((unsigned)(a) & 0xFFFF) << 8) | ((b) & 0xFF))
#define CONCAT22(a, b) (((unsigned)(a) << 16) | ((b) & 0xFFFF))
#define CONCAT31(a, b) (((unsigned)(a) << 8) | ((b) & 0xFF))
#define SUB41(x, n) ((unsigned char)((x) >> ((n) * 8)))
#define SUB42(x, n) ((unsigned short)((x) >> ((n) * 8)))
#define SUB21(x, n) ((unsigned char)((x) >> ((n) * 8)))
#define ZEXT14(x) ((unsigned int)(unsigned char)(x))
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#define SEXT14(x) ((int)(signed char)(x))
#define SEXT24(x) ((int)(short)(x))
"""
# registradores sem origem no C: o rascunho não tem como ser correto
UNRESOLVED = re.compile(r"\b(in_\w+|unaff_\w+|extraout_\w+|halt_baddata|UNK_[0-9a-fA-F]+)\b")


def load(target, func):
    p = CACHE / target / f"{func}.c"
    return p.read_text(encoding="utf-8") if p.exists() else None


def clean(text, func):
    """Normaliza nomes e remove ruído; devolve só a definição da função ou None."""
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    text = text.replace("_NON_MATCHING", "").replace(".NON_MATCHING", "")
    text = re.sub(r"\b_(D_[0-9A-F]{8})\b", r"\1", text)  # "_D_x": global que sobrepõe símbolos menores
    if UNRESOLVED.search(text):
        return None
    text = text.strip()
    m = re.search(r"^[\w\s\*]+?\b(\w+)\s*\(", text, re.M)
    if not m:
        return None
    if m.group(1) != func:
        text = text[:m.start(1)] + func + text[m.end(1):]
    return text


def draft(target, func, m2c_draft):
    """Rascunho no formato do m2c (declarações + função) para o `to_c`, ou None."""
    g = load(target, func)
    if g is None or m2c_draft is None:
        return None
    body = clean(g, func)
    if body is None:
        return None
    decls = []
    for l in m2c_draft.splitlines():
        if re.match(rf"^[\w\s\*\?]+\b{func}\s*\(", l) and not l.rstrip().endswith(";"):
            break
        decls.append(l)
    # protótipos de funções chamadas não vêm do m2c: o Ghidra decide os argumentos
    decls = [d for d in decls if "(" not in d]
    return "\n".join(decls) + "\n" + body
