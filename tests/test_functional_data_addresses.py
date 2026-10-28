"""Ghidra element stride and machine scalar load width are independent."""
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import UC_MIPS_REG_A0, UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_V0

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest
import functional_ghidra as ghidra


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
def test_halfword_address_stride_keeps_full_word_load(tmp_path, compiler):
    code = '''#include "common.h"
#define DAT_80110000 (*(s32 *)0x80110000)
u32 read_stride(u32 index) {
    return DAT_80110000 + *(u32 *)(&DAT_80110000 + index * 2);
}
'''
    corrected = ghidra.data_address_variant(code, [
        {'address': '80110000', 'type': 'undefined2', 'size': 2}])
    assert corrected
    path = tmp_path / 'read_stride.c'
    path.write_text('/* compiler: ' + compiler + ' */\n' + corrected)
    blob, entry, _ = difftest.build_candidate('chess', path, 'read_stride', True)
    data = bytes(range(1, 65))
    for index in range(4):
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(difftest.CAND_BASE & 0x1FFFFFFF, blob)
        uc.mem_write(0x110000, data)
        uc.reg_write(UC_MIPS_REG_A0, index)
        uc.reg_write(UC_MIPS_REG_RA, difftest.SENTINEL)
        uc.reg_write(UC_MIPS_REG_SP, difftest.STACK_TOP)
        uc.emu_start(entry, difftest.SENTINEL, count=1000)
        expected = int.from_bytes(data[:4], 'little') + int.from_bytes(data[index * 4:index * 4 + 4], 'little')
        assert uc.reg_read(UC_MIPS_REG_V0) == expected


def test_unknown_metadata_and_literals_are_preserved():
    source = '#define DAT_80110000 (*(s32 *)0x80110000)\nchar *message = "&DAT_80110000";\n'
    assert ghidra.data_address_variant(source, [{'address': '80110000', 'type': 'undefined2'}]) is None
    assert ghidra.data_address_variant(source + 'void *p = &DAT_80110000;\n',
                                      [{'address': '80110000', 'type': 'undefined[7]'}]) is None
