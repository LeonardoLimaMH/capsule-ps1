"""SDK buffer observations must expose a wrong coordinate in a real CHESS caller."""
import re
import subprocess
import sys

from conftest import ROOT


def test_changed_animation_coordinate_is_rejected(tmp_path):
    source = (ROOT / 'equiv/chess/func_800F234C.c').read_text(encoding='utf-8')
    call = 'func_800FF0A0(*piVar5,&local_60,0xfffffff6);'
    assert source.count(call) == 1
    bad = source.replace(call, 'local_60 ^= 1;\n      ' + call)
    # Exercise the affected animation case immediately rather than relying on
    # the random state selector to reach it during this negative control.
    bad = re.sub(r'/\* rand-u16: 0x8008EE54 1 [^*]+\*/',
                 '/* rand-u16: 0x8008EE54 1 3 */', bad)
    path = tmp_path / 'bad_projection.c'
    path.write_text(bad, encoding='utf-8')
    result = subprocess.run([sys.executable, 'tools/difftest.py', 'chess', 'func_800F234C',
                             '--src', str(path), '--abi', '--isolate', '--trials', '10'],
                            cwd=ROOT, capture_output=True, text=True, timeout=90)
    assert result.returncode == 1, result.stdout + result.stderr
    assert 'DIVERGENTE' in result.stdout and 'contract:RotTransPers' in result.stdout
