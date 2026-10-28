"""Opt-in buffer contracts for isolated SDK calls, not a GTE emulator.

Inputs, pointer aliases and writes are observed. Numerical results are opaque,
deterministic samples shared by both executions; ordinary RAM checks still apply.
"""
import struct
import zlib

NAMES = frozenset({'RotTransPers', 'RotTransPers4', 'RotAverage3', 'RotAverage4', 'SetRotMatrix', 'SetTransMatrix', 'func_800CD950'})


def _offset(pointer, size):
    offset = pointer & 0x1FFFFFFF
    if pointer & 3 or not 0 <= offset <= 0x200000 - size:
        raise ValueError('unaligned or unmapped SDK buffer')
    return offset


def _identity(pointer):
    return 0 if 0x801EFF00 <= pointer < 0x801FFF00 else pointer


def _aliases(spans):
    result = []
    for i, (base, size) in enumerate(spans):
        for other, width in spans[i + 1:]:
            result.append(other - base if max(base, other) < min(base + size, other + width) else 0x7FFFFFFF)
    return result


def _sample(vector, state, call_index, salt):
    data = (vector + state.get('SetRotMatrix', b'') + state.get('SetTransMatrix', b'') +
            struct.pack('<II', call_index, (salt or 0) & 0xFFFFFFFF))
    h = zlib.crc32(data)
    x, y = (h & 2047) - 1024, ((h >> 11) & 2047) - 1024
    return ((x & 0xFFFF) | ((y & 0xFFFF) << 16), ((h >> 7) ^ h) % 4097,
            0x80000000 if h & 1 else 0, (h >> 16) & 0x3FFF)


def execute(name, uc, args, state, call_index, salt):
    pointer = args[0]
    if name == 'func_800CD950':
        # CHESS projection boundary: the wrapper consumes XYZ and writes two
        # screen halfwords in an actor-shaped buffer. Camera setup, GTE values
        # and the helper's internal matrix scratch writes are opaque here.
        vector_base = _offset(pointer, 8)
        vector = bytes(uc.mem_read(vector_base, 8))[:6]
        output = args[1] & 0x1FFFFFFF
        if args[1] & 1 or not 0 <= output <= 0x200000 - 0x4C:
            raise ValueError('unaligned or unmapped projection output')
        xy, _, _, depth = _sample(vector, state, call_index, salt)
        uc.mem_write(output + 0x46, struct.pack('<H', xy & 0xFFFF))
        uc.mem_write(output + 0x4A, struct.pack('<H', xy >> 16))
        spans = [(vector_base, 6), (output + 0x46, 2), (output + 0x4A, 2)]
        return ('contract:' + name, *map(_identity, args[:2]),
                *struct.unpack('<3H', vector), *_aliases(spans)), depth
    if name == 'SetRotMatrix':
        data = bytes(uc.mem_read(_offset(pointer, 18), 18))
        state[name] = data
        return ('contract:' + name, _identity(pointer), *struct.unpack('<9H', data)), None
    if name == 'SetTransMatrix':
        base = _offset(pointer, 32)
        data = bytes(uc.mem_read(base + 20, 12))
        state[name] = data
        return ('contract:' + name, _identity(pointer), *struct.unpack('<3I', data)), None
    if name == 'RotAverage3':
        if len(args) != 8:
            raise ValueError(name + ' requires four register and four stack arguments')
        inputs = [_offset(p, 8) for p in args[:3]]
        outputs = [_offset(p, 4) for p in args[3:]]
        # RTPT loads all three vectors before the first output store.
        vectors = [bytes(uc.mem_read(p, 8))[:6] for p in inputs]
        flag = 0
        for index, vector in enumerate(vectors):
            xy, p, current_flag, result = _sample(vector, state, call_index * 3 + index, salt)
            flag |= current_flag
            uc.mem_write(outputs[index], struct.pack('<I', xy))
        for offset, value in zip(outputs[3:], (p, flag)):
            uc.mem_write(offset, struct.pack('<I', value))
        spans = [(p, 6) for p in inputs] + [(p, 4) for p in outputs]
        event = ('contract:' + name, *map(_identity, args),
                 *struct.unpack('<9H', b''.join(vectors)), *_aliases(spans))
        # Opaque samples stay inside the renderer's 1024-entry ordering table.
        return event, result & 0x3FF
    if name in ('RotTransPers4', 'RotAverage4'):
        if len(args) != 10:
            raise ValueError(name + ' requires four register and six stack arguments')
        inputs = [_offset(p, 8) for p in args[:4]]
        outputs = [_offset(p, 4) for p in args[4:]]
        vectors = [bytes(uc.mem_read(p, 8))[:6] for p in inputs[:3]]
        first_flag = 0
        # The original stores the first three projections BEFORE loading v3.
        # An output may overlap that fourth input; read it at the same point.
        for index, vector in enumerate(vectors):
            xy, _, flag, _ = _sample(vector, state, call_index * 4 + index, salt)
            first_flag |= flag
            uc.mem_write(outputs[index], struct.pack('<I', xy))
        vectors.append(bytes(uc.mem_read(inputs[3], 8))[:6])
        xy, p, flag, result = _sample(vectors[3], state, call_index * 4 + 3, salt)
        for offset, value in zip(outputs[3:], (xy, p, flag | first_flag)):
            uc.mem_write(offset, struct.pack('<I', value))
        spans = [(p, 6) for p in inputs] + [(p, 4) for p in outputs]
        event = ('contract:' + name, *map(_identity, args),
                 *struct.unpack('<12H', b''.join(vectors)), *_aliases(spans))
        return event, result if name == 'RotTransPers4' else (result << 2) | (p & 3)
    if name != 'RotTransPers':
        raise ValueError('unknown SDK contract')
    # LWC2 reads eight bytes, but the upper padding halfword is not a coordinate.
    vector = bytes(uc.mem_read(_offset(pointer, 8), 8))[:6]
    outputs = args[1:4]
    offsets = [_offset(p, 4) for p in outputs]
    spans = [(pointer & 0x1FFFFFFF, 6)] + [(p & 0x1FFFFFFF, 4) for p in outputs]
    xy, p, flag, result = _sample(vector, state, call_index, salt)
    # Match the SDK's store order so overlapping output buffers remain visible.
    for offset, value in zip(offsets, (xy, p, flag)):
        uc.mem_write(offset, struct.pack('<I', value))
    event = ('contract:' + name, *map(_identity, args[:4]), *struct.unpack('<3H', vector), *_aliases(spans))
    return event, result
