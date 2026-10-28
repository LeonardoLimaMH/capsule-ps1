"""A populated board exercises real random selection and visible cell writes."""
import subprocess
import sys

from conftest import ROOT


def test_strided_board_fixture_catches_wrong_cell_mask(tmp_path):
    original = (ROOT / 'equiv/chess/func_800B8740.c').read_text()
    assert '/* rand-u32-strided: 0x80152000 169 4 0x42,0x82 */' in original
    assert original.count('0xffffffc0') == 1

    for code, accepted in ((original, True), (original.replace('0xffffffc0', '0xffffff80'), False)):
        source = tmp_path / ('correct.c' if accepted else 'wrong.c')
        source.write_text(code)
        result = subprocess.run(
            [sys.executable, 'tools/difftest.py', 'chess', 'func_800B8740',
             '--src', str(source), '--abi', '--isolate', '--ignore-v0',
             '--trials', '50', '--seed', '1'],
            cwd=ROOT, capture_output=True, text=True, timeout=60,
        )
        assert result.returncode == (0 if accepted else 1), result.stdout + result.stderr
        assert ('EQUIVALENTE' if accepted else 'DIVERGENTE') in result.stdout
