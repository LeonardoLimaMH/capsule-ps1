"""Validação dos overlays (CHESS/RAISE/ETC.BIN) e dos dados carregados pelo jogo.

Além do rebuild byte a byte (test_rebuild.py), confere:
  - o disco extraído contra o catálogo versionado (config/disc_files.txt);
  - a tabela de carga do jogo: cada uma das 400 entradas aponta para um arquivo
    real do disco (LBA e tamanho), incluindo os três overlays;
  - o endereço em que o código dos overlays foi ligado (0x80097800), pela
    estatística de chamadas internas que caem em prólogos de função, e o código
    do executável que troca o destino da tabela (0x80098000) por essa base
    antes de cada carga (func_8001A480);
  - as dependências: toda chamada (jal) de um overlay tem como alvo uma função
    conhecida do próprio overlay ou do executável principal.
"""
import pathlib
import re
import struct
import subprocess
import sys

import pytest

from conftest import ROOT

sys.path.insert(0, str(ROOT / "tools"))
import disc_catalog  # noqa: E402

OVERLAYS = {"chess": "MASTER/PSF/CHESS.BIN", "raise": "MASTER/PSF/RAISE.BIN", "etc": "MASTER/PSF/ETC.BIN"}
LINK_BASE = 0x80097800
MAIN_TEXT = (0x80011820, 0x80050894)


def need(path):
    if not (ROOT / path).exists():
        pytest.skip(f"{path} ausente (extraia o disco e rode make)")


def test_disc_matches_catalog():
    need("disc/YUUGI.EXE")
    r = subprocess.run([sys.executable, "tools/disc_catalog.py", "--check"], cwd=ROOT,
                       capture_output=True, text=True)
    assert r.returncode == 0, r.stdout


def test_load_table_points_to_disc_files():
    need("disc/YUUGI.EXE")
    cat = disc_catalog.parse_catalog()
    by_lba = {(e["lba"], e["size"]): p for p, e in cat.items()}
    table = disc_catalog.load_table()
    assert len(table) == 400
    missing = [(i, lba, size) for i, (dest, size, lba, mode) in enumerate(table) if (lba, size) not in by_lba]
    assert not missing, f"entradas sem arquivo correspondente: {missing[:5]}"


def test_index_11_points_to_block2_records():
    """A tabela-índice dos tipos 0x11/0x12 aponta para registros do bloco 2."""
    need("disc/YUUGI.EXE")
    start, n = disc_catalog.TABLE_BLOCKS[1]
    ptrs = [p for p, _ in disc_catalog.load_index_11() if p]
    assert ptrs, "tabela-índice vazia"
    assert all(start <= p < start + 16 * n and (p - start) % 16 == 0 for p in ptrs)
    # os três overlays são alcançáveis pela tabela-índice
    cat = disc_catalog.parse_catalog()
    reach = {start + 16 * (i - disc_catalog.TABLE_BLOCKS[0][1]) for p, e in cat.items()
             if e["role"] == "overlay" for i, _ in e["table"]}
    assert reach <= set(ptrs)


@pytest.mark.parametrize("target", list(OVERLAYS))
def test_overlay_in_load_table(target):
    need("disc/YUUGI.EXE")
    e = disc_catalog.parse_catalog()[OVERLAYS[target]]
    assert e["role"] == "overlay"
    # destino inicial da tabela; o jogo o sobrescreve antes de carregar (test_overlay_dest_override)
    assert [d for _, d in e["table"]] == [0x80098000]


def _jal_prologue_ratio(data, base):
    n = len(data) // 4
    w = struct.unpack_from(f"<{n}I", data)
    starts = {i * 4 for i in range(n) if (w[i] & 0xFFFF8000) == 0x27BD8000}
    targets = [((x & 0x3FFFFFF) << 2) | 0x80000000 for x in w if (x >> 26) == 3]
    inside = [t for t in targets if base <= t < base + len(data)]
    return sum((t - base) in starts for t in inside) / max(1, len(inside))


