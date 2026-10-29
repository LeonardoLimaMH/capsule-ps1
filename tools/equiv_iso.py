#!/usr/bin/env python3
"""Imagem de disco jogável com o C equivalente (equiv/) no lugar do assembly.

Cada função ainda em assembly que tem C validado em equiv/ é compilada como no teste
diferencial (tools/difftest.py, build_candidate) e ligada no ENDEREÇO DA PRÓPRIA FUNÇÃO.
Se o código (com .rodata, .data e .bss) couber no espaço da original, os bytes são gravados
por cima dela nos binários reconstruídos (build/*.exe, idênticos aos do disco). O resto do
layout não muda: overlays, tabelas, ponteiros e dados continuam nos mesmos endereços, e os
arquivos mantêm o tamanho. Quando a função não é a primeira coisa do bloco compilado
(funções auxiliares), o endereço original recebe um salto para ela. A função que não
couber continua em assembly (relatório).

Os arquivos modificados são regravados numa cópia da imagem BIN (MODE2/2352), setor a
setor, com EDC/ECC recalculados (o cálculo é conferido antes nos setores originais).

Uso (no container, com a pasta da imagem montada em /img):
  equiv_iso.py --bin /img/<jogo>.bin --out build/equiv_iso [alvos...] [--only f1,f2] [--skip f1,f2]
Saída: build/equiv_iso/<jogo> (C equivalente).bin/.cue e relatório report.txt.
"""
import argparse
import contextlib
import io
import pathlib
import re
import shutil
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import difftest  # noqa: E402

ROOT = pathlib.Path(__file__).resolve().parent.parent
SECTOR = 2352
TARGETS = ("yuugi", "slpm", "chess", "raise", "etc")
DISC = {"yuugi": "YUUGI.EXE", "slpm": "SLPM_860.96", "chess": "MASTER/PSF/CHESS.BIN",
        "raise": "MASTER/PSF/RAISE.BIN", "etc": "MASTER/PSF/ETC.BIN"}
INCLUDE = re.compile(r'INCLUDE_ASM\("[^"]*",\s*(\w+)\)')


# ---------------------------------------------------------------- EDC/ECC (CD-ROM modo 2 forma 1)
def _edc_table():
    t = []
    for i in range(256):
        e = i
        for _ in range(8):
            e = (e >> 1) ^ (0xD8018001 if e & 1 else 0)
        t.append(e)
    return t


EDC = _edc_table()
F_LUT = [((i << 1) ^ (0x11D if i & 0x80 else 0)) & 0xFF for i in range(256)]
B_LUT = [0] * 256
for _i in range(256):
    B_LUT[_i ^ F_LUT[_i]] = _i


def edc(data):
    e = 0
    for b in data:
        e = (e >> 8) ^ EDC[(e ^ b) & 0xFF]
    return e


def _ecc_block(buf, major_count, minor_count, major_mult, minor_inc, dest):
    size = major_count * minor_count
    for major in range(major_count):
        index = (major >> 1) * major_mult + (major & 1)
        a = b = 0
        for _ in range(minor_count):
            t = buf[0xC + index]
            index += minor_inc
            if index >= size:
                index -= size
            a ^= t
            b ^= t
            a = F_LUT[a]
        a = B_LUT[F_LUT[a] ^ b]
        buf[dest + major] = a
        buf[dest + major + major_count] = a ^ b


def fix_sector(raw):
    """EDC e ECC de um setor modo 2 forma 1 (o endereço entra zerado no ECC)."""
    s = bytearray(raw)
    s[0x818:0x81C] = edc(s[0x10:0x818]).to_bytes(4, "little")
    head = bytes(s[0xC:0x10])
    s[0xC:0x10] = b"\0\0\0\0"
    _ecc_block(s, 86, 24, 2, 86, 0x81C)
    _ecc_block(s, 52, 43, 86, 88, 0x8C8)
    s[0xC:0x10] = head
    return bytes(s)


