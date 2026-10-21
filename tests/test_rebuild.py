"""O build precisa reproduzir byte a byte os 5 binários originais."""
import hashlib

import pytest

from conftest import ROOT, TARGETS


@pytest.mark.parametrize("target", list(TARGETS))
def test_rebuild_is_byte_identical(target):
    built = ROOT / "build" / f"{target}.exe"
    if not built.exists():
        pytest.skip("rode `make` antes dos testes")
    a, b = built.read_bytes(), (ROOT / TARGETS[target]).read_bytes()
    assert len(a) == len(b), f"tamanho {len(a):#x} != {len(b):#x}"
    assert hashlib.sha1(a).hexdigest() == hashlib.sha1(b).hexdigest()
