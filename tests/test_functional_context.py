"""Callee signatures must preserve arguments forwarded in existing registers."""
import sys

from unicorn import Uc, UC_ARCH_MIPS, UC_HOOK_CODE, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                               UC_MIPS_REG_PC, UC_MIPS_REG_RA, UC_MIPS_REG_SP, UC_MIPS_REG_V0)

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import autodecomp as ad
import functional_context
import match


def helper_assembly(args):
    return ('glabel func_80011000\n' +
            '\n'.join('/* 0 */ addu $v0, $v0, ' + arg for arg in args) +
            '\n/* 0 */ jr $ra\n/* 0 */ nop\n')


def test_leaf_signature_uses_overlay_and_skips_unresolved_helpers(tmp_path, monkeypatch):
    monkeypatch.setattr(functional_context.retuse, 'used', lambda *a, **k: False)
    overlay, main = tmp_path / 'overlay.s', tmp_path / 'main.s'
    overlay.write_text(helper_assembly(['$a0', '$a1', '$a2']))
    main.write_text(helper_assembly(['$a0']))
    monkeypatch.setattr(ad, 'asm_path', lambda target, name: overlay if target == 'chess' else main)
    caller = '/* 0 */ jal func_80011000\n'
    assert 'func_80011000(s32, s32, s32)' in functional_context.leaf_context('chess', caller)
    overlay.write_text('/* 0 */ jal func_80012000\n/* 0 */ nop\n')
    assert functional_context.leaf_context('chess', caller) is None
    overlay.write_text(helper_assembly(['$a0']))
    monkeypatch.setattr(functional_context.retuse, 'used', lambda *a, **k: True)
    assert functional_context.leaf_context('chess', caller) is None


def test_forwarded_arguments_survive_m2c_and_compilation(tmp_path, monkeypatch):
    monkeypatch.setattr(functional_context.retuse, 'used', lambda *a, **k: False)
    helper = tmp_path / 'helper.s'
    helper.write_text(helper_assembly(['$a0', '$a1', '$a2']))
    monkeypatch.setattr(ad, 'asm_path', lambda target, name: helper)
    caller = tmp_path / 'caller.s'
    caller.write_text('''glabel caller
/* 0 */ addiu $sp, $sp, -0x18
/* 4 */ sw $ra, 0x10($sp)
/* 8 */ jal func_80011000
/* C */ addu $a3, $zero, $zero
/* 10 */ lw $ra, 0x10($sp)
/* 14 */ nop
/* 18 */ jr $ra
/* 1C */ addiu $sp, $sp, 0x18
''')
    ctx = tmp_path / 'context.c'
    ctx.write_text(functional_context.leaf_context('chess', caller.read_text()))
    raw = ad.run_m2c('chess', 'caller', caller,
                    ('--target', 'mipsel-gcc-c', '--context', str(ctx)))
    assert raw and 'M2C_ERROR' not in raw
    code = ad.to_c(raw, 'caller', caller.read_text(), {})
    source = tmp_path / 'caller.c'
    source.write_text('#include "common.h"\n'
                      '#define func_80011000 ((s32 (*)(s32, s32, s32))0x80011000)\n' + code)
    obj = match.compile_c(str(source), '2.7.2-psx', '-O2 -G8', target='chess')
    words, _ = match.compiled(obj, 'caller')
    for args in [(0, 1, 2), (0x80150000, 7, 5), (0xFFFFFFFF, 0x80000000, 0x7FFFFFFF)]:
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
        uc.mem_map(0, 0x200000)
        uc.mem_write(0x10000, b''.join(w.to_bytes(4, 'little') for w in words))
        uc.mem_write(0x11000, b'\x08\x00\xe0\x03' + bytes(4))
        calls = []

        def invoke(emu, address, size, data):
            if address != 0x80011000:
                return
            values = tuple(emu.reg_read(reg) for reg in (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2))
            calls.append(values)
            emu.reg_write(UC_MIPS_REG_V0, values[0] ^ values[1] ^ values[2])
            emu.reg_write(UC_MIPS_REG_PC, emu.reg_read(UC_MIPS_REG_RA))

        uc.hook_add(UC_HOOK_CODE, invoke)
        for reg, value in zip((UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2), args):
            uc.reg_write(reg, value)
        uc.reg_write(UC_MIPS_REG_RA, 0x80000400)
        uc.reg_write(UC_MIPS_REG_SP, 0x801FF000)
        uc.emu_start(0x80010000, 0x80000400, count=100)
        assert calls == [args]
        assert uc.reg_read(UC_MIPS_REG_V0) == args[0] ^ args[1] ^ args[2]
