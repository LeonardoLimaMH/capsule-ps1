"""The fifth and sixth MIPS arguments exercise real board positions."""
import subprocess
import sys

from conftest import ROOT


def test_board_query_uses_stack_arguments_and_rejects_wrong_result(tmp_path):
    original = (ROOT / 'equiv/chess/func_800AFDB0.c').read_text()
    assert '/* arg4: small */' in original
    assert '/* arg5: small */' in original
    assert original.count('return 3;') == 1

    for code, accepted in ((original, True), (original.replace('return 3;', 'return 2;'), False)):
        source = tmp_path / ('correct.c' if accepted else 'wrong.c')
        source.write_text(code)
        result = subprocess.run(
            [sys.executable, 'tools/difftest.py', 'chess', 'func_800AFDB0',
             '--src', str(source), '--abi', '--isolate', '--trials', '50', '--seed', '1'],
            cwd=ROOT, capture_output=True, text=True, timeout=60,
        )
        assert result.returncode == (0 if accepted else 1), result.stdout + result.stderr
        assert ('EQUIVALENTE' if accepted else 'DIVERGENTE') in result.stdout
