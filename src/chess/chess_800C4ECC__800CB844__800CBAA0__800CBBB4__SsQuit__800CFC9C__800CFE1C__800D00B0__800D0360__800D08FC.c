#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


u8 func_800D08FC(u32 arg0, u32 arg1) {
    extern u8 D_80118C18[];
    u8 *base = D_80118C18;
    u8 *p;
    u8 *q;
    s32 dx;
    register s32 ret asm("v0");
    u8 a, b;

    p = (((arg0 & 0x7F) - 1) * 7 + ((arg0 & 0xFF) >> 7) * 0x2A + base[0xA] * 0x10E) + base;
    q = (((arg1 & 0x7F) - 1) * 7 + ((arg1 & 0xFF) >> 7) * 0x2A + base[0xA] * 0x10E) + base;
    a = p[0x3A2];
    b = q[0x3A2];
    dx = a - b;
    if (dx < 0) {
        dx = b - a;
    }
    a = p[0x3A3];
    b = q[0x3A3];
    if (a - b >= 0) {
        ret = dx + (a - b);
    } else {
        ret = dx + (b - a);
    }
    return ret;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

