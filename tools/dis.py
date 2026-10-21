#!/usr/bin/env python3
"""Desmonta uma faixa de um PS-X EXE/overlay. Uso: dis.py arquivo vram_base hdr_size addr count"""
import sys, rabbitizer
f, base, hdr, addr, cnt = sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0), int(sys.argv[4], 0), int(sys.argv[5], 0)
d = open(f, "rb").read()
for i in range(cnt):
    a = addr + i * 4
    off = a - base + hdr
    w = int.from_bytes(d[off:off + 4], "little")
    print(f"{a:08X}: {w:08X}  {rabbitizer.Instruction(w, vram=a).disassemble()}")
