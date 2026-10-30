"""Different device transactions must not pass with equal CPU registers and RAM."""
import sys

import pytest
from unicorn.mips_const import UC_MIPS_REG_SP

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest


def test_changed_gte_state_is_rejected_even_with_equal_cpu_registers_and_ram():
    ram = bytearray(difftest.RAM_SIZE)
    patches = []
    for offset, value in [(0x10000, 1), (0x12000, 2)]:
        # Write VXY0 through COP2, then clear the temporary CPU register.
        words = [0x24080000 | value, 0x48880000, 0x24080000, 0x03E00008, 0]
        blob = b''.join(w.to_bytes(4, 'little') for w in words)
        ram[offset:offset + len(blob)] = blob
        patches.append((0x80000000 | offset, blob))
    regs = {UC_MIPS_REG_SP: difftest.STACK_TOP}
    guard = tuple((address, address + len(blob)) for address, blob in patches)
    left, err_left = difftest.run(0x80010000, regs, bytes(ram), {}, patches, guard=guard)
    right, err_right = difftest.run(0x80012000, regs, bytes(ram), {}, patches, guard=guard)
    assert err_left is None and err_right is None
    assert left[:2] == right[:2]
    assert left[2][0][-1][0] == right[2][0][-1][0] == 'io:gte'
    assert not difftest.same_calls(left[2], right[2], 0x80180000, 0x80190000, True)[0]


@pytest.mark.parametrize('kind', ['value', 'width', 'read-count'])
def test_io_differences_are_observed_outside_main_ram(kind):
    def program(value=0x1234, store=0xAD090000, reads=2):
        return [0x3C081F80, 0x35081100, 0x24090000 | value, store] + [0x8D020000] * reads + [0x24020000, 0x03E00008, 0]

    original = program()
    changed = (program(value=0x1235) if kind == 'value' else
               program(store=0xA5090000) if kind == 'width' else program(reads=1))
    ram = bytearray(difftest.RAM_SIZE)
    for offset, words in [(0x10000, original), (0x12000, changed)]:
        blob = b''.join(w.to_bytes(4, 'little') for w in words)
        ram[offset:offset + len(blob)] = blob
    regs = {UC_MIPS_REG_SP: difftest.STACK_TOP}
    left, error = difftest.run(0x80010000, regs, bytes(ram), {}, [])
    assert error is None
    right, error = difftest.run(0x80012000, regs, bytes(ram), {}, [])
    assert error is None
    assert left[:2] == right[:2]  # all returned registers and the entire main RAM
    assert left[2][0][0] == ('io:W', 0x1F801100, 4, 0x1234)
    assert difftest.same_calls(left[2], right[2], 0x80180000, 0x80190000, True)[0] is False


def test_move_image_compares_rect_contents_across_stack_locations():
    rect = bytes.fromhex('c003800120008000')
    original = ([('MoveImage', 0x801FFEE8, 320, 0, 0)], [(rect, None, None, None)])
    relocated = ([('MoveImage', 0x801FFEE0, 320, 0, 0)], [(rect, None, None, None)])
    assert difftest.same_calls(original, relocated, 0x80180000, 0x80190000, True)[0]

    changed = ([('MoveImage', 0x801FFEE8, 320, 0, 0)], [(bytes.fromhex('c003800120000000'), None, None, None)])
    assert not difftest.same_calls(original, changed, 0x80180000, 0x80190000, True)[0]
