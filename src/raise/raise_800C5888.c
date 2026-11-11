#include "common.h"

extern u8 D_80091618[];
extern u8 D_80100F38[];
extern s32 func_800B1260();

s32 func_800C5888(void) {
    u16 k = func_800B1260();
    u8 *p = D_80100F38 + k * 0x79C;
    u16 *q = (u16 *)(D_80091618 + k * 0x1A8);
    if (q[0x20] != 0xFFFF) {
        u32 *e = *(u32 **)(p + 0x230 + q[0x20] * 4);
        u32 v = e[0xE];
        e[0xE] = (v & ~1) | (~v & 1);
    }
    return 4;
}

