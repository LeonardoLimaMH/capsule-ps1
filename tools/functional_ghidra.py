"""Additional Ghidra drafts for functional decompilation, never byte-match claims.

Recover scalar accesses from MIPS load/store widths instead of declaring every
unknown global as an array. Absolute addresses describe the original PS1 RAM;
each resulting draft still needs the ordinary differential validator.
"""
import functools
import pathlib
import re
from collections import Counter

ROOT = pathlib.Path(__file__).resolve().parent.parent
CACHE = ROOT / '.cache/ghidra/c'
INSN = re.compile(r"\*/\s+(\w+)\s+(.*)")
ADDRESS = re.compile(r"(?:D_|jtbl_)([0-9A-Fa-f]{8})(?:\s*\+\s*(0x[0-9a-fA-F]+|\d+))?")
WIDTHS = {"lb": "s8", "lbu": "u8", "lh": "s16", "lhu": "u16", "lw": "s32",
          "sb": "u8", "sh": "u16", "sw": "u32"}
BITS = {"s8": 8, "u8": 8, "s16": 16, "u16": 16, "s32": 32, "u32": 32}
GLOBAL = re.compile(r"\b(_?D_[0-9A-Fa-f]{8}|[A-Za-z]+Ram[0-9a-fA-F]{8}|"
                    r"_?UNK_[0-9a-fA-F]{8}|_?DAT_[0-9a-fA-F]{8}|_?PTR_(?:DAT_)?[0-9a-fA-F]{8}|"
                    r"null_ARRAY_[0-9a-fA-F]{8})\b")


def signed_chars(code, signed=True):
    """Make ambiguous plain char explicit; leave signed/unsigned char and literals."""
    tokens = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|\b(?:unsigned\s+char|signed\s+char|char)\b')
    return tokens.sub(lambda m: ('s8' if signed else 'u8') if m[0] == 'char' else m[0], code)


def byte_address_variant(code):
    """Alternative for undefined Ghidra objects whose offsets count bytes.

    A width inferred from a load can incorrectly multiply &object + offset.
    Keep scalar loads unchanged and preserve the original draft as a separate
    candidate: some objects really do use typed pointer arithmetic.
    """
    addresses = {}
    for match in re.finditer(r'^#define (\w+) \(\*\([^\n]*?\*\)0x([0-9a-fA-F]{8})\)$', code, re.M):
        if GLOBAL.fullmatch(match[1]):
            addresses[match[1]] = match[2]
    tokens = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|&\s*(\w+)\s*(?=[+-])')
    changed = False

    def replace(match):
        nonlocal changed
        name = match[1]
        if name not in addresses:
            return match[0]
        changed = True
        return '((u8 *)0x' + addresses[name] + ') '

    result = tokens.sub(replace, code)
    return result if changed else None


def data_address_variant(code, items):
    """Preserve Ghidra's element type for &global arithmetic, not scalar loads.

    A symbol can be a halfword in Ghidra while this function accesses its first
    word through a cast. A word load does not change the original pointer stride.
    Metadata is a candidate hint; the differential test remains authoritative.
    """
    types = {'undefined1': 'u8', 'undefined2': 'u16', 'undefined4': 'u32', 'undefined8': 'u64',
             'byte': 'u8', 'char': 'u8', 'short': 's16', 'ushort': 'u16',
             'int': 's32', 'uint': 'u32', 'long': 's32', 'ulong': 'u32',
             'float': 'float', 'double': 'double'}
    hints = {}
    for item in items:
        typ = types.get(item.get('type'))
        if not typ:
            continue
        try:
            addr = int(item['address'], 16)
        except (KeyError, ValueError, TypeError):
            continue
        hints[addr] = typ
    names = {}
    for m in re.finditer(r'^#define (\w+) \(\*\(([^\n]*?) \*\)0x([0-9a-fA-F]{8})\)$', code, re.M):
        typ = hints.get(int(m[3], 16))
        if GLOBAL.fullmatch(m[1]) and typ and typ != m[2]:
            names[m[1]] = typ, m[3]
    changed = False

    def replace(m):
        nonlocal changed
        if m[1] not in names:
            return m[0]
        changed = True
        typ, addr = names[m[1]]
        return f'(({typ} *)0x{addr})'

    tokens = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|&\s*(\w+)\b')
    result = tokens.sub(replace, code)
    return result if changed else None


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
        elif op in ('addu', 'subu') and len(rs) == 3 and ((rs[1] in regs) != (rs[2] in regs)):
            # Preserve the constant base of an indexed global. A following
            # byte/halfword load still identifies its element/field width.
            if rs[1] in regs:
                regs[rs[0]] = regs[rs[1]]
            elif op == 'addu':
                regs[rs[0]] = regs[rs[2]]
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


