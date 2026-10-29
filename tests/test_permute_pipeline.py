"""Keep permuter candidates on the same compiler pipeline as byte-matching."""
import pathlib
import shlex
import subprocess
import sys

import pytest

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / 'tools'))
import match
import permute


def test_implicit_calls_preserve_declared_functions_and_callbacks():
    source = '''
extern long known(int);
int recovered(int (*callback)(int), int value) {
    int (*local)(int) = callback;
    return missing(known(value)) + callback(value) + local(value);
}
'''
    prepared = permute.declare_implicit_calls(source)
    assert prepared == 'extern int missing();\n' + source
    assert permute.declare_implicit_calls(prepared) == prepared


@pytest.mark.parametrize('gcc,fill', [('2.7.2-psx', False), ('2.8.1-psx', True)])
def test_permuter_pipeline_matches_compiler_and_relocations(tmp_path, gcc, fill):
    source = tmp_path / 'candidate with spaces.c'
    source.write_text('''#include "common.h"
extern u32 values[];
s32 recovered(s32 index) {
    return helper(values[index], 1, 1);
}
''')
    baseline = tmp_path / 'baseline.c'
    baseline.write_bytes(source.read_bytes())
    expected = match.compiled(match.compile_c(baseline, gcc, '-O2 -G8', fill, 'raise'),
                              'recovered')
    pre = subprocess.run(['mips-linux-gnu-cpp', *shlex.split(match.CPP_FLAGS),
                          '-P', '-DPERMUTER', str(source)], cwd=ROOT,
                         capture_output=True, text=True, check=True).stdout
    source.write_text(permute.declare_implicit_calls(pre))
    script = tmp_path / 'compile.sh'
    script.write_text(permute.compile_script('raise', gcc, fill))
    output = tmp_path / 'candidate with spaces.o'
    result = subprocess.run(['bash', str(script), str(source), '-o', str(output)],
                            cwd=tmp_path, capture_output=True, text=True)
    assert result.returncode == 0, result.stderr
    output = output.rename(tmp_path / 'candidate.o')
    assert match.compiled(output, 'recovered') == expected
