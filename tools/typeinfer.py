#!/usr/bin/env python3
"""Inferência de tipos para os rascunhos do autodecomp.

1. Parâmetros: com protótipo, o GCC 2.x faz a função chamada normalizar
   parâmetros menores que int logo na entrada (PROMOTE_PROTOTYPES):
       sll t,aN,16 ; sra t,t,16   -> s16      sll 16 ; srl 16 -> u16
       sll t,aN,24 ; sra t,t,24   -> s8       andi t,aN,0xFF  -> u8
       andi t,aN,0xFFFF           -> u16
   Só o bloco de entrada é examinado, antes de aN ser sobrescrito.
2. Protótipos conhecidos: a assinatura de toda função já em C (casada byte a
   byte) é exata e serve de protótipo para quem a chama.
"""
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+([a-z0-9.]+)\s*(.*)$")
FUNC_DEF = re.compile(r"^(?!static inline)([A-Za-z_][\w \*]*?)\b(\w+)\s*\(([^;{)]*)\)\s*\{", re.M)
ARGS = ["$a0", "$a1", "$a2", "$a3"]


def instructions(asm_text):
    out = []
    for l in asm_text.splitlines():
        m = INSN.search(l)
        if m:
            out.append((m.group(1), [x.strip() for x in m.group(2).split("/*")[0].split(",")]))
    return out


def infer_params(asm_text, limit=24):
    """Tipo inferido de cada argumento a0..a3 (None = sem evidência)."""
    ins = instructions(asm_text)[:limit]
    types = [None] * 4
    alias = {}  # registrador -> (índice do argumento, deslocamento aplicado)
    dead = set()
    for op, ops in ins:
        if op in ("jal", "jalr", "jr", "j") or op.startswith("b"):
            break
        if op == "sll" and len(ops) == 3 and ops[1] in ARGS and ARGS.index(ops[1]) not in dead:
            if ops[2] in ("16", "0x10", "24", "0x18"):
                alias[ops[0]] = (ARGS.index(ops[1]), int(ops[2], 0))
        elif op in ("sra", "srl") and len(ops) == 3 and ops[1] in alias:
            idx, sh = alias[ops[1]]
            if int(ops[2], 0) == sh:
                bits = 32 - sh
                signed = op == "sra"
                types[idx] = types[idx] or {(16, True): "s16", (16, False): "u16",
                                            (8, True): "s8", (8, False): "u8"}[(bits, signed)]
        elif op == "andi" and len(ops) == 3 and ops[1] in ARGS and ARGS.index(ops[1]) not in dead:
            mask = int(ops[2], 0)
            idx = ARGS.index(ops[1])
            if mask == 0xFF:
                types[idx] = types[idx] or "u8"
            elif mask == 0xFFFF:
                types[idx] = types[idx] or "u16"
        # escrita em aN: a partir daí o registrador não é mais o argumento
        if ops and ops[0] in ARGS and op not in ("sw", "sh", "sb") and not op.startswith("b"):
            dead.add(ARGS.index(ops[0]))
    return types


def known_prototypes(targets):
    """nome -> protótipo ("tipo nome(params);") de toda função já em C."""
    protos = {}
    for t in targets:
        files = list((ROOT / ".cache" / "auto" / t).glob("*.c")) + list((ROOT / "src" / t).rglob("*.c"))
        for f in files:
            for m in FUNC_DEF.finditer(f.read_text(encoding="utf-8")):
                ret, name, params = m.group(1).strip(), m.group(2), m.group(3).strip()
                if name.startswith("__maspsx") or name in protos:
                    continue
                protos[name] = f"{ret} {name}({params or 'void'});"
    return protos


def apply_param_types(c_func, func, types):
    """Troca os tipos dos parâmetros argN na assinatura do rascunho do m2c."""
    m = re.search(rf"\b{func}\s*\(([^)]*)\)\s*\{{", c_func)
    if not m:
        return c_func
    params = [p.strip() for p in m.group(1).split(",")] if m.group(1).strip() not in ("", "void") else []
    new = []
    for i, p in enumerate(params):
        pm = re.match(r"^(.*?)(\barg(\d))$", p)
        if pm and int(pm.group(3)) < 4 and types[int(pm.group(3))] and "*" not in pm.group(1):
            new.append(f"{types[int(pm.group(3))]} {pm.group(2)}")
        else:
            new.append(p)
    return c_func[:m.start(1)] + ", ".join(new) + c_func[m.end(1):]
