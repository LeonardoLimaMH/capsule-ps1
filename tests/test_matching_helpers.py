"""Matching hints retain argument values, array decay and single evaluation."""
import pathlib
import struct
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_HOOK_CODE, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                               UC_MIPS_REG_A3, UC_MIPS_REG_RA, UC_MIPS_REG_SP,
                               UC_MIPS_REG_V0)

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'tools'))
import match


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
@pytest.mark.parametrize('fallback', [False, True])
def test_array_argument_and_increment_survive_matching_helper(tmp_path, compiler, fallback):
    prefix = '#include "common.h"\n'
    if fallback:
        prefix += '#undef __mips__\n#undef __mips\n#undef mips\n'
    source = tmp_path / 'helper.c'
    source.write_text(prefix + '''#include "matching.h"
#define capture ((u32 (*)(u32 *, s32, s32, s32))0x80011000)
u32 recovered(u32 value, s32 *counter) {
    u32 values[2];
    values[0] = value;
    values[1] = value ^ 0xA5A5;
    return MATCHING_CALL4_REPEAT(capture, values, (*counter)++, 0);
}
''')
    words, _ = match.compiled(match.compile_c(source, compiler, '-O2 -G8', target='chess'),
                              'recovered')
    for value, counter in [(0, 0), (0xFFFFFFFF, -1), (0x87654321, 7)]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(0x10000, b''.join(w.to_bytes(4, 'little') for w in words))
        uc.mem_write(0x11000, b'\x08\x00\xe0\x03' + bytes(4))
        uc.mem_write(0x150100, struct.pack('<i', counter))
        observed = []

        def capture(emu, address, size, data):
            pointer = emu.reg_read(UC_MIPS_REG_A0) & 0x1FFFFFFF
            values = struct.unpack('<2I', bytes(emu.mem_read(pointer, 8)))
            args = tuple(emu.reg_read(r) & 0xFFFFFFFF for r in
                         (UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3))
            observed.append((values, args))
            emu.reg_write(UC_MIPS_REG_V0, 0xDEADBEEF)

        uc.hook_add(UC_HOOK_CODE, capture, begin=0x80011000, end=0x80011000)
        uc.reg_write(UC_MIPS_REG_A0, value)
        uc.reg_write(UC_MIPS_REG_A1, 0x80150100)
        uc.reg_write(UC_MIPS_REG_SP, 0x801FF000)
        uc.reg_write(UC_MIPS_REG_RA, 0x80000400)
        uc.emu_start(0x80010000, 0x80000400, count=1000)
        assert observed == [((value, value ^ 0xA5A5), (counter & 0xFFFFFFFF, 0, 0))]
        assert struct.unpack('<i', bytes(uc.mem_read(0x150100, 4))) == (counter + 1,)
        assert uc.reg_read(UC_MIPS_REG_V0) == 0xDEADBEEF
