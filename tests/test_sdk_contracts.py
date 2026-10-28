"""SDK buffer models compare content/aliases and preserve writes and boundaries."""
import struct
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import difftest
import sdk_contracts as sdk


def execute(vector=0x801FFE00, outputs=(0x801FFE20, 0x801FFE24, 0x801FFE28), values=(1, -2, 300), salt=17):
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(0, 0x200000)
    uc.mem_write(vector & 0x1FFFFFFF, struct.pack('<hhhH', *values, 0xAAAA))
    for pointer in set(outputs):
        offset = pointer & 0x1FFFFFFF
        if 4 <= offset <= 0x200000 - 8:
            uc.mem_write(offset - 4, b'\xA5' * 12)
    event, result = sdk.execute('RotTransPers', uc, (vector, *outputs), {}, 1, salt)
    return uc, event, result


def test_stack_layout_can_differ_but_coordinates_and_output_aliases_cannot():
    _, a, r0 = execute()
    _, b, r1 = execute(0x801FFD00, (0x801FFD40, 0x801FFD50, 0x801FFD60))
    assert a == b and r0 == r1
    _, changed, _ = execute(values=(1, -2, 301))
    _, overlapping, _ = execute(outputs=(0x801FFE20, 0x801FFE20, 0x801FFE28))
    for bad in [changed, overlapping]:
        # Contract fields after argument four must also be checked, without the
        # ordinary arity/string/callback-address relaxations.
        left = ([a], [(None,) * (len(a) - 1)])
        right = ([bad], [(None,) * (len(bad) - 1)])
        assert difftest.same_calls(left, right, 0x80180000, 0x80190000, True) == (False, 0)


def test_outputs_are_written_without_touching_adjacent_bytes():
    outputs = (0x801FFE40, 0x801FFE50, 0x801FFE60)
    uc, _, value = execute(outputs=outputs)
    assert 0 <= value <= 0x3FFF
    for pointer in outputs:
        data = bytes(uc.mem_read((pointer & 0x1FFFFFFF) - 4, 12))
        assert data[:4] == b'\xA5' * 4 and data[8:] == b'\xA5' * 4
        assert data[4:8] != b'\xA5' * 4


@pytest.mark.parametrize('pointer', [0x801FFE21, 0x80200000])
def test_invalid_output_buffers_are_rejected(pointer):
    with pytest.raises(ValueError):
        execute(outputs=(pointer, 0x801FFE24, 0x801FFE28))


def test_matrix_bytes_are_observed_and_affect_later_projections():
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(0, 0x200000)
    pointer, vector = 0x801FFE00, 0x801FFD00
    uc.mem_write(pointer & 0x1FFFFFFF, bytes(range(32)))
    uc.mem_write(vector & 0x1FFFFFFF, struct.pack('<4h', 1, 2, 3, 0))
    state = {}
    before = sdk.execute('RotTransPers', uc, (vector, 0x801FFC00, 0x801FFC10, 0x801FFC20), state, 1, 5)[1]
    event, _ = sdk.execute('SetRotMatrix', uc, (pointer,), state, 2, 5)
    assert event[2:] == struct.unpack('<9H', bytes(range(18)))
    after = sdk.execute('RotTransPers', uc, (vector, 0x801FFC00, 0x801FFC10, 0x801FFC20), state, 1, 5)[1]
    assert before != after
