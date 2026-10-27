"""Additional Ghidra drafts for functional decompilation, never byte-match claims.

Recover scalar accesses from MIPS load/store widths instead of declaring every
unknown global as an array. Absolute addresses describe the original PS1 RAM;
each resulting draft still needs the ordinary differential validator.
"""
import functools
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parent.parent
INSN = re.compile(r"\*/\s+(\w+)\s+(.*)")
ADDRESS = re.compile(r"(?:D_|jtbl_)([0-9A-Fa-f]{8})(?:\s*\+\s*(0x[0-9a-fA-F]+|\d+))?")
WIDTHS = {"lb": "s8", "lbu": "u8", "lh": "s16", "lhu": "u16", "lw": "s32",
          "sb": "u8", "sh": "u16", "sw": "u32"}
BITS = {"s8": 8, "u8": 8, "s16": 16, "u16": 16, "s32": 32, "u32": 32}
GLOBAL = re.compile(r"\b(_?D_[0-9A-Fa-f]{8}|[A-Za-z]+Ram[0-9a-fA-F]{8}|"
                    r"UNK_[0-9a-fA-F]{8}|DAT_[0-9a-fA-F]{8}|PTR_[0-9a-fA-F]{8}|"
                    r"null_ARRAY_[0-9a-fA-F]{8})\b")


def address(expr):
    m = ADDRESS.search(expr)
    return int(m[1], 16) + (int(m[2], 0) if m[2] else 0) if m else None


def access_types(asm):
    """Collect widths at statically resolved global addresses (including base+offset)."""
    regs, accesses = {}, {}
    for line in asm.splitlines():
        m = INSN.search(line)
        if not m:
            continue
        op, operands = m.groups()
        rs = re.findall(r"\$\w+", operands)
        resolved = address(operands)
        if op in WIDTHS:
            if resolved is None:
                mem = re.search(r"(-?0x[0-9a-fA-F]+|-?\d+)\((\$\w+)\)", operands)
                if mem and mem[2] in regs:
                    resolved = regs[mem[2]] + int(mem[1], 0)
            if resolved is not None:
                old = accesses.get(resolved)
                typ = WIDTHS[op]
                # Wider loads take precedence; for equal widths prefer a load.
                if old is None or BITS[typ] > BITS[old[0]] or (BITS[typ] == BITS[old[0]] and op.startswith('l')):
                    accesses[resolved] = typ, op.startswith('l')
        if not rs:
            continue
        if op == 'lui' and resolved is not None:
            regs[rs[0]] = (resolved + 0x8000) & ~0xffff
        elif op in ('addiu', 'addi', 'ori') and resolved is not None:
            regs[rs[0]] = resolved
        elif op in ('addiu', 'addi') and len(rs) == 2 and rs[1] in regs:
            imm = operands.rsplit(',', 1)[-1].strip()
            try:
                regs[rs[0]] = regs[rs[1]] + int(imm, 0)
            except ValueError:
                regs.pop(rs[0], None)
        elif op in ('addu', 'or') and len(rs) == 3 and '$zero' in rs[1:]:
            src = rs[1] if rs[2] == '$zero' else rs[2]
            if src in regs:
                regs[rs[0]] = regs[src]
            else:
                regs.pop(rs[0], None)
        elif op.startswith('b') or op in ('j', 'jr', 'jal', 'jalr', 'sb', 'sh', 'sw', 'swl', 'swr', 'mult', 'multu', 'div', 'divu', 'nop'):
            continue
        else:
            regs.pop(rs[0], None)
    return {addr: t for addr, (t, _) in accesses.items()}


@functools.lru_cache(maxsize=None)
def symbols(target):
    result = {}
    # Main-program symbols first; the active overlay takes precedence.
    for t in (['yuugi', target] if target not in ('yuugi', 'slpm') else [target]):
        for line in (ROOT / 'build' / (t + '.map')).read_text().splitlines():
            m = re.match(r"\s+0x([0-9a-f]{8})\s+([A-Za-z_]\w*)\s*$", line)
            if m:
                result[int(m[1], 16)] = m[2]
    return result


