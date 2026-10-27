"""A real allocation must expose corrupt writes in the newly created task."""
import subprocess
import sys

from conftest import ROOT


def test_wrong_task_coordinates_are_detected(tmp_path):
    source = (ROOT / 'equiv/chess/func_800DD428.c').read_text(encoding='utf-8')
    assert '/* real-callee: func_800136C8 */' in source
    assert 'COPY(task+0x28)=COPY(a);' in source
    bad = source.replace('COPY(task+0x28)=COPY(a);', 'COPY(task+0x28)=COPY(b);')
    path = tmp_path / 'bad_task.c'
    path.write_text(bad, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800DD428',
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and 'RAM difere' in result.stdout
