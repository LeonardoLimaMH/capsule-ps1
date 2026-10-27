"""Regression cases for CHESS division profiles and omitted m2c arguments."""
import pathlib
import re
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'tools'))
import arggaps
import difftest

ASM = '''.text
.ent func_800A88C4
func_800A88C4:
div $2,$4,$5
sll $2,$2,16
j $31
sra $2,$2,16
.end func_800A88C4
.ent checked_helper
checked_helper:
div $2,$4,$5
j $31
nop
.end checked_helper
'''


def assemble_text(script, *args):
    result = subprocess.run([sys.executable, script, *args, '--aspsx-version=2.79',
                             '--expand-div'], input=ASM, text=True,
                            capture_output=True, cwd=ROOT)
    assert result.returncode == 0, result.stderr
    return result.stdout


def test_raw_division_keeps_scheduling_and_checked_helper():
    text = assemble_text('tools/psx_as.py', '--target', 'chess')
    assert text.count('# EXPAND_ZERO_DIV START') == 1
    assert text.count('# EXPAND_DIV START') == 1
    instructions = '\n'.join(line.split('#', 1)[0] for line in text.splitlines())
    assert re.search(r'mflo\s+\$2\s*\n\s*nop[^\n]*\n\s*sll', instructions)
    assert 'break' in text[text.index('checked_helper:'):]


def test_unlisted_target_is_identical_to_original_maspsx():
    actual = assemble_text('tools/psx_as.py', '--target', 'unlisted')
    expected = assemble_text('/opt/maspsx/maspsx.py')
    assert actual == expected


def test_restore_leading_argument_without_changing_expression_or_64_bit_abi():
    original = 's32 f(u8 *arg1) { return arg1[0x16]; }'
    assert arggaps.restore(original, 'f') == 's32 f(s32 unused_arg0, u8 *arg1) { return arg1[0x16]; }'
    double_arg = 's32 f(double arg0, s32 arg2) { return arg2; }'
    assert arggaps.restore(double_arg, 'f') == double_arg


def test_jump_table_pointer_requires_the_same_known_section_offset():
    alias = (0x80098794, 0x80180108, 0x4C)
    assert difftest.same_rodata_address(0x800987AC, 0x80180120, alias)
    assert not difftest.same_rodata_address(0x800987B0, 0x80180120, alias)
    assert not difftest.same_rodata_address(0x80098794, 0x80180000, alias)
    assert not difftest.same_rodata_address(0x80098794, 0x80180108, None)
