"""Conservative task registration evidence and a fixture for the real dispatcher."""
import functools
import pathlib
import re

import retuse

ROOT = pathlib.Path(__file__).resolve().parent.parent
DISPATCHER = 'func_80013A68'
NODE = 0x80130000


@functools.lru_cache(maxsize=None)
def registered(target):
    result = set()
    targets = [target] + (['yuugi'] if target in ('chess', 'raise', 'etc') else [])
    for current in targets:
        for path in (ROOT / '.cache/fullasm' / current).rglob('*.s'):
            values, pending = {}, None
            for line in path.read_text().splitlines():
                m = retuse.INSN.search(line)
                if not m:
                    if retuse.LABEL.match(line):
                        values.clear()
                    continue
                op, args = m.groups()
                regs = re.findall(r'\$\w+', args)
                _, dst = retuse.regs_of(op, args)
                low = re.search(r'%lo\((func_[0-9A-Fa-f]{8})\)', args)
                if dst and low and op in ('addiu', 'addi', 'ori'):
                    values[dst] = low[1]
                elif dst and op in ('addu', 'or') and len(regs) == 3 and '$zero' in regs[1:]:
                    src = regs[1] if regs[2] == '$zero' else regs[2]
                    values[dst] = values.get(src)
                elif dst:
                    values.pop(dst, None)
                if pending:
                    if pending in ('func_80015B3C', 'func_800136C8'):
                        result.update(values[r] for r in ('$a0', '$a1') if values.get(r))
                    for reg in ('$v0', '$v1', '$a0', '$a1', '$a2', '$a3',
                                '$t0', '$t1', '$t2', '$t3', '$t4', '$t5', '$t6', '$t7', '$t8', '$t9'):
                        values.pop(reg, None)
                    pending = None
                if op == 'jal':
                    pending = args.strip()
                elif op in retuse.BRANCH or op in ('j', 'jr', 'jalr'):
                    values.clear()
    return frozenset(result)


def eligible(target, func):
    # A directly called function needs independent validation of that context.
    return func in registered(target) and not retuse.call_sites().get(func)


def prepare(ram, entry, no_op):
    def word(address, value):
        offset = address & 0x1FFFFFFF
        ram[offset:offset + 4] = value.to_bytes(4, 'little')

    word(0x80078B7C, 0x80120000)
    word(0x8008ED9C, 0)
    for address in range(0x80120000, 0x80120014, 4):
        word(address, 0)
    word(0x8012C554, 0)
    for address in range(0x8012C558, 0x8012C578, 4):
        word(address, 0)
    word(0x8012C578, NODE)
    word(0x8012C57C, 0)
    for address, value in [(NODE, 0x00010090), (NODE + 4, 0), (NODE + 8, 0),
                           (NODE + 12, no_op), (NODE + 16, entry)]:
        word(address, value)
