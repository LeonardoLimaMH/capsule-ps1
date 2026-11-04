#include "common.h"

s32 func_800E13C8(u32 a, u32 b) {
    extern u8 D_80091618[];
    u8 *m = D_80091618;
    u8 *p = m + (a & 0xFFFF) * 0x1A8;
    register s32 one asm("a0");
    one = 1;
    if (*(u16 *)(p + 0x110) == one) {
        return 0;
    }
    b &= 0xFFFF;
    if (b == 0xFFFF || *(u16 *)(m + b * 0x1A8 + 0x110) != one) {
        return 1;
    }
    return 0;
}

s32 func_800E1450(u32 a) {
    extern u8 D_80100F38[];
    u8 *w = D_80100F38 + (a & 0xFFFF) * 0x79C;
    u16 s;

    if (*(s16 *)(w + 0x2B8) != 2) {
        goto ret0;
    }
    s = *(u16 *)(w + 0x2BA);
    if ((u32)(s - 10) < 2) {
        return 1;
    }
    if ((s16)s != 14) {
        goto ret0;
    }
    return 1;

ret0:
    return 0;
}

s32 func_800E14C4(u32 a) {
    extern u8 D_80091618[], D_80100F38[];
    u8 *m = D_80091618;
    u8 *w = D_80100F38;
    u8 *p;
    u32 f;
    register u32 one asm("v1");
    a &= 0xFFFF;
    p = m + a * 0x1A8;
    if (*(s16 *)(p + 0x19C) != 0) {
        return 1;
    }
    f = *(u32 *)(w + a * 0x79C + 0x798);
    one = 1;
    if (((f >> 3) & 1) == one) {
        return 1;
    }
    return (f >> 4) & 1;
}
