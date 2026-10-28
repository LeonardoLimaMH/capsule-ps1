"""Generated SDK declarations must forward both halves of a software double."""
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_HOOK_CODE, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3,
                               UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_V0, UC_MIPS_REG_V1)

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest
import functional_ghidra as ghidra


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
@pytest.mark.parametrize('helper,params,forwarded', [
    ('__floatsidf', 'int value', 'value'),
    ('__muldf3', 'ulonglong a, ulonglong b', 'a, b'),
    ('__adddf3', 'ulonglong a, ulonglong b', 'a, b'),
    ('__subdf3', 'ulonglong a, ulonglong b', 'a, b'),
    ('__divdf3', 'ulonglong a, ulonglong b', 'a, b'),
    ('__negdf2', 'ulonglong a', 'a'),
])
def test_generated_c_preserves_high_return_half(tmp_path, monkeypatch, compiler, helper, params, forwarded):
    cache = tmp_path / 'chess'
    cache.mkdir()
    (cache / 'wide.c').write_text(f'ulonglong wide({params}) {{ return {helper}({forwarded}); }}')
    monkeypatch.setattr(ghidra, 'CACHE', tmp_path)
    code = ghidra.draft('chess', 'wide', '')
    path = tmp_path / 'compiled.c'
    path.write_text('/* compiler: ' + compiler + ' */\n#include "common.h"\n' + code)
    blob, entry, _ = difftest.build_candidate('chess', path, 'wide', True)
    address = next(addr for addr, name in ghidra.symbols('chess').items() if name == helper)
    for low, high in [(0x80000000, 0x12345678), (0x1234, 0xFFFABCDE)]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(difftest.CAND_BASE & 0x1FFFFFFF, blob)
        uc.mem_write(address & 0x1FFFFFFF, difftest.JR_RA_NOP)
        observed = []
        inputs = (7, 0x11223344, 0x55667788, 0x99AABBCC)

        def callee(emu, pc, size, data):
            observed.append(tuple(emu.reg_read(r) for r in
                                  (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3)))
            emu.reg_write(UC_MIPS_REG_V0, low)
            emu.reg_write(UC_MIPS_REG_V1, high)

        uc.hook_add(UC_HOOK_CODE, callee, begin=address, end=address)
        for register, value in zip((UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3), inputs):
            uc.reg_write(register, value)
        uc.reg_write(UC_MIPS_REG_RA, difftest.SENTINEL)
        uc.reg_write(UC_MIPS_REG_SP, difftest.STACK_TOP)
        uc.emu_start(entry, difftest.SENTINEL, count=1000)
        count = 1 if helper == '__floatsidf' else 2 if helper == '__negdf2' else 4
        assert observed and observed[0][:count] == inputs[:count]
        assert uc.reg_read(UC_MIPS_REG_V0) == low
        assert uc.reg_read(UC_MIPS_REG_V1) == high
