#include "common.h"

extern u8 D_80091618[];
extern u8 D_80100F38[];
extern s32 func_800B1260();

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C5888", func_800C5888);

extern u8 D_80091618[];
extern u8 D_80100F38[];
extern s32 func_800B1260();
s32 func_800C593C(void) {
    u16 k = func_800B1260();
    u8 *q = D_80091618 + k * 0x1A8;
    u8 *p = D_80100F38 + k * 0x79C;
    u16 i = *(u16 *)(q + 0x50);
    u32 *e;
    u32 v;

    switch (i) {
    case 0xFFFF:
        break;
    default:
        e = *(u32 **)(p + 0x278 + (u16)(i - 8) * 4);
        v = e[0xE];
        e[0xE] = (v & ~1) | (~v & 1);
        break;
    }
    return 4;
}