@pytest.mark.parametrize("target", list(OVERLAYS))
def test_overlay_link_base(target):
    need(f"disc/{OVERLAYS[target]}")
    data = (ROOT / "disc" / OVERLAYS[target]).read_bytes()
    assert _jal_prologue_ratio(data, LINK_BASE) >= 0.40
    assert _jal_prologue_ratio(data, LINK_BASE + 0x800) <= 0.05


OVERLAY_INDEX = {"chess": 2, "raise": 3, "etc": 4}  # posição em D_800700E4 (tipo 0x11)
SET_DEST = 0x8001A480  # func_8001A480(i, destino): D_800700E4[i].registro->destino = destino


def _set_dest_calls():
    """(índice, destino) de cada `func_8001A480(imediato, imediato)` em YUUGI.EXE."""
    y = (ROOT / "disc" / "YUUGI.EXE").read_bytes()
    w = struct.unpack_from(f"<{len(y) // 4}I", y)
    jal = 0x0C000000 | ((SET_DEST >> 2) & 0x3FFFFFF)
    out = []
    for i, x in enumerate(w):
        if x != jal:
            continue
        seg = w[i - 3:i + 2]  # argumentos montados antes do jal e no delay slot
        a0 = [s & 0xFFFF for s in seg if s >> 16 == 0x2404]   # addiu $a0, $zero, imm
        hi = [s & 0xFFFF for s in seg if s >> 16 == 0x3C05]   # lui $a1, imm
        lo = [s & 0xFFFF for s in seg if s >> 16 == 0x34A5]   # ori $a1, $a1, imm
        out.append((a0[-1] if a0 else None, (hi[0] << 16 | lo[0]) if hi and lo else None))
    return out


@pytest.mark.parametrize("target", list(OVERLAYS))
def test_overlay_dest_override(target):
    """O jogo carrega cada overlay na base de ligação, não no destino da tabela."""
    need("disc/YUUGI.EXE")
    calls = _set_dest_calls()
    assert calls and all(d == LINK_BASE for _, d in calls)
    assert OVERLAY_INDEX[target] in {i for i, _ in calls}
    rec = disc_catalog.load_index_11()[OVERLAY_INDEX[target]][0]
    start, _ = disc_catalog.TABLE_BLOCKS[1]
    e = disc_catalog.parse_catalog()[OVERLAYS[target]]
    assert [start + 16 * (i - disc_catalog.TABLE_BLOCKS[0][1]) for i, _ in e["table"]] == [rec]


def _functions(mapfile):
    out = {}
    for l in (ROOT / mapfile).read_text(encoding="utf-8").splitlines():
        m = re.match(r"^\s+0x([0-9a-f]{8})\s+([A-Za-z_]\w*)\s*$", l)
        if m:
            out[m.group(2)] = int(m.group(1), 16)
    return out


@pytest.mark.parametrize("target", list(OVERLAYS))
def test_overlay_calls_resolve(target):
    need(f"build/{target}.map")
    need(f".cache/fullasm/{target}")
    own = _functions(f"build/{target}.map")
    main = _functions("build/yuugi.map")
    main_addrs = set(main.values())
    ext = {}
    auto = ROOT / "config" / f"undefined_funcs_auto.{target}.txt"
    for l in auto.read_text(encoding="utf-8").splitlines():
        m = re.match(r"(\w+)\s*=\s*(0x[0-9A-Fa-f]+);", l)
        if m:
            ext[m.group(1)] = int(m.group(2), 16)
    bad = []
    for s in (ROOT / ".cache" / "fullasm" / target / "nonmatchings").rglob("*.s"):
        for callee in re.findall(r"\*/\s+jal\s+(\w+)", s.read_text(encoding="utf-8")):
            if callee in own:
                continue
            addr = main.get(callee, ext.get(callee))
            if addr is None or not (MAIN_TEXT[0] <= addr < MAIN_TEXT[1]) or addr not in main_addrs:
                bad.append(f"{s.stem} -> {callee}")
    assert not bad, f"{len(bad)} chamadas sem função conhecida: {bad[:8]}"
