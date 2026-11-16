#include "ghidra.h"
#include "common.h"

s32 func_800C1F84(s32 unused, u8 *base, s32 slot, s32 x, s32 y, u8 direction) {
    extern s8 D_80100FB0[];
    u8 *p = base + slot * 2;
    register s8 *d asm("v1") = D_80100FB0;
    s8 *step = direction * 2 + d;

loop:
    x += step[0];
    y += step[1];
    if (x >= 13 || y >= 13) {
        return 0;
    }
    switch (*(base + x * 13 + y + 0x630)) {
    case 0:
        return 0;
    case 1:
        goto loop;
    case 2:
        p[0x601] = x;
        p[0x602] = y;
        return 1;
    default:
        goto loop;
    }
}