def draft(target, func, asm):
    path = ROOT / '.cache/ghidra/c' / target / (func + '.c')
    if not path.exists():
        return None
    body = re.sub(r'/\*.*?\*/', '', path.read_text(), flags=re.S).strip()
    body = body.replace('_NON_MATCHING', '').replace('.NON_MATCHING', '')
    if re.search(r'\b(in_\w+|unaff_\w+|extraout_\w+|halt_baddata)\b', body):
        return None
    head = re.search(r'^[\w\s*]+?\b(\w+)\s*\(', body)
    if not head:
        return None
    body = body[:head.start(1)] + func + body[head.end(1):]
    names = symbols(target)
    unresolved = False

    def call(m):
        nonlocal unresolved
        addr = int(m[1], 16)
        if addr not in names:
            unresolved = True
            return m[0]
        return names[addr]

    body = re.sub(r'\bfunc_0x([0-9a-fA-F]{8})\b', call, body)
    if unresolved:
        return None
    widths = access_types(asm)
    definitions = []
    # The battle state is a halfword inside the main work area. Uniform random
    # RAM almost never reaches its small switch cases. Exercise those states,
    # neighbouring values and a negative halfword explicitly.
    if widths.get(0x8008EE54) in ('s16', 'u16') and re.search(r'\b_?D_8008EE54\b', body):
        values = set(range(10)) | {99, 65535}
        for literal in re.findall(r'\b_?D_8008EE54\s*(?:==|!=|<=|>=|<|>)\s*(0x[0-9a-fA-F]+|\d+)', body):
            n = int(literal, 0)
            if 0 <= n <= 255:
                values.update({max(0, n - 1), n, n + 1})
        definitions.append('/* rand-u16: 0x8008EE54 1 ' + ','.join(map(str, sorted(values))) + ' */')
    for name in sorted(set(GLOBAL.findall(body))):
        addr = int(name[-8:], 16)
        typ = widths.get(addr)
        if typ is None:
            prefix = name.split('Ram')[0]
            typ = {'b': 'u8', 'c': 's8', 's': 's16', 'i': 's32', 'u': 'u32'}.get(prefix, 's32')
            if prefix.startswith('p'):
                typ = 'u8 *'
        # Bracketed globals are arrays. Scalar globals are memory lvalues, so
        # &global is still its address and writes reach the original RAM.
        if name.startswith('null_ARRAY_'):
            typ = 'u8'
        if name.startswith('null_ARRAY_') or re.search(rf'\b{re.escape(name)}\s*\[', body):
            value = f'(({typ} *)0x{addr:08X})'
        else:
            value = f'(*({typ} *)0x{addr:08X})'
        definitions.append(f'#define {name} {value}')
    # Ghidra's partial-field notation is an access at a byte offset. Keep the
    # base lvalue and its storage; do not replace partial writes with full ones.
    def partial(m):
        name, offset, size = m[1], int(m[2]), int(m[3])
        if size not in (1, 2, 4, 8):
            return m[0]
        return f'(*(u{size * 8} *)((u8 *)&{name} + {offset}))'

    body = re.sub(r'\b(\w+)\._(\d+)_(\d+)_', partial, body)
    if re.search(r'\._\d+_\d+_|\bstack0x|\b_[a-z]+Stack_', body):
        return None  # unresolved overlapping stack storage requires manual work
    # Old-style declarations avoid inventing parameter types from pseudo-C.
    # Actual arguments, return values and call effects remain differential checks.
    called = set(re.findall(r'\b([A-Za-z_]\w*)\s*\(', body))
    called.update(re.findall(r'\bfunc_[0-9a-fA-F]{8}\b', body))
    ignored = {'if', 'for', 'while', 'switch', 'return', 'sizeof', func}
    for name in sorted(called - ignored):
        if re.fullmatch(r'(CONCAT|SUB|ZEXT|SEXT)\d+', name):
            continue
        definitions.append(f'extern s32 {name}();')
    return '#include "ghidra.h"\n' + '\n'.join(definitions) + '\n' + body + '\n'
