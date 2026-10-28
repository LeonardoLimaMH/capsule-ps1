"""Opt-in buffer contracts for isolated SDK calls, not a GTE emulator.

Inputs, pointer aliases and writes are observed. Numerical results are opaque,
deterministic samples shared by both executions; ordinary RAM checks still apply.
"""
import struct
import zlib

NAMES = frozenset({'RotTransPers', 'SetRotMatrix', 'SetTransMatrix'})


def _offset(pointer, size):
    offset = pointer & 0x1FFFFFFF
    if pointer & 3 or not 0 <= offset <= 0x200000 - size:
        raise ValueError('unaligned or unmapped SDK buffer')
    return offset


def _identity(pointer):
    return 0 if 0x801EFF00 <= pointer < 0x801FFF00 else pointer


def execute(name, uc, args, state, call_index, salt):
    pointer = args[0]
    if name == 'SetRotMatrix':
        data = bytes(uc.mem_read(_offset(pointer, 18), 18))
        state[name] = data
        return ('contract:' + name, _identity(pointer), *struct.unpack('<9H', data)), None
    if name == 'SetTransMatrix':
        base = _offset(pointer, 32)
        data = bytes(uc.mem_read(base + 20, 12))
        state[name] = data
        return ('contract:' + name, _identity(pointer), *struct.unpack('<3I', data)), None
    if name != 'RotTransPers':
        raise ValueError('unknown SDK contract')
    # LWC2 reads eight bytes, but the upper padding halfword is not a coordinate.
    vector = bytes(uc.mem_read(_offset(pointer, 8), 8))[:6]
    outputs = args[1:4]
    offsets = [_offset(p, 4) for p in outputs]
    spans = [(pointer & 0x1FFFFFFF, 6)] + [(p & 0x1FFFFFFF, 4) for p in outputs]
    aliases = []
    for i, (base, size) in enumerate(spans):
        for other, width in spans[i + 1:]:
            aliases.append(other - base if max(base, other) < min(base + size, other + width) else 0x7FFFFFFF)
    data = (vector + state.get('SetRotMatrix', b'') + state.get('SetTransMatrix', b'') +
            struct.pack('<II', call_index, (salt or 0) & 0xFFFFFFFF))
    h = zlib.crc32(data)
    x, y = (h & 2047) - 1024, ((h >> 11) & 2047) - 1024
    xy = (x & 0xFFFF) | ((y & 0xFFFF) << 16)
    p = ((h >> 7) ^ h) % 4097
    flag = 0x80000000 if h & 1 else 0
    # Match the SDK's store order so overlapping output buffers remain visible.
    for offset, value in zip(offsets, (xy, p, flag)):
        uc.mem_write(offset, struct.pack('<I', value))
    event = ('contract:' + name, *map(_identity, args[:4]), *struct.unpack('<3H', vector), *aliases)
    return event, (h >> 16) & 0x3FFF
