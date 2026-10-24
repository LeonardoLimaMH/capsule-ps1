#!/usr/bin/env python3
"""Algum chamador usa o valor de retorno ($v0) de uma função?

Varre o assembly completo dos 5 binários (.cache/fullasm, gerado por
tools/full_asm.py). Depois de cada `jal <função>` (e do delay slot), segue o fluxo
dentro da função chamadora (saltos incondicionais e os dois caminhos dos
condicionais, sem repetir blocos) procurando uma leitura de $v0 antes de ele ser
sobrescrito. Outro `jal` mata o $v0 (a convenção não o preserva). Chega em `jr`
(retorno do chamador, o $v0 pode ser o retorno dele), salto por registrador ou
rótulo fora da função: conservador, "usa". Chamadas indiretas (jalr) não são
vistas: função só chamada por ponteiro conta como "usa".

Uso: retuse.py <função> [<função> ...]     # imprime "usa" / "não usa"
"""
import functools
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"\*/\s+([a-z0-9.]+)\s*(.*)$")
LABEL = re.compile(r"^\s*(?:jlabel\s+|glabel\s+)?(\.?L[0-9A-Fa-f_]+|\w+):?\s*$")
BRANCH = {"beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz", "bgez", "bltzal", "bgezal"}
# instruções cujo 1º operando é destino (as demais só leem: stores, branches, mult/div)
NO_DEST = {"sw", "sh", "sb", "swl", "swr", "swc2", "mult", "multu", "div", "divu", "mthi", "mtlo",
           "mtc0", "mtc2", "ctc2", "jr", "jalr", "j", "jal", "b"} | BRANCH


@functools.lru_cache(maxsize=None)
def listing():
    """Por função: lista de instruções (mnemônico, operandos) e rótulo -> índice."""
    out = []
    for s in sorted((ROOT / ".cache" / "fullasm").rglob("*.s")):
        ins, labels = [], {}
        for l in s.read_text(encoding="utf-8", errors="ignore").splitlines():
            m = INSN.search(l)
            if m:
                ins.append((m.group(1), m.group(2)))
                continue
            lm = LABEL.match(l)
            if lm:
                labels[lm.group(1)] = len(ins)
        out.append((s.stem, ins, labels))
    return out


@functools.lru_cache(maxsize=None)
def call_sites():
    sites = {}
    for name, ins, labels in listing():
        for i, (op, args) in enumerate(ins):
            if op == "jal":
                sites.setdefault(args.strip(), []).append((name, ins, labels, i))
    return sites


def regs_of(op, args):
    regs = re.findall(r"\$\w+", args)
    return (regs if op in NO_DEST else regs[1:]), (None if op in NO_DEST or not regs else regs[0])


def reads_v0_from(caller, ins, labels, k, seen, stack):
    """$v0 é lido em algum caminho a partir da instrução k (dentro de `caller`)?"""
    while k < len(ins):
        if k in seen:
            return False
        seen.add(k)
        op, args = ins[k]
        srcs, dst = regs_of(op, args)
        if "$v0" in srcs:
            return True
        if op == "jal":
            # o delay slot ainda executa antes da chamada; depois o $v0 está morto
            if k + 1 < len(ins) and "$v0" in regs_of(*ins[k + 1])[0]:
                return True
            return False
        if op == "jr" and args.strip() == "$ra":
            # o $v0 vira o retorno do chamador: usado só se o retorno dele for usado
            return used(caller, stack)
        if op in ("jr", "jalr"):
            return True  # salto indireto: conservador
        if op in BRANCH or op in ("j", "b"):
            # o delay slot executa nos dois caminhos
            if k + 1 < len(ins):
                dsrcs, ddst = regs_of(*ins[k + 1])
                if "$v0" in dsrcs:
                    return True
                if ddst == "$v0":
                    return False
            target = args.split(",")[-1].strip()
            t = labels.get(target)
            if t is None:
                return True  # destino fora da função ou não reconhecido
            if reads_v0_from(caller, ins, labels, t, seen, stack):
                return True
            if op in ("j", "b"):
                return False
            k += 2  # condicional: segue também o caminho que não salta
            continue
        if dst == "$v0":
            return False  # sobrescrito antes de qualquer leitura
        k += 1
    return True


def used(func, stack=()):
    if func in stack or len(stack) > 12:
        return True  # ciclo/cadeia longa: conservador
    sites = call_sites().get(func)
    if not sites:
        return True  # sem chamada direta visível: não dá para afirmar nada
    stack = stack + (func,)
    return any(reads_v0_from(name, ins, labels, i + 2, set(), stack) for name, ins, labels, i in sites)


if __name__ == "__main__":
    for f in sys.argv[1:]:
        print(f, "usa" if used(f) else "não usa")
