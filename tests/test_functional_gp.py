"""A read-only GP can use the target ABI; functions changing it stay unresolved."""
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_GP, UC_MIPS_REG_V0

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest
import functional_ghidra as ghidra


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
@pytest.mark.parametrize('target', ['chess', 'slpm'])
def test_generated_read_only_gp_matches_target_abi(tmp_path, monkeypatch, compiler, target):
    folder = tmp_path / target
    folder.mkdir()
    (folder / 'read_gp.c').write_text('uint read_gp(void) {\n int unaff_gp;\n return *(uint *)(unaff_gp+0x130);\n}\n')
    monkeypatch.setattr(ghidra, 'CACHE', tmp_path)
    asm = '/* 0 */ lw $v0, 0x130($gp)\n'
    assert ghidra.draft(target, 'read_gp', asm) is None
    code = ghidra.draft(target, 'read_gp', asm, resolve_gp=True)
    assert code
    path = tmp_path / 'read_gp.c'
    path.write_text('/* compiler: ' + compiler + ' */\n#include "common.h"\n' + code)
    blob, entry, _ = difftest.build_candidate(target, path, 'read_gp', True)
    gp = difftest.GP.get(target, 0x80078B6C)
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(0, 0x200000)
    uc.mem_write(difftest.CAND_BASE & 0x1FFFFFFF, blob)
    uc.mem_write((gp + 0x130) & 0x1FFFFFFF, (0x89ABCDEF).to_bytes(4, 'little'))
    uc.reg_write(UC_MIPS_REG_RA, difftest.SENTINEL)
    uc.reg_write(UC_MIPS_REG_SP, difftest.STACK_TOP)
    uc.reg_write(UC_MIPS_REG_GP, gp)
    uc.emu_start(entry, difftest.SENTINEL, count=1000)
    assert uc.reg_read(UC_MIPS_REG_V0) == 0x89ABCDEF
    assert uc.reg_read(UC_MIPS_REG_GP) == gp
    assert ghidra.draft(target, 'read_gp', asm + '/* 4 */ addiu $gp, $gp, 4\n', resolve_gp=True) is None
