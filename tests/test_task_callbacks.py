"""Task context uses the real dispatcher and observes execution and memory writes."""
import sys
import re
import subprocess

import pytest

from unicorn.mips_const import UC_MIPS_REG_SP

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest
import task_callbacks as tasks


def test_constructor_registration_follows_delay_slot_and_overwrites(tmp_path, monkeypatch):
    folder = tmp_path / '.cache/fullasm/chess'
    folder.mkdir(parents=True)
    (folder / 'factory.s').write_text('''glabel factory
/* 0 */ addiu $a1, $t0, %lo(func_80011100)
/* 4 */ jal func_80015B3C
/* 8 */ addiu $a0, $t1, %lo(func_80011200)
/* C */ addiu $a1, $t0, %lo(func_80011300)
/* 10 */ addu $a1, $zero, $zero
/* 14 */ jal func_80015B3C
/* 18 */ nop
/* 1C */ addiu $a1, $t0, %lo(func_80011400)
/* 20 */ jal func_80020CE4
/* 24 */ nop
''')
    monkeypatch.setattr(tasks, 'ROOT', tmp_path)
    tasks.registered.cache_clear()
    tasks.registrations.cache_clear()
    try:
        assert tasks.registrations('chess') == {'func_80011100': (12,), 'func_80011200': (16,),
                                                'func_80011400': (16,)}
        monkeypatch.setattr(tasks.retuse, 'call_sites', lambda: {'func_80011100': ['direct call']})
        assert not tasks.eligible('chess', 'func_80011100')
        assert tasks.eligible('chess', 'func_80011200')
    finally:
        tasks.registered.cache_clear()
        tasks.registrations.cache_clear()


def test_a_caller_that_skips_the_target_cannot_pass():
    ram = bytearray(difftest.RAM_SIZE)
    ram[0x10000:0x10008] = difftest.JR_RA_NOP
    result, error = difftest.run(0x80010000, {UC_MIPS_REG_SP: difftest.STACK_TOP},
                                bytes(ram), {}, [], required_entries=(0x80011000,))
    assert result is None and 'did not execute' in error


@pytest.mark.parametrize('slot', [12, 16])
def test_real_dispatcher_discards_return_but_observes_callback_writes(slot):
    path, header, base, _ = difftest.TARGETS['yuugi']
    image = (ROOT / path).read_bytes()[header:]
    ram = bytearray(difftest.RAM_SIZE)
    offset = base & 0x1FFFFFFF
    ram[offset:offset + len(image)] = image
    target, no_op = 0x80011000, 0x80012000
    tasks.prepare(ram, target, no_op, slot=slot)
    dispatcher = difftest.elf_symbols('yuugi')[tasks.DISPATCHER] & 0xFFFFFFFF

    def execute(color, result):
        words = [0x24080000 | color, 0xAC880028, 0x24020000 | result, 0x03E00008, 0]
        blob = b''.join(w.to_bytes(4, 'little') for w in words)
        state, error = difftest.run(dispatcher, {UC_MIPS_REG_SP: difftest.STACK_TOP},
                                   bytes(ram), {no_op: 'noop'}, [(target, blob)],
                                   game_names={'noop'}, required_entries=(target,))
        assert error is None
        registers, memory, calls = state
        normalized = bytearray(memory)
        offset = target & 0x1FFFFFFF
        normalized[offset:offset + len(blob)] = bytes(len(blob))
        assert calls[0].count((f'entry:{target:08X}',)) == 1
        return registers, bytes(normalized), calls

    original, different_return, bad_write = execute(7, 1), execute(7, 99), execute(8, 1)
    assert original == different_return
    assert original[0] == bad_write[0] and original[1] != bad_write[1]


@pytest.mark.parametrize('func', ['func_800B7988', 'func_800F7DE4'])
def test_corrupt_real_callback_is_rejected(tmp_path, func):
    source = (ROOT / 'equiv/chess' / (func + '.c')).read_text(encoding='utf-8')
    assert '/* task-callback */' in source
    if func == 'func_800B7988':
        assert 'param_1+0x60' in source
        changed = source.replace('param_1+0x60', 'param_1+0x5c', 1)
    else:
        changed, count = re.subn(r'(\w+\s*=\s*RotAverage4\s*\()',
                                 r'local_58 ^= 1;\n        \1', source, count=1)
        assert count == 1
    path = tmp_path / (func + '.c')
    path.write_text(changed, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', func,
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout


@pytest.mark.parametrize('func', ['func_800EE0C8', 'func_800EE2D4'])
def test_missing_byte_argument_conversion_is_rejected(tmp_path, func):
    source = (ROOT / 'equiv/chess' / (func + '.c')).read_text(encoding='utf-8')
    call = 'func_800FE0B4((u8)(cVar1 << 7 | cVar2 + 1U),'
    assert call in source
    changed = source.replace(call, 'func_800FE0B4(cVar1 << 7 | cVar2 + 1U,')
    changed = re.sub(r'/\* rand-u16: 0x8013001C 1 [^*]+\*/',
                     '/* rand-u16: 0x8013001C 1 0 */', changed)
    path = tmp_path / (func + '.c')
    path.write_text(changed, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', func,
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and 'func_800FE0B4' in result.stdout


@pytest.mark.parametrize('func,old,new,required', [
    ('func_8009D2AC', 'DAT_8008601c != 255', 'DAT_8008601c != -1', 'func_80020844'),
    ('func_800E4764', '#define UNALIGNED_U32(p) (((UnalignedTaskWord *)(p))->value)',
     '#define UNALIGNED_U32(p) (*(u32 *)(p))', 'UNALIGNED'),
])
def test_unsigned_sentinel_and_unaligned_task_fields_are_observed(tmp_path, func, old, new, required):
    source = (ROOT / 'equiv/chess' / (func + '.c')).read_text(encoding='utf-8')
    assert old in source
    changed = source.replace(old, new)
    if func == 'func_8009D2AC':
        changed += '\n/* rand-u16: 0x8013007A 1 0 */\n/* rand-u16: 0x8008601C 1 255 */\n'
    path = tmp_path / (func + '.c')
    path.write_text(changed, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', func,
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and required in result.stdout