# ---------------------------------------------------------------- substituição das funções
def code_segment(target):
    y = (ROOT / "config" / f"{target}.yaml").read_text(encoding="utf-8")
    seg = re.search(r"type: code\s+start: (0x[0-9A-Fa-f]+)\s+vram: (0x[0-9A-Fa-f]+)", y)
    return int(seg.group(1), 16), int(seg.group(2), 16)


def asm_info(target, func):
    for p in (ROOT / "asm" / target / "nonmatchings").rglob(f"{func}.s"):
        t = p.read_text(encoding="utf-8", errors="replace")
        size = int(re.search(r"nonmatching\s+\S+,\s*(0x[0-9A-Fa-f]+)", t).group(1), 16)
        addr = int(re.search(r"/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/", t).group(1), 16)
        return addr, size
    return None


def _build(target, func, src, base, g0):
    difftest.CAND_BASE = base
    with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
        blob, entry, _ = difftest.build_candidate(target, str(src), func, force_g0=g0)
    return blob, entry


def build_at(target, func, src, addr, size):
    """compila o C ligado em addr, do menor jeito que funcionar: primeiro como o build
    (-G8: globais pequenos via $gp, como o original), depois -G0 (o modo do teste). Se a
    função não for a primeira coisa do bloco (funções auxiliares, preenchimento), liga em
    addr + 8 e põe "j função; nop" em addr. Devolve o menor resultado obtido."""
    best = None
    for g0 in (False, True):
        try:
            blob, entry = _build(target, func, src, addr, g0)
            if entry != addr:
                blob, entry = _build(target, func, src, addr + 8, g0)
                blob = ((0x02 << 26) | ((entry >> 2) & 0x3FFFFFF)).to_bytes(4, "little") + bytes(4) + blob
        except (SystemExit, Exception):  # noqa: BLE001
            continue
        if best is None or len(blob) < len(best):
            best = blob
        if len(best) <= size:
            break
    if best is None:
        raise ValueError("não compilou")
    return best


def candidates(target, only=None, skip=()):
    for c in sorted((ROOT / "src" / target).rglob("*.c")):
        for func in INCLUDE.findall(c.read_text(encoding="utf-8")):
            if only and func not in only:
                continue
            if func in skip:
                continue
            src = ROOT / "equiv" / target / f"{func}.c"
            if src.exists():
                yield func, src


def jump(to):
    return ((0x02 << 26) | ((to >> 2) & 0x3FFFFFF)).to_bytes(4, "little") + bytes(4)


def patch_target(target, report, only=None, skip=()):
    """1º passe: cada função no próprio espaço; as que ficam menores deixam sobras.
    2º passe: as que não cabem vão para a maior sobra que as comporte (o endereço original
    recebe "j novo; nop"), das maiores para as menores."""
    data = bytearray((ROOT / "build" / f"{target}.exe").read_bytes())
    start, vram = code_segment(target)
    done, big, gaps = 0, [], []

    def put(addr, blob):
        off = addr - vram + start
        data[off:off + len(blob)] = blob

    for func, src in candidates(target, only, skip):
        info = asm_info(target, func)
        if info is None:
            report.append(f"{target}:{func}: asm não encontrado")
            continue
        addr, size = info
        try:
            blob = build_at(target, func, src, addr, size)
        except (SystemExit, Exception) as e:  # noqa: BLE001
            report.append(f"{target}:{func}: não compilou ({str(e).splitlines()[-1][:100]})")
            continue
        if len(blob) > size:
            big.append((len(blob), func, src, addr, size))
            continue
        put(addr, blob)
        done += 1
        free = (addr + len(blob) + 3) & ~3
        if addr + size - free >= 16:
            gaps.append([free, addr + size - free])
    moved = 0
    for need, func, src, addr, size in sorted(big, reverse=True):
        gaps.sort(key=lambda g: g[1])
        slot = next((g for g in gaps if g[1] >= need + 8), None)
        if slot is None:
            report.append(f"{target}:{func}: não cabe ({need:#x} > {size:#x} bytes) e não há sobra, fica em assembly")
            continue
        try:
            blob = build_at(target, func, src, slot[0], slot[1])
        except (SystemExit, Exception):  # noqa: BLE001
            report.append(f"{target}:{func}: não compilou na sobra, fica em assembly")
            continue
        if len(blob) > slot[1]:
            report.append(f"{target}:{func}: não coube na sobra, fica em assembly")
            continue
        put(slot[0], blob)
        put(addr, jump(slot[0]))
        report.append(f"{target}:{func}: movida para {slot[0]:#x} (sobra de outra função)")
        used = (len(blob) + 3) & ~3
        slot[0] += used
        slot[1] -= used
        if size - 8 >= 16:
            gaps.append([addr + 8, size - 8])  # o espaço original (fora o salto) fica livre
        done += 1
        moved += 1
    report.append(f"== {target}: {done} funções em C equivalente ({moved} movidas para sobras)")
    return bytes(data), done


