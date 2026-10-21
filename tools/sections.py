#!/usr/bin/env python3
"""Estima fronteiras rodata/text/data de um blob de código MIPS PS1.
Uso: sections.py arquivo vram hdr_size
Heurística: o texto começa no primeiro prólogo (addiu sp,sp,-N) precedido por
dados não-código, e termina após o último 'jr ra' + delay slot."""
import struct, sys
f, vram, hdr = sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0)
d = open(f, "rb").read()[hdr:]
n = len(d) // 4
w = struct.unpack_from(f"<{n}I", d)
jr = [i for i in range(n) if w[i] == 0x03E00008]
pro = [i for i in range(n) if (w[i] & 0xFFFF8000) == 0x27BD8000]
first = min(pro[0], jr[0])
# recua sobre funções folha sem prólogo (terminam em jr ra antes do 1º prólogo)
start = first
for i in range(first - 1, -1, -1):
    if w[i] == 0x03E00008:
        start = i - 0  # há código antes; continua recuando até achar dado
    if w[i] != 0 and (w[i] >> 26) in (0x0F,) and False:
        pass
end = jr[-1] + 2
print(f"text_start~{vram + first*4:#x} (off {hdr + first*4:#x})  text_end={vram + end*4:#x} (off {hdr + end*4:#x})  size={len(d):#x}")
