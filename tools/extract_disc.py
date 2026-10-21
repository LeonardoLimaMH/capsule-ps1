#!/usr/bin/env python3
"""Extrai o sistema de arquivos ISO9660 de uma imagem BIN (MODE2/2352) do PS1.

Uso: python tools/extract_disc.py <imagem.bin> <pasta_saida>

Gera também <pasta_saida>/../disc_manifest.json com LBA, tamanho e SHA-1 de
cada arquivo, usado pelos scripts de verificação.
"""
import hashlib
import json
import os
import struct
import sys

SECTOR = 2352


def read_sector(f, lba):
    f.seek(lba * SECTOR)
    raw = f.read(SECTOR)
    # Mode 2: 12 sync + 4 header + 8 subheader
    submode = raw[18]
    form2 = bool(submode & 0x20)
    if form2:
        return raw[24:24 + 2324], True
    return raw[24:24 + 2048], False


def read_extent(f, lba, size):
    out = bytearray()
    n = (size + 2047) // 2048
    for i in range(n):
        data, form2 = read_sector(f, lba + i)
        out += data[:2048] if not form2 else data
    return bytes(out[:size]) if not any(read_sector(f, lba + i)[1] for i in range(min(n, 1))) else bytes(out)


def parse_dir(f, lba, size, path, entries):
    data = b"".join(read_sector(f, lba + i)[0] for i in range((size + 2047) // 2048))
    off = 0
    while off < len(data):
        ln = data[off]
        if ln == 0:
            off = ((off // 2048) + 1) * 2048
            continue
        rec = data[off:off + ln]
        ext_lba = struct.unpack_from("<I", rec, 2)[0]
        ext_size = struct.unpack_from("<I", rec, 10)[0]
        flags = rec[25]
        nlen = rec[32]
        name = rec[33:33 + nlen]
        off += ln
        if name in (b"\x00", b"\x01"):
            continue
        name = name.decode("ascii", "replace").split(";")[0]
        full = f"{path}/{name}" if path else name
        # XA attributes (system use area) -> form2 / interleaved files
        su = rec[33 + nlen + (1 - nlen % 2):]
        xa_attr = 0
        if len(su) >= 14 and su[6:8] == b"XA":
            xa_attr = struct.unpack_from(">H", su, 4)[0]
        if flags & 2:
            entries.append({"path": full + "/", "lba": ext_lba, "size": ext_size, "dir": True})
            parse_dir(f, ext_lba, ext_size, full, entries)
        else:
            entries.append({"path": full, "lba": ext_lba, "size": ext_size, "dir": False,
                            "xa_attr": xa_attr})


def main():
    img, outdir = sys.argv[1], sys.argv[2]
    os.makedirs(outdir, exist_ok=True)
    entries = []
    with open(img, "rb") as f:
        pvd, _ = read_sector(f, 16)
        assert pvd[1:6] == b"CD001", "PVD não encontrado"
        root = pvd[156:156 + 34]
        rlba = struct.unpack_from("<I", root, 2)[0]
        rsize = struct.unpack_from("<I", root, 10)[0]
        parse_dir(f, rlba, rsize, "", entries)
        total_sectors = os.path.getsize(img) // SECTOR
        for e in entries:
            if e["dir"]:
                os.makedirs(os.path.join(outdir, e["path"]), exist_ok=True)
                continue
            nsec = (e["size"] + 2047) // 2048
            # arquivos XA/STR (form2/interleaved) são copiados como setores crus de 2352
            raw_mode = bool(e.get("xa_attr", 0) & 0x3000)
            if raw_mode:
                f.seek(e["lba"] * SECTOR)
                data = f.read(nsec * SECTOR)
                e["raw2352"] = True
            else:
                data = b"".join(read_sector(f, e["lba"] + i)[0][:2048] for i in range(nsec))[:e["size"]]
            dst = os.path.join(outdir, e["path"])
            os.makedirs(os.path.dirname(dst) or outdir, exist_ok=True)
            with open(dst, "wb") as o:
                o.write(data)
            e["sha1"] = hashlib.sha1(data).hexdigest()
        meta = {"image": os.path.basename(img), "total_sectors": total_sectors,
                "volume_id": pvd[40:72].decode("ascii").strip(), "files": entries}
    with open(os.path.join(os.path.dirname(os.path.abspath(outdir)), "disc_manifest.json"), "w") as o:
        json.dump(meta, o, indent=2)
    for e in entries:
        print(f'{e["lba"]:8d} {e["size"]:10d} {"RAW" if e.get("raw2352") else "   "} {e["path"]}')


if __name__ == "__main__":
    main()
