#include "common.h"

/* stub-ret: mixed */
/* max-insns: 20000 */
/* arg1: small */
/* arg2: small */
extern u8 D_80100F38[], D_80091618[], D_800EF364[];
extern s32 func_800B1260(s32), func_800B12D8(s32);

s32 func_800D30B0(s32 a0, s32 a1, s32 a2) {
    s32 k = func_800B1260(a0);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *base;
    s32 r, c;
    u8 b;
    if (*(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x90) != 0) k = func_800B12D8(a0);
    r = *(u16 *)(p + 0x332) + (a1 - 1);
    c = *(u16 *)(p + 0x334) + (a2 - 1);
    base = D_800EF364 + *(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x10) * 64;
    if (base[(s16)r * 8 + (s16)c] != 0xFF) return 0xFF;
    *(u16 *)(p + 0x382) = 1;
    do {
        r += a1;
        c += a2;
        *(u16 *)(p + 0x382) += 1;
        b = base[(s16)r * 8 + (s16)c];
    } while (b == 0xFF);
    return (s16)-b;
}
