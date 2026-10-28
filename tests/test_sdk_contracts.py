"""SDK buffer models compare content/aliases and preserve writes and boundaries."""
import struct
import sys

import pytest
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_LITTLE_ENDIAN, UC_MODE_MIPS32
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                               UC_MIPS_REG_A3, UC_MIPS_REG_SP)

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


def projection4(base=0x801FFD00, alias_fourth_input=False):
    uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_LITTLE_ENDIAN)
    uc.mem_map(0, 0x200000)
    inputs = tuple(base + i * 8 for i in range(4))
    outputs = tuple(base + 0x40 + i * 8 for i in range(6))
    if alias_fourth_input:
        outputs = (inputs[3],) + outputs[1:]
    for i, pointer in enumerate(inputs):
        uc.mem_write(pointer & 0x1FFFFFFF, struct.pack('<4H', i + 1, i + 2, i + 3, 0xFFFF))
    for pointer in outputs:
        if pointer not in inputs:
            uc.mem_write((pointer & 0x1FFFFFFF) - 4, b'\xA5' * 12)
    event, result = sdk.execute('RotTransPers4', uc, inputs + outputs, {}, 1, 17)
    return uc, inputs, outputs, event, result


def test_four_vectors_compare_stack_arguments_and_write_all_six_outputs():
    uc, _, outputs, event, result = projection4()
    _, _, _, relocated, other = projection4(0x801FFB00)
    assert event == relocated and result == other
    for pointer in outputs:
        data = bytes(uc.mem_read((pointer & 0x1FFFFFFF) - 4, 12))
        assert data[:4] == data[8:] == b'\xA5' * 4
        assert data[4:8] != b'\xA5' * 4
    # The tenth argument and fourth vector remain visible to the comparison.
    for index in [10, 20]:
        changed = list(event)
        changed[index] ^= 1
        assert difftest.same_calls(([event], [(None,) * (len(event) - 1)]),
                                  ([tuple(changed)], [(None,) * (len(event) - 1)]),
                                  0x80180000, 0x80190000, True) == (False, 0)


def test_fourth_vector_is_read_after_first_three_output_stores():
    uc, inputs, _, event, _ = projection4(alias_fourth_input=True)
    observed_fourth = struct.pack('<3H', *event[20:23])
    assert observed_fourth == bytes(uc.mem_read(inputs[3] & 0x1FFFFFFF, 6))
    assert observed_fourth != struct.pack('<3H', 4, 5, 6)
    with pytest.raises(ValueError):
        sdk.execute('RotTransPers4', uc, inputs, {}, 1, 17)


def test_dispatch_reads_all_six_stack_arguments_without_isolation():
    uc, inputs, outputs, expected, value = projection4()
    ram = bytearray(uc.mem_read(0, difftest.RAM_SIZE))
    # Save RA, call the SDK with six prepared stack arguments, restore and return.
    words = [0x27BDFFD0, 0xAFBF0028, 0x0C004400, 0,
             0x8FBF0028, 0x03E00008, 0x27BD0030]
    ram[0x10000:0x10000 + len(words) * 4] = b''.join(w.to_bytes(4, 'little') for w in words)
    sp = difftest.STACK_TOP - 0x30
    offset = (sp + 0x10) & 0x1FFFFFFF
    ram[offset:offset + 24] = struct.pack('<6I', *outputs)
    regs = dict(zip((UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3), inputs))
    regs[UC_MIPS_REG_SP] = difftest.STACK_TOP
    result, error = difftest.run(0x80010000, regs, bytes(ram), {0x80011000: 'RotTransPers4'},
                                [], salt=17, contracts={'RotTransPers4'})
    assert error is None
    assert result[0][0] == value
    assert result[2][0] == [expected]