# ---------------------------------------------------------------- disco
def file_lba(path):
    for line in (ROOT / "config" / "disc_files.txt").read_text(encoding="utf-8").splitlines():
        p = line.split()
        if p and not line.startswith("#") and p[0] == path:
            return int(p[1]), int(p[2])
    raise KeyError(path)


def write_file(img, path, content):
    lba, size = file_lba(path)
    if len(content) != size:
        raise ValueError(f"{path}: tamanho mudou ({len(content)} != {size})")
    for k in range(0, size, 2048):
        img.seek((lba + k // 2048) * SECTOR)
        raw = bytearray(img.read(SECTOR))
        if raw[18] & 0x20:
            raise ValueError(f"{path}: setor forma 2 inesperado")
        chunk = content[k:k + 2048]
        raw[24:24 + len(chunk)] = chunk
        img.seek((lba + k // 2048) * SECTOR)
        img.write(fix_sector(raw))


def selftest(binpath):
    """o cálculo de EDC/ECC reproduz os setores do executável original?"""
    lba, _ = file_lba("YUUGI.EXE")
    with open(binpath, "rb") as f:
        for k in range(8):
            f.seek((lba + k) * SECTOR)
            raw = f.read(SECTOR)
            if fix_sector(raw) != raw:
                sys.exit(f"EDC/ECC não reproduz o setor {lba + k}: abortando")
    print("EDC/ECC conferido em 8 setores originais")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("targets", nargs="*", default=list(TARGETS))
    ap.add_argument("--bin", required=True)
    ap.add_argument("--out", default="build/equiv_iso")
    ap.add_argument("--only", default="")
    ap.add_argument("--skip", default="")
    a = ap.parse_args()
    only = set(a.only.split(",")) if a.only else None
    skip = set(a.skip.split(",")) if a.skip else set()
    selftest(a.bin)
    out = ROOT / a.out
    out.mkdir(parents=True, exist_ok=True)
    stem = pathlib.Path(a.bin).stem + " (C equivalente)"
    dst = out / f"{stem}.bin"
    shutil.copyfile(a.bin, dst)
    report, total = [], 0
    with open(dst, "r+b") as img:
        for t in a.targets:
            content, n = patch_target(t, report, only, skip)
            total += n
            write_file(img, DISC[t], content)
            print(f"{t}: {n} funções substituídas", flush=True)
    cue = pathlib.Path(a.bin).with_suffix(".cue")
    text = cue.read_text(encoding="utf-8", errors="replace") if cue.exists() else \
        'FILE "x.bin" BINARY\n  TRACK 01 MODE2/2352\n    INDEX 01 00:00:00\n'
    text = re.sub(r'FILE "[^"]+"', f'FILE "{dst.name}"', text, count=1)
    (out / f"{stem}.cue").write_text(text, encoding="utf-8")
    (out / "report.txt").write_text("\n".join(report) + f"\n\ntotal: {total} funções em C\n", encoding="utf-8")
    print(f"total: {total} funções em C; imagem em {dst.relative_to(ROOT)}; relatório em {a.out}/report.txt")


if __name__ == "__main__":
    main()
