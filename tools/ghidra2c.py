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

# tipos e intrínsecos do Ghidra: include/ghidra.h
TYPES = '#include "ghidra.h"\n'  # incluído uma vez por função; o header tem guarda
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


CALL = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
NOT_CALLS = re.compile(r"^(if|while|for|switch|return|sizeof|do|CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+)$")


def fix_callees(body, func, asm_text):
    """Usa os alvos dos `jal` do assembly como nomes das funções chamadas.

    O Ghidra às vezes escolhe outro rótulo do mesmo endereço (ex.: `gcc2_compiled_`).
    As chamadas diretas do C aparecem na mesma ordem dos `jal`; se a contagem não
    bate, o rascunho é descartado quando algum nome não é um alvo de `jal`.
    """
    jals = re.findall(r"\bjal\s+(\w+)", asm_text)
    head, sep, rest = body.partition("{")
    calls = [m for m in CALL.finditer(rest) if not NOT_CALLS.match(m.group(1))]
    if len(calls) == len(jals):
        out, last = [], 0
        for m, name in zip(calls, jals):
            out.append(rest[last:m.start(1)] + name)
            last = m.end(1)
        return head + sep + "".join(out) + rest[last:]
    if any(m.group(1) not in jals for m in calls):
        return None
    return body


def draft(target, func, m2c_draft, asm_text=""):
    """Rascunho no formato do m2c (declarações + função) para o `to_c`, ou None."""
    g = load(target, func)
    if g is None or m2c_draft is None:
        return None
    body = clean(g, func)
    if body is None:
        return None
    body = fix_callees(body, func, asm_text)
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
