"""A match with original section padding remains a successful match."""
import pathlib
import subprocess
import sys

import pytest

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent / 'tools'))
import profile_sweep


@pytest.mark.parametrize('status', ['MATCH', 'MATCH (+2 nop(s) de preenchimento de seção no original)'])
def test_accepts_matches_with_or_without_section_padding(monkeypatch, status):
    monkeypatch.setattr(profile_sweep.subprocess, 'run', lambda *a, **k:
                        subprocess.CompletedProcess([], 0, f'[{status}] yuugi:f\n', ''))
    assert profile_sweep.try_profile('yuugi', 'f', 'f.c', '2.7.2-psx') == ('MATCH', '')


def test_rejects_failed_process_and_keeps_instruction_difference(monkeypatch):
    monkeypatch.setattr(profile_sweep.subprocess, 'run', lambda *a, **k:
                        subprocess.CompletedProcess([], 1, '[MATCH] yuugi:f\n', ''))
    assert profile_sweep.try_profile('yuugi', 'f', 'f.c', '2.7.2-psx')[0] == 'ERRO'
    monkeypatch.setattr(profile_sweep.subprocess, 'run', lambda *a, **k:
                        subprocess.CompletedProcess([], 1, '[DIFERENTE (2 instruções, 5 vs 5)] yuugi:f\n', ''))
    assert profile_sweep.try_profile('yuugi', 'f', 'f.c', '2.7.2-psx') == (
        'DIFERENTE', '(2 instruções, 5 vs 5)')
