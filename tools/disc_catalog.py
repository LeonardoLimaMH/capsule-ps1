#!/usr/bin/env python3
"""Catálogo dos arquivos do disco e da tabela de carga do jogo.

O YUUGI.EXE contém registros de arquivo que o jogo usa para carregar dados por
setor, sem nomes: cada registro tem 16 bytes {endereço de destino, tamanho,
LBA, modo}. Há dois blocos de registros, alcançados por tabelas-índice de 8
bytes que a rotina de carga func_80019F30 consulta pelo tipo do recurso
((tipo << 16) | índice):
  - bloco 1, 0x8006E994: 373 registros (tipos 0x00-0x10, índice D_8006DDE4);
  - bloco 2, 0x800701C4: 27 registros (tipos 0x11/0x12, índice D_800700E4,
    que fica entre os dois blocos): OVDT0, os overlays CHESS/RAISE/ETC, CHSRF*... Este script decodifica a tabela a
partir do executável ORIGINAL, cruza com o sistema de arquivos ISO9660 e gera
config/disc_files.txt (versionado: só metadados e SHA-1, nenhum conteúdo do
jogo), com o papel de cada arquivo:

  boot      executável indicado pelo SYSTEM.CNF
  codigo    executável principal
  overlay   código carregado em tempo de execução (CHESS/RAISE/ETC.BIN)
  tabela    dado carregado via tabela de carga (destino conhecido)
  dados     arquivo sem entrada na tabela (carregado por outro caminho)
  stream    áudio XA / vídeo STR (lidos por streaming)
  sistema   SYSTEM.CNF

Uso: disc_catalog.py            # grava config/disc_files.txt
     disc_catalog.py --check    # confere o disco extraído contra o catálogo
"""
import json
import pathlib
import struct
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
TABLE_BLOCKS = [(0x8006E994, 373), (0x800701C4, 27)]  # (início, registros)
INDEX_11 = 0x800700E4  # tabela-índice dos tipos 0x11/0x12 (entre os blocos)
EXE_VRAM, EXE_HDR = 0x80010000, 0x800
OVERLAYS = {"MASTER/PSF/CHESS.BIN", "MASTER/PSF/RAISE.BIN", "MASTER/PSF/ETC.BIN"}
CATALOG = ROOT / "config" / "disc_files.txt"


def exe_bytes():
    return (ROOT / "disc" / "YUUGI.EXE").read_bytes()


def load_table():
    """Todos os registros de arquivo (bloco 1 seguido do bloco 2)."""
    exe = exe_bytes()
    out = []
    for vram, n in TABLE_BLOCKS:
        off = vram - EXE_VRAM + EXE_HDR
        out += [struct.unpack_from("<4I", exe, off + 16 * i) for i in range(n)]
    return out


def load_index_11():
    """Tabela-índice dos tipos 0x11/0x12: lista de (ponteiro para registro, segunda palavra)."""
    exe = exe_bytes()
    off = INDEX_11 - EXE_VRAM + EXE_HDR
    end = TABLE_BLOCKS[1][0] - EXE_VRAM + EXE_HDR
    return [struct.unpack_from("<2I", exe, o) for o in range(off, end, 8)]


def build():
    man = json.loads((ROOT / "disc_manifest.json").read_text())
    files = [f for f in man["files"] if not f["dir"]]
    table = load_table()
    by_lba = {}
    for i, (dest, size, lba, mode) in enumerate(table):
        by_lba.setdefault(lba, []).append((i, dest, size, mode))
    lines = ["# Catálogo do disco SLPM-86096 (tools/disc_catalog.py). Só metadados; nenhum conteúdo do jogo.",
             "# caminho  lba  tamanho  sha1  papel  [entradas da tabela de carga: índice@destino]"]
    for f in sorted(files, key=lambda f: f["lba"]):
        p = f["path"]
        ents = [e for e in by_lba.get(f["lba"], []) if e[2] == f["size"]]
        if p == "SLPM_860.96":
            role = "boot"
        elif p == "YUUGI.EXE":
            role = "codigo"
        elif p in OVERLAYS:
            role = "overlay"
        elif p == "SYSTEM.CNF":
            role = "sistema"
        elif p.endswith((".XA", ".STR")):
            role = "stream"
        elif ents:
            role = "tabela"
        else:
            role = "dados"
        tab = " ".join(f"{i}@{dest:#010x}" for i, dest, _, _ in ents)
        lines.append(f"{p} {f['lba']} {f['size']} {f['sha1']} {role} {tab}".rstrip())
    CATALOG.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"{CATALOG.relative_to(ROOT)}: {len(files)} arquivos; {sum(1 for _ in table)} entradas na tabela")


def parse_catalog():
    out = {}
    for l in CATALOG.read_text(encoding="utf-8").splitlines():
        if l and not l.startswith("#"):
            p = l.split()
            out[p[0]] = {"lba": int(p[1]), "size": int(p[2]), "sha1": p[3], "role": p[4],
                         "table": [(int(x.split("@")[0]), int(x.split("@")[1], 16)) for x in p[5:]]}
    return out


def check():
    import hashlib
    cat = parse_catalog()
    bad = []
    for path, e in cat.items():
        f = ROOT / "disc" / path
        if not f.exists():
            bad.append(f"{path}: ausente")
            continue
        if e["role"] != "stream" and hashlib.sha1(f.read_bytes()).hexdigest() != e["sha1"]:
            bad.append(f"{path}: SHA-1 diferente")
    print("\n".join(bad) or f"disco confere com o catálogo ({len(cat)} arquivos)")
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    check() if "--check" in sys.argv else build()
