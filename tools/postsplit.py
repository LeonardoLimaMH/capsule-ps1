#!/usr/bin/env python3
"""Pós-processamento do assembly gerado pelo splat.

1. Rótulos de jump table (".L8004FB54") são símbolos locais do GAS e não podem
   ser referenciados entre arquivos objeto (a tabela fica em *.rodata.s e o
   código em main.c.o). Como cada rótulo é nomeado pelo seu endereço (único),
   renomeamos ".Lxxxxxxxx" para "Lxxxxxxxx", que a macro jlabel exporta.

2. Strings Shift-JIS: o spimdisasm decodifica o texto para exibi-lo, mas o GAS
   gravaria UTF-8 (mais bytes que o original). Strings com caracteres não-ASCII
   são reescritas como ".byte" em Shift-JIS, com o texto mantido em comentário.
"""
import pathlib
import re
import sys

LABEL = re.compile(r"\.L([0-9A-F]{8})\b")
STR = re.compile(r'^(\s*/\*.*?\*/\s*)\.(asciz|ascii)\s+"(.*)"\s*$')
ESC = {"n": "\n", "t": "\t", "r": "\r", '"': '"', "\\": "\\", "0": "\0",
       "a": "\a", "b": "\b", "f": "\f", "v": "\v"}


def unescape(s):
    out, i = [], 0
    while i < len(s):
        c = s[i]
        if c != "\\":
            out.append(c)
            i += 1
            continue
        n = s[i + 1]
        if n == "x":
            m = re.match(r"[0-9a-fA-F]{1,2}", s[i + 2:])
            out.append(chr(int(m.group(0), 16)))
            i += 2 + len(m.group(0))
        elif n in "01234567":
            m = re.match(r"[0-7]{1,3}", s[i + 1:])
            out.append(chr(int(m.group(0), 8)))
            i += 1 + len(m.group(0))
        else:
            out.append(ESC[n])
            i += 2
    return "".join(out)


def encode(text):
    """Codifica de volta para bytes; caracteres < 0x100 vindos de escapes \\x são bytes crus."""
    out = bytearray()
    for ch in text:
        if ord(ch) < 0x80:
            out.append(ord(ch))
        else:
            out += ch.encode("shift_jis")
    return bytes(out)


def fix_string(line):
    m = STR.match(line)
    if not m or all(ord(c) < 0x80 for c in m.group(3)):
        return line
    prefix, kind, body = m.groups()
    data = encode(unescape(body))
    if kind == "asciz":
        data += b"\0"
    hexes = ", ".join(f"0x{b:02X}" for b in data)
    return f"{prefix}.byte {hexes} /* \"{body}\" */\n"


INSN = re.compile(r"^(\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8}) \*/\s+)([a-z0-9.]+)\s*(.*)$")
NOT_MIPS1 = {
    "dsra32", "dsll32", "dsrl32", "ldr", "ldl", "sdl", "sdr", "ld", "sd", "daddu", "daddiu",
    "dsubu", "dsll", "dsrl", "dsra", "movz", "movn", "tnei", "teqi", "tgei", "tlti", "tgeiu",
    "tltiu", "teq", "tne", "tge", "tgeu", "tlt", "tltu", "bltzall", "bgezall", "beql", "bnel",
    "blezl", "bgtzl", "lld", "scd", "ll", "sc", "dmult", "ddiv", "dmultu", "ddivu", "dsllv",
    "dsrlv", "dsrav", "dadd", "dsub", "daddi", "lwu", "sync", "ldc1", "sdc1", "lwc1", "swc1",
    "ldc2", "sdc2", "bltzl", "bgezl", "pref", "cache", "beqzl", "bnezl", "lwc3", "swc3",
    "c1", "c3", "mfc1", "mtc1", "cfc1", "ctc1", "mfc3", "mtc3", "eret", "dmfc0", "dmtc0",
}


def fix_insn(line):
    m = INSN.match(line)
    if not m:
        return line
    prefix, raw, op, args = m.groups()
    bad = op in NOT_MIPS1 or op.endswith(".s") or op.endswith(".d") or op.startswith("bc1")
    if op in ("bltzal", "bgezal") and args.startswith("$ra"):
        bad = True
    if op == "jalr" and args.startswith("$ra, $ra"):
        bad = True
    if not bad:
        return line
    word = int.from_bytes(bytes.fromhex(raw), "little")
    return f"{prefix}.word 0x{word:08X} /* {op} {args} */\n"


def main(roots):
    n = 0
    for root in roots:
        for p in pathlib.Path(root).rglob("*.s"):
            s = p.read_text(encoding="utf-8")
            t = LABEL.sub(r"L\1", s)
            if '"' in t:
                t = "".join(fix_string(l) for l in t.splitlines(keepends=True))
            if "/nonmatchings/" in p.as_posix():
                t = "".join(fix_insn(l) for l in t.splitlines(keepends=True))
            if t != s:
                p.write_text(t, encoding="utf-8")
                n += 1
    print(f"postsplit: {n} arquivos ajustados")


if __name__ == "__main__":
    main(sys.argv[1:] or ["asm"])
