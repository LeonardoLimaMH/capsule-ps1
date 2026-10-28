"""Different device transactions must not pass with equal CPU registers and RAM."""
import sys

import pytest
from unicorn.mips_const import UC_MIPS_REG_SP

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest


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
