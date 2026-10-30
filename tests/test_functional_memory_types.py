"""Generated C must load a pointer variable and preserve byte-array indexing."""
import sys
import pytest

from conftest import ROOT, unchanged_gte_event

sys.path.insert(0, str(ROOT / 'tools'))
import functional_ghidra as ghidra
import match
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import UC_MIPS_REG_RA, UC_MIPS_REG_V0, UC_MIPS_REG_SP
import difftest


def test_byte_offsets_do_not_change_scalar_loads_typed_indexing_or_literals():
    source = '''#define D_80020000 (*(u32 *)0x80020000)
int sample(void) {
    (void)"&D_80020000 + 7";
    return D_80020000 + (&D_80020000)[2] +
           *(u32 *)(&D_80020000 + 7);
}
'''
    variant = ghidra.byte_address_variant(source)
    assert 'D_80020000 + (&D_80020000)[2]' in variant
    assert '"&D_80020000 + 7"' in variant
    assert '*(u32 *)(((u8 *)0x80020000) + 7)' in variant
    assert ghidra.byte_address_variant('return &local + 7;') is None


@pytest.mark.parametrize('array_access', ['D_80021000[1]', '(&D_80021000)[1]'])
@pytest.mark.parametrize('char_signed', [True, False])
def test_generated_memory_accesses_execute_with_correct_widths(tmp_path, monkeypatch, array_access, char_signed):
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
    code = ghidra.draft('chess', 'sample', asm, context, char_signed=char_signed)
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
        assert uc.reg_read(UC_MIPS_REG_V0) == (value + byte + (0 if char_signed else 256)) & 0xFFFFFFFF


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
@pytest.mark.parametrize('pointer', [False, True])
def test_unindexed_global_pointer_and_array_are_distinct(tmp_path, monkeypatch, compiler, pointer):
    (tmp_path / 'chess').mkdir()
    (tmp_path / 'chess/read_global.c').write_text('uint read_global(void) { return *D_80110000; }')
    monkeypatch.setattr(ghidra, 'CACHE', tmp_path)
    context = 'extern u32 *D_80110000;' if pointer else 'extern u32 D_80110000[4];'
    code = ghidra.draft('chess', 'read_global', '', context)
    source = tmp_path / 'read_global.c'
    source.write_text('/* compiler: ' + compiler + ' */\n#include "common.h"\n' + code)
    blob, entry, _ = difftest.build_candidate('chess', source, 'read_global', True)
    for value in [0x89ABCDEF, 0x12345678]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(difftest.CAND_BASE & 0x1FFFFFFF, blob)
        uc.mem_write(0x110000, ((0x80112000 if pointer else value)).to_bytes(4, 'little'))
        uc.mem_write(0x112000, value.to_bytes(4, 'little'))
        uc.reg_write(UC_MIPS_REG_RA, difftest.SENTINEL)
        uc.reg_write(UC_MIPS_REG_SP, difftest.STACK_TOP)
        uc.emu_start(entry, difftest.SENTINEL, count=1000)
        assert uc.reg_read(UC_MIPS_REG_V0) == value


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
def test_volatile_pointer_preserves_each_device_read(tmp_path, monkeypatch, compiler):
    (tmp_path / 'chess').mkdir()
    (tmp_path / 'chess/read_device.c').write_text('uint read_device(void) { return *D_80110000 + *D_80110000; }')
    monkeypatch.setattr(ghidra, 'CACHE', tmp_path)
    code = ghidra.draft('chess', 'read_device', '', 'extern u8 *D_80110000;', volatile_pointers=True)
    source = tmp_path / 'read_device.c'
    source.write_text('/* compiler: ' + compiler + ' */\n#include "common.h"\n' + code)
    blob, entry, _ = difftest.build_candidate('chess', source, 'read_device', True)
    ram = bytearray(difftest.RAM_SIZE)
    ram[0x110000:0x110004] = (0xBF801100).to_bytes(4, 'little')
    result, error = difftest.run(entry, {UC_MIPS_REG_SP: difftest.STACK_TOP}, bytes(ram),
                                {}, [(difftest.CAND_BASE, blob)])
    assert error is None
    assert result[2][0] == [('io:R', 0x1F801100, 1, 0)] * 2 + [
        unchanged_gte_event({UC_MIPS_REG_SP: difftest.STACK_TOP})]


@pytest.mark.parametrize('compiler', ['2.7.2-psx', '2.8.1-psx'])
def test_string_metadata_preserves_array_address_and_size(tmp_path, monkeypatch, compiler):
    (tmp_path / 'chess').mkdir()
    (tmp_path / 'chess/read_string.c').write_text(
        'uint read_string(void) { return D_80110000[1] + sizeof(D_80110000); }')
    monkeypatch.setattr(ghidra, 'CACHE', tmp_path)
    code = ghidra.draft('chess', 'read_string', '')
    code = ghidra.string_array_variant(code, [{'address': '80110000', 'type': 'string', 'size': 3}])
    assert code
    source = tmp_path / 'read_string.c'
    source.write_text('/* compiler: ' + compiler + ' */\n#include "common.h"\n' + code)
    blob, entry, _ = difftest.build_candidate('chess', source, 'read_string', True)
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(0, 0x200000)
    uc.mem_write(difftest.CAND_BASE & 0x1FFFFFFF, blob)
    uc.mem_write(0x110000, b'X\xE9\x00')
    uc.reg_write(UC_MIPS_REG_RA, difftest.SENTINEL)
    uc.reg_write(UC_MIPS_REG_SP, difftest.STACK_TOP)
    uc.emu_start(entry, difftest.SENTINEL, count=1000)
    assert uc.reg_read(UC_MIPS_REG_V0) == 0xE9 + 3
