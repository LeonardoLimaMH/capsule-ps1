#!/usr/bin/env python3
"""Algum chamador usa o valor de retorno ($v0) de uma função?

Varre o assembly completo dos 5 binários (.cache/fullasm, gerado por
tools/full_asm.py): depois de cada `jal <função>` (e do delay slot), segue as
instruções até o fim do bloco; se alguma ler $v0 antes de escrevê-lo, o retorno
é usado. Conservador: chamadas indiretas (jalr) não são vistas, então uma função
que só é chamada por ponteiro conta como "usa" (nunca dispensa o v0 à toa).

Uso: retuse.py <função> [<função> ...]     # imprime "usa" / "não usa"
"""
import functools
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"\*/\s+([a-z0-9.]+)\s*(.*)$")
BLOCK_END = {"j", "jr", "jal", "jalr", "b", "beq", "bne", "beqz", "bnez", "blez", "bgtz", "bltz",
             "bgez", "bltzal", "bgezal"}
# instruções cujo 1º operando é destino (as demais só leem: stores, branches, mult/div)
NO_DEST = {"sw", "sh", "sb", "swl", "swr", "swc2", "mult", "multu", "div", "divu", "mthi", "mtlo",
           "mtc0", "mtc2", "ctc2", "jr", "jalr"} | BLOCK_END


@functools.lru_cache(maxsize=None)
def listing():
    """Lista global de instruções (mnemônico, operandos) por arquivo de função."""
    out = []
    for s in sorted((ROOT / ".cache" / "fullasm").rglob("*.s")):
        ins = []
        for l in s.read_text(encoding="utf-8", errors="ignore").splitlines():
            m = INSN.search(l)
            if m:
                ins.append((m.group(1), m.group(2)))
        out.append(ins)
    return out


@functools.lru_cache(maxsize=None)
def call_sites():
    sites = {}
    for ins in listing():
        for i, (op, args) in enumerate(ins):
            if op == "jal":
                sites.setdefault(args.strip(), []).append((ins, i))
    return sites


def reads_v0_after(ins, i):
    k = i + 2  # pula o delay slot
    while k < len(ins):
        op, args = ins[k]
        regs = re.findall(r"\$\w+", args)
        srcs = regs if op in NO_DEST else regs[1:]
        if "$v0" in srcs:
            return True
        if op not in NO_DEST and regs and regs[0] == "$v0":
            return False  # sobrescrito antes de qualquer leitura
        if op in BLOCK_END:
            # o delay slot do fim do bloco ainda executa
            if k + 1 < len(ins):
                dop, dargs = ins[k + 1]
                dregs = re.findall(r"\$\w+", dargs)
                if "$v0" in (dregs if dop in NO_DEST else dregs[1:]):
                    return True
            # outra chamada: a convenção não preserva $v0, então ele está morto; desvio
            # ou retorno (o $v0 pode ser o retorno do chamador): conservador, "usa"
            return op != "jal"
        k += 1
    return True


def used(func):
    sites = call_sites().get(func)
    if not sites:
        return True  # sem chamada direta visível: não dá para afirmar nada
    return any(reads_v0_after(ins, i) for ins, i in sites)


if __name__ == "__main__":
    for f in sys.argv[1:]:
        print(f, "usa" if used(f) else "não usa")
