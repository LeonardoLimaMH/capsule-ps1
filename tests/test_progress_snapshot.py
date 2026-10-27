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
    assert result['pending_funcs'] == 1
    assert result['equiv_funcs'] == 0
    subprocess.run(['git', 'add', 'equiv'], cwd=tmp_path, check=True)
    progress.staged_files.cache_clear()
    result = progress.collect('chess')['game']
    assert result['equiv_bytes'] == 8
    assert result['equiv_funcs'] == 1
    assert result['pending_funcs'] == 0
    subprocess.run(['git', 'add', 'src'], cwd=tmp_path, check=True)
    progress.staged_files.cache_clear()
    result = progress.collect('chess')['game']
    assert result['done_bytes'] == 8
    assert result['done_funcs'] == 1
    assert result['equiv_funcs'] == 0  # equiv/ copy does not count twice
    assert result['pending_funcs'] == 0
    progress.staged_files.cache_clear()


def test_functional_table_distinguishes_bytes_function_counts_and_original_assembly(tmp_path, monkeypatch):
    monkeypatch.setattr(progress, 'ROOT', tmp_path)
    monkeypatch.setattr(progress, 'STAGED', False)
    monkeypatch.setattr(progress, 'TARGETS', [('chess', 'CHESS.BIN', 'battle')])
    monkeypatch.setattr(progress, 'function_sizes', lambda target: {'exact': 4, 'equivalent': 12, 'remaining': 20, 'hand': 8})
    monkeypatch.setattr(progress, 'psyq_names', lambda target: set())
    monkeypatch.setattr(progress, 'handwritten', lambda target: {'hand'})
    src = tmp_path / 'src/chess/a.c'
    src.parent.mkdir(parents=True)
    src.write_text('\n'.join('INCLUDE_ASM("asm/a", ' + f + ');' for f in ['equivalent', 'remaining', 'hand']))
    equiv = tmp_path / 'equiv/chess'
    equiv.mkdir(parents=True)
    for name in ['equivalent', 'exact', 'not_in_binary']:
        (equiv / (name + '.c')).write_text('/* accepted C */')
    counts = progress.collect('chess')
    assert counts['game']['asm_funcs'] == 1
    assert counts['game']['pending_funcs'] == 2
    table = '\n'.join(progress.functional_table({'chess': counts}, counts))
    assert '27.27% (1 fn)' in table  # 12 equivalent bytes of 44
    assert '**36.36%**' in table     # 16 functional bytes of 44
    assert '2 / 4 (50.00%) | **2**' in table


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
