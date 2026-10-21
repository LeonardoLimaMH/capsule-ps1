#!/usr/bin/env python3
"""Localiza ilhas de dados dentro de uma região de texto MIPS (R3000).
Uso: find_islands.py arquivo vram hdr ini_off fim_off
Imprime faixas (offsets de arquivo) delimitadas por fim de função (jr ra + slot)
e início da próxima função, que contêm instruções inválidas para R3000."""
import struct, sys
import rabbitizer

f, vram, hdr, a, b = sys.argv[1], *(int(x, 0) for x in sys.argv[2:6])
d = open(f, "rb").read()
words = [int.from_bytes(d[o:o + 4], "little") for o in range(a, b, 4)]
BAD64 = {"dsra32", "dsll32", "dsrl32", "ldr", "ldl", "sdl", "sdr", "ld", "sd", "daddu", "daddiu",
         "dsubu", "dsll", "dsrl", "dsra", "movz", "movn", "tnei", "teqi", "tgei", "tlti", "teq", "tne",
         "tge", "tlt", "bltzall", "bgezall", "beql", "bnel", "blezl", "bgtzl", "lld", "scd", "ll", "sc",
         "dmult", "ddiv", "dmultu", "ddivu", "dsllv", "dsrlv", "dsrav", "dadd", "dsub", "daddi", "lwu",
         "sync", "ldc1", "sdc1", "lwc1", "swc1", "ldc2", "sdc2", "bltzl", "bgezl", "pref", "cache"}


def bad(w, addr):
    if w == 0:
        return False
    ins = rabbitizer.Instruction(w, vram=addr)
    if not ins.isValid():
        return True
    name = ins.getOpcodeName().lower()
    return name in BAD64 or (name in ("bltzal", "bgezal") and ((w >> 21) & 31) == 31)


flags = [bad(w, vram + a - hdr + i * 4) for i, w in enumerate(words)]
# fronteiras de função: índice logo após jr ra + delay slot
ends = [i + 2 for i, w in enumerate(words) if w == 0x03E00008]
islands = []
i = 0
while i < len(flags):
    if not flags[i]:
        i += 1
        continue
    # recua até o fim de função anterior
    s = max([e for e in ends if e <= i] or [0])
    # avança até o próximo prólogo após a última instrução inválida contígua (janela 64 palavras)
    j = i
    last = i
    while j < len(flags) and j - last < 64:
        if flags[j]:
            last = j
        j += 1
    k = last + 1
    while k < len(words) and (words[k] & 0xFFFF8000) != 0x27BD8000:
        k += 1
    islands.append((s, k))
    i = k
for s, e in islands:
    print(f"ilha: off {a + s*4:#x}..{a + e*4:#x}  vram {vram + a - hdr + s*4:#x}..{vram + a - hdr + e*4:#x}  ({(e-s)*4} bytes)")
