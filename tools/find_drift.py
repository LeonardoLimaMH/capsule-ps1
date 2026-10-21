#!/usr/bin/env python3
"""Acha o primeiro símbolo cujo endereço linkado difere do endereço no nome (func_XXXXXXXX/D_XXXXXXXX).
Uso: find_drift.py build/yuugi.map"""
import re, sys
for l in open(sys.argv[1]):
    m = re.match(r"\s+0x([0-9a-f]{8})\s+(?:func|D|L|jtbl)_?([0-9A-F]{8})\s*$", l)
    if m and int(m.group(1), 16) != int(m.group(2), 16):
        print("deriva:", l.strip(), "delta", hex(int(m.group(1), 16) - int(m.group(2), 16)))
        break
else:
    print("sem deriva")
