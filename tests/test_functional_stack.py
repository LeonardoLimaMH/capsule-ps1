"""Recovered stack offsets must preserve contiguous buffers and overlapping views."""
import struct
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_HOOK_CODE, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                               UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_V0)

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import functional_stack
import match


SOURCE = '''#include "common.h"
#define consume ((void (*)(volatile s16 *))0x80011000)
u32 recovered(s32 a, s32 b, s32 c) {
  s16 local_20;
  s16 local_1e;
  s16 local_1c;
  u32 local_18;
  u8 auStack_20[6];
  local_20 = a;
  local_1e = b;
  local_1c = c;
  local_18 = 0x12340000;
  consume(&local_20);
  auStack_20[0] ^= 0x55;
  return (u16)local_20 + local_18;
}
'''


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
def test_compiled_frame_preserves_contiguity_and_aliases(tmp_path, compiler):
    code = functional_stack.frame_variant(SOURCE, 'recovered')
    assert code and 's16 volatile *' in code
    path = tmp_path / 'recovered.c'
    path.write_text(code)
    obj = match.compile_c(str(path), compiler, '-O2 -G8', target='chess')
    words, _ = match.compiled(obj, 'recovered')
    for args in [(1, 2, 3), (-32768, 32767, -1), (0x12345678, -17, 0)]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(0x10000, b''.join(w.to_bytes(4, 'little') for w in words))
        uc.mem_write(0x11000, b'\x08\x00\xe0\x03' + bytes(4))
        observed = []

        def consume(emu, address, size, data):
            pointer = emu.reg_read(UC_MIPS_REG_A0) & 0x1FFFFFFF
            observed.append(bytes(emu.mem_read(pointer, 6)))

        uc.hook_add(UC_HOOK_CODE, consume, begin=0x80011000, end=0x80011000)
        for reg, value in zip((UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2), args):
            uc.reg_write(reg, value & 0xFFFFFFFF)
        uc.reg_write(UC_MIPS_REG_RA, 0x80000400)
        uc.reg_write(UC_MIPS_REG_SP, 0x801FF000)
        uc.emu_start(0x80010000, 0x80000400, count=1000)
        assert observed == [struct.pack('<3H', *(v & 0xFFFF for v in args))]
        assert uc.reg_read(UC_MIPS_REG_V0) == 0x12340000 + ((args[0] & 0xFFFF) ^ 0x55)


def test_unresolved_frame_shapes_remain_pending():
    assert functional_stack.frame_variant(SOURCE.replace('s16 local_20;', 'Unknown local_20;'), 'recovered') is None
    assert functional_stack.frame_variant(SOURCE.replace('u8 auStack_20[6];', ''), 'recovered') is None
    assert functional_stack.frame_variant(SOURCE, 'missing') is None
