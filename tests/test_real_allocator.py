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


def test_copied_color_padding_is_also_observed(tmp_path):
    source = (ROOT / 'equiv/chess/func_800F3BB4.c').read_text(encoding='utf-8')
    assert '/* compiler: 2.8.1-psx */' in source and 'bytes[0x30]' in source
    # RGB is unchanged, but the wider frame changes the uninitialized fourth
    # byte copied by the original task constructor. It is still observable RAM.
    path = tmp_path / 'changed_color_padding.c'
    path.write_text(source.replace('bytes[0x30]', 'bytes[0x38]'), encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800F3BB4',
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and 'RAM difere' in result.stdout
