"""Commit progress must ignore unstaged code and untracked drafts."""
import subprocess
import sys

from conftest import ROOT

sys.path.insert(0, str(ROOT / 'tools'))
import progress


def test_staged_progress_excludes_unaccepted_work(tmp_path, monkeypatch):
    subprocess.run(['git', 'init', '-q', str(tmp_path)], check=True)
    src = tmp_path / 'src/chess/a.c'
    src.parent.mkdir(parents=True)
    src.write_text('INCLUDE_ASM("asm/chess/a", func_80010000);\n')
    subprocess.run(['git', 'add', 'src'], cwd=tmp_path, check=True)
    src.write_text('void func_80010000(void) {}\n')  # not staged
    draft = tmp_path / 'equiv/chess/func_80010000.c'
    draft.parent.mkdir(parents=True)
    draft.write_text('void func_80010000(void) {}\n')  # not accepted/staged
    build = tmp_path / 'build'
    build.mkdir()
    (build / 'chess.map').write_text(' .text 0x80010000 0x8 build/src/chess/a.c.o\n'
                                   '                0x80010000 func_80010000\n')
    monkeypatch.setattr(progress, 'ROOT', tmp_path)
    monkeypatch.setattr(progress, 'STAGED', True)
    progress.staged_files.cache_clear()
    result = progress.collect('chess')['game']
    assert result['bytes'] == 8
    assert result['done_bytes'] == 0
    assert result['equiv_bytes'] == 0
    subprocess.run(['git', 'add', 'equiv'], cwd=tmp_path, check=True)
    progress.staged_files.cache_clear()
    assert progress.collect('chess')['game']['equiv_bytes'] == 8
    subprocess.run(['git', 'add', 'src'], cwd=tmp_path, check=True)
    progress.staged_files.cache_clear()
    assert progress.collect('chess')['game']['done_bytes'] == 8
    progress.staged_files.cache_clear()


def test_index_batch_uses_byte_lengths_and_immutable_hashes(tmp_path, monkeypatch):
    subprocess.run(['git', 'init', '-q', str(tmp_path)], check=True)
    first, second = tmp_path / 'a.c', tmp_path / 'b.c'
    first.write_text('/* peça: ♟ */\n', encoding='utf-8')
    second.write_text('/* another blob */\n', encoding='utf-8')
    subprocess.run(['git', 'add', '.'], cwd=tmp_path, check=True)
    monkeypatch.setattr(progress, 'ROOT', tmp_path)
    monkeypatch.setattr(progress, 'STAGED', True)
    progress.staged_files.cache_clear()
    progress.staged_files()  # capture hashes before a concurrent index update
    first.write_text('changed\n', encoding='utf-8')
    subprocess.run(['git', 'add', '.'], cwd=tmp_path, check=True)
    assert progress.source_text(first) == '/* peça: ♟ */\n'
    assert progress.source_text(second) == '/* another blob */\n'
    progress.staged_files.cache_clear()
