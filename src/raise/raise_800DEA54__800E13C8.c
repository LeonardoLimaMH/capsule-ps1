#include "common.h"

typedef struct { u8 pad[0x110]; u16 field; u8 tail[0x96]; } Record_800E1388;
extern Record_800E1388 D_80091618[];

s32 func_800E13C8(u32 a, u32 b) {
    if (D_80091618[a & 0xFFFF].field == 1) {
        goto ret0;
    }
    b &= 0xFFFF;
    if (b == 0xFFFF) {
        return 1;
    }
    if (D_80091618[b].field == 1) {
        goto ret0;
    }
    return 1;

ret0:
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
    extern u8 D_80100F38[];
    register u8 *m asm("v0") = (u8 *)D_80091618;
    register u8 *w asm("v1");
    register u32 one asm("v1");
    u8 *p;
    u32 f;

    a &= 0xFFFF;
    p = m + a * 0x1A8;
    if (*(s16 *)(p + 0x19C) != 0) {
        return 1;
    }
    w = D_80100F38;
    f = *(u32 *)(w + a * 0x79C + 0x798);
    one = 1;
    if (((f >> 3) & 1) == one) {
        return 1;
    }
    return (f >> 4) & 1;
}
