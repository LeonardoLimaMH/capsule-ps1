"""Grouped stub dispatch must preserve full states, delays and duplicate points."""
import sys

import pytest
from unicorn.mips_const import (UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2,
                               UC_MIPS_REG_A3, UC_MIPS_REG_SP, UC_MIPS_REG_T1)

from conftest import ROOT, unchanged_gte_event

sys.path.insert(0, str(ROOT / 'tools'))
import difftest


@pytest.mark.parametrize('duplicate_bios', [False, True])
@pytest.mark.parametrize('salt', [None, 1, 12345])
def test_grouped_dispatch_matches_individual_hooks(duplicate_bios, salt):
    ram = bytearray(difftest.RAM_SIZE)
    # Save RA, call a helper and BIOS A0, restore RA and return. Increment a1
    # in the first call's delay slot: the stub must observe the new value.
    words = [0x27BDFFE8, 0xAFBF0010, 0x0C004400, 0x24A50001,
             0x0C000028, 0, 0x8FBF0010, 0x03E00008, 0x27BD0018]
    ram[0x10000:0x10000 + len(words)*4] = b''.join(w.to_bytes(4, 'little') for w in words)
    ram[0x140000:0x140006] = b'probe\0'
    regs = {UC_MIPS_REG_A0: 0x80140000, UC_MIPS_REG_A1: 7,
            UC_MIPS_REG_A2: 3, UC_MIPS_REG_A3: 4, UC_MIPS_REG_SP: difftest.STACK_TOP,
            UC_MIPS_REG_T1: 0x32}
    stubs = {0x80011000: 'helper'}
    if duplicate_bios:
        stubs[0x800000A0] = 'BIOS_A0'
    # Salt exercises integer/pointer returns; no callee arity inference is needed
    # for this artificial helper, so game_names contains an unrelated marker.
    names = frozenset({'isolation-active'})
    args = (0x80010000, regs, bytes(ram), stubs, [], names, (), salt)
    old = difftest.run(*args, group_stubs=False)
    new = difftest.run(*args, group_stubs=True)
    assert new == old  # every returned register, all RAM, calls and string bytes
    result, error = new
    assert error is None
    calls, strings = result[2]
    assert calls[-1] == unchanged_gte_event(regs)
    assert [c[0] for c in calls[:-1]] == ['helper', 'BIOS_A0'] + (['BIOS_A0'] if duplicate_bios else [])
    assert calls[0][1:3] == (0x80140000, 8)
    assert strings[0][0] == b'probe'
