"""Testes diferenciais: cada função decompilada é executada (emulação R3000)
contra a original com entradas aleatórias; registradores, RAM e chamadas ao
SDK precisam ser idênticos. Ver tools/difftest.py."""
import subprocess
import sys

import pytest

from conftest import ROOT, decompiled_functions

TRIALS = "60"


def difftest(*args):
    return subprocess.run([sys.executable, "tools/difftest.py", *args],
                          cwd=ROOT, capture_output=True, text=True)


@pytest.mark.parametrize("target,func", decompiled_functions())
def test_function_is_equivalent(target, func):
    r = difftest(target, func, "--trials", TRIALS)
    if r.returncode == 2:
        pytest.skip(r.stdout.strip())
    assert r.returncode == 0, r.stdout + r.stderr


def test_harness_detects_divergence():
    """Guarda do próprio harness: uma versão errada (srand(2) no lugar de
    srand(1)) precisa ser reprovada."""
    r = difftest("yuugi", "func_800118BC", "--trials", "10",
                 "--src", "tests/fixtures/neg_func_800118BC.c")
    assert r.returncode == 1, r.stdout + r.stderr
    assert "DIVERGENTE" in r.stdout
