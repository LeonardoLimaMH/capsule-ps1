"""Trilha funcional: cada C de equiv/ continua equivalente ao original (difftest --abi)."""
import pathlib
import subprocess

import pytest

from conftest import ROOT

EQUIV = sorted((ROOT / "equiv").glob("*/*.c"))


@pytest.mark.parametrize("src", EQUIV, ids=[f"{p.parent.name}-{p.stem}" for p in EQUIV])
def test_equivalent(src: pathlib.Path):
    r = subprocess.run(["python3", "tools/difftest.py", src.parent.name, src.stem,
                        "--src", str(src.relative_to(ROOT)), "--abi"],
                       cwd=ROOT, capture_output=True, text=True, timeout=900)
    assert r.returncode == 0, r.stdout + r.stderr
