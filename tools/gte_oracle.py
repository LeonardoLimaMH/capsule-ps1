#!/usr/bin/env python3
"""Confere tools/gte.py contra o GTE de outro emulador (oráculo independente).

O oráculo é o GTE do psxe (https://github.com/allkern/psxe, licença MIT, Allkern):
o psx/cpu.c dele é compilado como biblioteca e chamado pelo ctypes. O código do psxe não
é copiado para este repositório; o clone fica em ref/psxe (fora do git):

  git clone --depth 1 https://github.com/allkern/psxe.git ref/psxe

Uso (dentro do container):
  gte_oracle.py [--n 200000] [--seed 1] [--ops rtps,rtpt,nclip,avsz3,avsz4,mvmva,regs]
Sorteia estados e instruções, executa nos dois e compara os 64 registradores (leitura
pelas mesmas regras do mfc2/cfc2). Lista as primeiras divergências por instrução.
"""
import argparse
import ctypes
import pathlib
import random
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import gte  # noqa: E402

PSXE = ROOT / "ref" / "psxe" / "psx"
BUILD = ROOT / ".cache" / "gte_oracle"

HARNESS = r"""
#include "cpu.c"

/* o GTE não usa o barramento nem o log: substitutos vazios para ligar a biblioteca */
uint32_t psx_bus_read32(psx_bus_t* b, uint32_t a) { return 0; }
uint16_t psx_bus_read16(psx_bus_t* b, uint32_t a) { return 0; }
uint8_t psx_bus_read8(psx_bus_t* b, uint32_t a) { return 0; }
void psx_bus_write32(psx_bus_t* b, uint32_t a, uint32_t v) {}
void psx_bus_write16(psx_bus_t* b, uint32_t a, uint32_t v) {}
void psx_bus_write8(psx_bus_t* b, uint32_t a, uint32_t v) {}
uint32_t psx_bus_get_access_cycles(psx_bus_t* b) { return 0; }
void log_log(int level, const char *file, int line, const char *fmt, ...) {}

static psx_cpu_t C;

void o_reset(void) { memset(&C, 0, sizeof C); }
void o_write(unsigned r, unsigned v) { gte_write_register(&C, r, v); }
unsigned o_read(unsigned r) { return gte_read_register(&C, r); }

int o_cmd(unsigned op) {
    C.opcode = op;
    C.gte_sf = ((op & 0x80000) != 0) * 12;
    C.gte_lm = (op & 0x400) != 0;
    C.gte_cv = (op >> 13) & 3;
    C.gte_v = (op >> 15) & 3;
    C.gte_mx = (op >> 17) & 3;
    switch (op & 0x3f) {
    case 0x01: psx_gte_i_rtps(&C); return 1;
    case 0x06: psx_gte_i_nclip(&C); return 1;
    case 0x12: psx_gte_i_mvmva(&C); return 1;
    case 0x2d: psx_gte_i_avsz3(&C); return 1;
    case 0x2e: psx_gte_i_avsz4(&C); return 1;
    case 0x30: psx_gte_i_rtpt(&C); return 1;
    }
    return 0;
}
"""

COMMANDS = {
    "rtps": lambda r: 0x4A000001 | (r.getrandbits(1) << 19) | (r.getrandbits(1) << 10),
    "rtpt": lambda r: 0x4A000030 | (r.getrandbits(1) << 19) | (r.getrandbits(1) << 10),
    "nclip": lambda r: 0x4A000006,
    "avsz3": lambda r: 0x4A00002D,
    "avsz4": lambda r: 0x4A00002E,
    "mvmva": lambda r: (0x4A000012 | (r.getrandbits(1) << 19) | (r.randrange(4) << 17) | (r.randrange(4) << 15)
                        | (r.randrange(4) << 13) | (r.getrandbits(1) << 10)),
}


def build():
    if not (PSXE / "cpu.c").exists():
        sys.exit("falta ref/psxe: git clone --depth 1 https://github.com/allkern/psxe.git ref/psxe")
    BUILD.mkdir(parents=True, exist_ok=True)
    src = BUILD / "harness.c"
    lib = BUILD / "liboracle.so"
    src.write_text(HARNESS)
    subprocess.run(["gcc", "-O1", "-w", "-shared", "-fPIC", "-I", str(PSXE), "-o", str(lib), str(src)], check=True)
    return ctypes.CDLL(str(lib), mode=ctypes.RTLD_GLOBAL)


def value(r):
    """valores com bordas: pequenos, extremos de 16 bits e 32 bits aleatórios."""
    k = r.random()
    if k < 0.35:
        return r.randrange(-0x400, 0x400) & 0xFFFFFFFF
    if k < 0.5:
        return r.choice([0, 1, 0x7FFF, 0x8000, 0xFFFF, 0x10000, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF])
    if k < 0.7:
        return r.randrange(-0x8000, 0x8000) & 0xFFFFFFFF
    return r.getrandbits(32)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=200000)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--ops", default="rtps,rtpt,nclip,avsz3,avsz4,mvmva,regs")
    a = ap.parse_args()
    o = build()
    o.o_read.restype = ctypes.c_uint
    ops = a.ops.split(",")
    rng = random.Random(a.seed)
    bad = {}
    total = {}
    for _ in range(a.n):
        o.o_reset()
        g = gte.GTE()
        for i in range(64):  # mesmo estado inicial nos dois, pelas regras de escrita
            v = value(rng)
            if i == 58:
                v = rng.randrange(0, 0x10000)  # H
            if i == 63:
                v = 0
            o.o_write(i, v)
            (g.write_data if i < 32 else g.write_ctrl)(i & 31, v)
        op = rng.choice(ops)
        if op == "regs":
            r, v = rng.randrange(64), value(rng)
            o.o_write(r, v)
            (g.write_data if r < 32 else g.write_ctrl)(r & 31, v)
            word, name = None, f"escrita r{r}"
        else:
            word = COMMANDS[op](rng)
            o.o_cmd(word)
            g.command(word)
            name = op
        total[op] = total.get(op, 0) + 1
        diff = [(i, o.o_read(i) & 0xFFFFFFFF,
                 (g.read_data(i) if i < 32 else g.read_ctrl(i & 31)) & 0xFFFFFFFF)
                for i in range(64)
                if o.o_read(i) & 0xFFFFFFFF != (g.read_data(i) if i < 32 else g.read_ctrl(i & 31)) & 0xFFFFFFFF]
        if diff:
            bad.setdefault(op, []).append((name, word, diff[:6]))
    for op in ops:
        n = len(bad.get(op, []))
        print(f"{op:6} {total.get(op, 0) - n:7}/{total.get(op, 0):7} iguais")
        for name, word, d in bad.get(op, [])[:3]:
            w = f"{word:#010x}" if word is not None else name
            print(f"   {w}: " + ", ".join(f"r{i}: psxe={x:#x} gte.py={y:#x}" for i, x, y in d))
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    main()
