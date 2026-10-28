"""Initialized sprite fixtures must expose an incorrect GPU color write."""
import subprocess
import sys

import pytest

from conftest import ROOT


@pytest.mark.parametrize('func', ['func_800AADE0', 'func_800ABD9C'])
def test_wrong_sprite_color_is_rejected(tmp_path, func):
    source = (ROOT / 'equiv/chess' / (func + '.c')).read_text(encoding='utf-8')
    write = '*(byte *)(puVar28 + 1) = bVar7;'
    assert write in source
    bad = source.replace(write, '*(byte *)(puVar28 + 1) = bVar7 ^ 1;', 1)
    path = tmp_path / (func + '.c')
    path.write_text(bad, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', func,
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and 'RAM difere' in result.stdout
