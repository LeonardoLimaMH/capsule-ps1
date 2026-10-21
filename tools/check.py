#!/usr/bin/env python3
"""Compara binários reconstruídos com os originais (byte-matching).

Uso: check.py build/x.exe:disc/X.EXE [...]
Sai com código 1 se algum arquivo divergir, listando as primeiras diferenças.
"""
import hashlib
import sys


def main():
    ok = True
    for pair in sys.argv[1:]:
        built, orig = pair.split(":", 1)
        a = open(built, "rb").read()
        b = open(orig, "rb").read()
        ha, hb = hashlib.sha1(a).hexdigest(), hashlib.sha1(b).hexdigest()
        if a == b:
            print(f"[OK]    {built}  sha1={ha}")
            continue
        ok = False
        print(f"[FALHA] {built}  sha1={ha} (esperado {hb}); tamanho {len(a):#x} vs {len(b):#x}")
        diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
        for i in diffs[:16]:
            print(f"        offset {i:#08x}: {a[i]:02x} != {b[i]:02x}")
        print(f"        total de bytes diferentes: {len(diffs)}")
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
