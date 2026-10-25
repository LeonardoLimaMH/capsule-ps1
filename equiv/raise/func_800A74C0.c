#include "common.h"

extern u8 D_80091618[];
extern u8 D_800EBFF8[];

void func_800A74C0(s32 a, s32 b) {
    u16 *src = (u16 *)(D_800EBFF8 + (b & 0xFFFF) * 8);
    u8 *dst = D_80091618 + (a & 0xFFFF) * 0x1A8;

    *(u16 *)(dst + 0xE8) = src[0];
    *(u16 *)(dst + 0xEA) = src[1];
    *(u16 *)(dst + 0xEC) = src[2];
    *(u16 *)(dst + 0xEE) = src[3];
}
