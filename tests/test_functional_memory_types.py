"""Generated C must load a pointer variable and preserve byte-array indexing."""
import sys
import pytest

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import functional_ghidra as ghidra
import match
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import UC_MIPS_REG_RA, UC_MIPS_REG_V0


@pytest.mark.parametrize('array_access', ['D_80021000[1]', '(&D_80021000)[1]'])
def test_generated_memory_accesses_execute_with_correct_widths(tmp_path, monkeypatch, array_access):
    cache = tmp_path / 'c'
    (cache / 'chess').mkdir(parents=True)
    (cache / 'chess/sample.c').write_text(
        'int sample(void) { (void)"char"; '
        'if ((u32)&func_80018600 != 0x80018600) return 1000000; '
        'return D_80020000[2] + ' + array_access + ' + ((char)0xff + 1); }\n')
    monkeypatch.setattr(ghidra, 'CACHE', cache)
    monkeypatch.setattr(ghidra, 'symbols', lambda target: {})
    asm = '''
    /* 0 80010000 00000000 */ lui $v0, %hi(D_80020000)
    /* 4 80010004 00000000 */ lw $v0, %lo(D_80020000)($v0)
    /* 8 80010008 00000000 */ lh $a0, 0x4($v0)
    /* C 8001000C 00000000 */ lbu $v1, %lo(D_80021000+1)($a1)
    '''
    context = '''
extern void *D_80020000;
extern M2C_UNK D_80021000;
M2C_FIELD(D_80020000, s16 *, 4);
M2C_FIELD(&D_80021000, u8 *, 1);
'''
    code = ghidra.draft('chess', 'sample', asm, context)
    assert '"char"' in code
    source = tmp_path / 'sample.c'
    source.write_text('#include "common.h"\n' + code)
    obj = match.compile_c(str(source), '2.7.2-psx', '-O2 -G8', target='chess')
    words, _ = match.compiled(obj, 'sample')
    for pointer, value, byte in [(0x80022000, -3, 6), (0x80023000, -400, 250)]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(0x10000, b''.join(w.to_bytes(4, 'little') for w in words))
        uc.mem_write(0x20000, pointer.to_bytes(4, 'little'))
        uc.mem_write((pointer & 0x1FFFFFFF) + 4, (value & 0xFFFF).to_bytes(2, 'little'))
        uc.mem_write(0x21001, bytes([byte]))
        uc.reg_write(UC_MIPS_REG_RA, 0x80000400)
        uc.emu_start(0x80010000, 0x80000400, count=100)
        assert uc.reg_read(UC_MIPS_REG_V0) == (value + byte) & 0xFFFFFFFF
