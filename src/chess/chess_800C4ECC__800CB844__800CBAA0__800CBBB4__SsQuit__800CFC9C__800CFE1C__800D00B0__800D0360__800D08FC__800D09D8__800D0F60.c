#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


u8 func_800D0F60(u8 a, u8 b) {
    extern u8 D_80118C18[];
    extern void func_800D497C(u8, s32);
    extern u8 func_800D2C9C(int, u8, u8);
    u8 buf[0xB0];
    u8 *base = D_80118C18;
    u8 *p;
    int i;
    u8 x, y;
    u8 n;

    i = ((b & 0x7F) - 1) * 7 + (b >> 7) * 0x2A + base[0xA] * 0x10E;
    p = base + i;
    x = p[0x3A2];
    y = p[0x3A3];
    func_800D497C(a, (s32)buf);
    n = func_800D2C9C((int)buf, x + 1, y) != 0;
    if (func_800D2C9C((int)buf, x - 1, y) != 0) n++;
    if (func_800D2C9C((int)buf, x, y + 1) != 0) n++;
    if (func_800D2C9C((int)buf, x, y - 1) != 0) n++;
    return n;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