def memory_types(m2c):
    """Distinguish an array in RAM from a pointer variable stored in RAM."""
    result = {}
    for m in re.finditer(r'^extern\s+(.+?)\s*(D_[0-9A-Fa-f]{8})\s*(\[[^\]]*\])?\s*;', m2c, re.M):
        typ, name, array = m.groups()
        addr = int(name[-8:], 16)
        result[addr] = {'pointer': '*' in typ and not array, 'declared': typ.strip().replace('*', '').strip(), 'fields': []}
    for m in re.finditer(r'M2C_FIELD\(\s*&?(D_[0-9A-Fa-f]{8})\s*,\s*(s8|u8|s16|u16|s32|u32)\s*\*', m2c):
        addr = int(m[1][-8:], 16)
        result.setdefault(addr, {'pointer': False, 'declared': '', 'fields': []})['fields'].append(m[2])
    for info in result.values():
        if info['declared'] in BITS:
            info['element'] = info['declared']
        elif info['fields']:
            typ = Counter(info['fields']).most_common(1)[0][0]
            signed = 's' + typ[1:]
            info['element'] = signed if signed in info['fields'] else typ
        else:
            info['element'] = 'u8' if info['pointer'] else None
    return result


def draft(target, func, asm, m2c='', char_signed=True):
    path = CACHE / target / (func + '.c')
    if not path.exists():
        return None
    body = re.sub(r'/\*.*?\*/', '', path.read_text(), flags=re.S).strip()
    body = body.replace('_NON_MATCHING', '').replace('.NON_MATCHING', '')
    body = signed_chars(body, char_signed)
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
        name = names[addr]
        return 'func_' + f'{addr:08X}' if name.startswith('D_') else name

    body = re.sub(r'\b(?:func_0x|FUN_)([0-9a-fA-F]{8})\b', call, body)
    if unresolved:
        return None
    if re.search(r'\bgcc2_compiled_\s*\(', body):
        import ghidra2c
        body = ghidra2c.fix_callees(body, func, asm)
        if body is None:
            return None
    widths = access_types(asm)
    memory = memory_types(m2c)
    definitions = []
    if re.search(r'\bSVECTOR\b', body):
        definitions.append('typedef struct { s16 vx, vy, vz, pad; } SVECTOR;')
    if re.search(r'\bDVECTOR\b', body):
        definitions.append('typedef struct { s16 vx, vy; } DVECTOR;')
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
        if name.lstrip('_').startswith('PTR_DAT_'):
            definitions.append(f'#define {name} (*(u8 **)0x{addr:08X})')
            continue
        typ = widths.get(addr)
        if typ is None:
            prefix = name.split('Ram')[0]
            typ = {'b': 'u8', 'c': 's8', 's': 's16', 'i': 's32', 'u': 'u32'}.get(prefix, 's32')
            if prefix.startswith('p'):
                typ = 'u8 *'
        # Bracketed globals are arrays. Scalar globals are memory lvalues, so
        # &global is still its address and writes reach the original RAM.
        info = memory.get(addr, {})
        indexed = bool(re.search(rf'\b{re.escape(name)}\s*\[', body))
        address_indexed = bool(re.search(rf'\(&\s*{re.escape(name)}\)\s*\[', body))
        if name.startswith('null_ARRAY_'):
            typ = 'u8'
        if indexed or name.startswith('null_ARRAY_'):
            typ = info.get('element') or typ
            value = (f'(*({typ} **)0x{addr:08X})' if info.get('pointer')
                     else f'(({typ} *)0x{addr:08X})')
        elif address_indexed and info.get('element'):
            typ = info['element']
            value = f'(*({typ} *)0x{addr:08X})'
        elif info.get('declared') in BITS and not info.get('pointer'):
            typ = info['declared']
            value = f'(*({typ} *)0x{addr:08X})'
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
        function_address = re.fullmatch(r'func_([0-9A-Fa-f]{8})', name)
        if function_address:
            definitions.append(f'#define {name} ((s32 (*)())0x{int(function_address[1], 16):08X})')
            body = re.sub(r'&\s*\b' + re.escape(name) + r'\b', name, body)
            continue
        # These software-double helpers return the raw IEEE bits in v0/v1.
        # Declaring s32 silently discards the high half even when Ghidra's body
        # already carries the result in a 64-bit variable.
        result_type = 'u64' if name in {'__floatsidf', '__adddf3', '__subdf3', '__muldf3',
                                      '__divdf3', '__negdf2'} else 's32'
        definitions.append(f'extern {result_type} {name}();')
    return '#include "ghidra.h"\n' + '\n'.join(definitions) + '\n' + body + '\n'
