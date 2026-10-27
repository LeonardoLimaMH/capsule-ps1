"""Executing the helper must expose mutated vector data, not waive call checks."""
import pathlib
import re
import subprocess
import sys

from conftest import ROOT


def test_real_helper_detects_wrong_vector_data(tmp_path):
    source = (ROOT / 'equiv/chess/func_800E21D8.c').read_text(encoding='utf-8')
    assert '/* real-callee: func_800FE188 */' in source
    assert '/* real-callee: func_800FEC2C */' in source
    match = re.search(r'(func_800FE188\([^;\n]*,\s*(&?\w+)\);)', source)
    assert match is not None
    # Flip the sign of the produced X coordinate before the real camera helper
    # consumes it. Its writes to global camera state must now differ.
    bad = source[:match.end()] + '\n    ((u16 *)(' + match[2] + '))[0] ^= 0x8000;' + source[match.end():]
    path = tmp_path / 'bad_vector.c'
    path.write_text(bad, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800E21D8',
                             '--src', str(path), '--abi', '--isolate', '--seed', '2', '--trials', '60'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout


def test_unknown_real_helper_is_rejected():
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800E21D8',
                             '--src', 'equiv/chess/func_800E21D8.c', '--abi', '--isolate',
                             '--real-callee', 'missing_helper'], cwd=ROOT, capture_output=True, text=True)
    assert result.returncode == 1
    assert 'missing_helper' in result.stderr
