"""Only the o32 register-argument home area belongs to the callee."""
import subprocess
import sys

import pytest

from conftest import ROOT


@pytest.mark.parametrize('address,expected', [(0x801FFF04, 0), (0x801FFF10, 1), (0x80170000, 1)])
def test_argument_home_boundary_preserves_caller_and_heap_checks(tmp_path, address, expected):
    # Same counter update as func_800AED34, plus a compiler-like parameter spill.
    # Moving that spill past the 16-byte home area must become a divergence.
    source = tmp_path / 'counter.c'
    source.write_text('#include "common.h"\n'
                      'void func_800AED34(void) {\n'
                      f'    *(volatile u32 *)0x{address:08X} = 0x12345678;\n'
                      '    ++*(u16 *)0x8008EE50;\n}\n')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800AED34',
                             '--src', str(source), '--abi', '--isolate', '--ignore-v0', '--trials', '60'],
                            cwd=ROOT, capture_output=True, text=True, timeout=60)
    assert result.returncode == expected, result.stdout + result.stderr
    assert ('EQUIVALENTE' if expected == 0 else 'DIVERGENTE') in result.stdout
