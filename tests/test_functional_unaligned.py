"""Little-endian LWL/LWR + SWL/SWR copies must survive every alignment."""
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_RA

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import autodecomp as ad
import functional_m2c
import match


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
def test_generated_unaligned_copy_preserves_neighbor_bytes(tmp_path, compiler):
    asm = tmp_path / 'copy_word.s'
    asm.write_text('''glabel copy_word
lwl $v0, 3($a0)
lwr $v0, 0($a0)
nop
swl $v0, 3($a1)
swr $v0, 0($a1)
jr $ra
nop
''')
    raw = ad.run_m2c('chess', 'copy_word', asm, ('--target', 'mipsel-gcc-c'))
    assert raw and 'M2C_ERROR' not in raw
    code = ad.to_c(raw, 'copy_word', asm.read_text(), {})
    source = tmp_path / 'copy_word.c'
    source.write_text('#include "common.h"\n' + functional_m2c.unaligned_words(code))
    obj = match.compile_c(str(source), compiler, '-O2 -G8', target='chess')
    words, _ = match.compiled(obj, 'copy_word')
    payload = b'\x81\xff\x02\x80'
    for src_offset in range(4):
        for dst_offset in range(4):
            uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
            uc.mem_map(0, 0x200000)
            uc.mem_write(0x10000, b''.join(w.to_bytes(4, 'little') for w in words))
            uc.mem_write(0x20000 + src_offset, payload)
            uc.mem_write(0x30000, b'\xa5' * 16)
            uc.reg_write(UC_MIPS_REG_A0, 0x80020000 + src_offset)
            uc.reg_write(UC_MIPS_REG_A1, 0x80030000 + dst_offset)
            uc.reg_write(UC_MIPS_REG_RA, 0x80000400)
            uc.emu_start(0x80010000, 0x80000400, count=100)
            expected = bytearray(b'\xa5' * 16)
            expected[dst_offset:dst_offset + 4] = payload
            assert uc.mem_read(0x30000, 16) == expected
