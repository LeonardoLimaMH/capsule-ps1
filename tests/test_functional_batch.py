"""Acceptance must never publish a partial run or overwrite another worker."""
import pathlib
import subprocess
import sys

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import functional_batch as batch
import functional_ghidra as ghidra


def prepare(monkeypatch, tmp_path, count, concurrent=False):
    monkeypatch.setattr(batch, 'ROOT', tmp_path)
    monkeypatch.setattr(batch, 'CACHE', tmp_path / '.cache')
    monkeypatch.setattr(batch.retuse, 'used', lambda *a, **k: True)
    monkeypatch.setattr(batch, 'candidates', lambda *a: [('fixture', 'int sample(void) { return 1; }')])
    dest = tmp_path / 'equiv/chess/sample.c'

    def validate(*args, **kwargs):
        assert not dest.exists(), 'unvalidated draft must stay outside equiv/'
        if concurrent:
            dest.parent.mkdir(parents=True)
            dest.write_text('accepted by another worker\n')
        return subprocess.CompletedProcess([], 0, f'[EQUIVALENTE] chess:sample — {count} tentativas idênticas\n', '')

    monkeypatch.setattr(batch.subprocess, 'run', validate)
    return dest


def test_partial_execution_count_is_not_published(tmp_path, monkeypatch):
    dest = prepare(monkeypatch, tmp_path, 50)
    assert batch.try_function('chess', 'sample')['status'] == 'pending'
    assert not dest.exists()


def test_complete_validation_is_published_atomically(tmp_path, monkeypatch):
    dest = prepare(monkeypatch, tmp_path, 200)
    assert batch.try_function('chess', 'sample')['status'] == 'accepted'
    assert 'return 1' in dest.read_text()


def test_concurrently_accepted_source_is_preserved(tmp_path, monkeypatch):
    dest = prepare(monkeypatch, tmp_path, 200, concurrent=True)
    batch.try_function('chess', 'sample')
    assert dest.read_text() == 'accepted by another worker\n'


def test_global_load_width_uses_interior_address_and_signedness():
    asm = '''
    /* 0 80010000 00000000 */ lui $s1, %hi(D_8008ED68)
    /* 4 80010004 00000000 */ addiu $s1, $s1, %lo(D_8008ED68)
    /* 8 80010008 00000000 */ lhu $v0, 0xEC($s1)
    /* C 8001000C 00000000 */ lh $a0, %lo(D_80069BBE)($v1)
    '''
    widths = ghidra.access_types(asm)
    assert widths[0x8008EE54] == 'u16'
    assert widths[0x80069BBE] == 's16'
