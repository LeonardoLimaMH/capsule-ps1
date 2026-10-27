#include "common.h"

/* stub-ret: mixed */
/* arg1: small */
/* arg2: small */
extern u8 D_80100F38[], D_80091618[], D_800EF364[], D_800EFF58[];
extern s32 func_800B1260(s32), func_800B12D8(s32);

s32 func_800D0A8C(s32 a0, s32 a1, s32 a2) {
    s32 k = func_800B1260(a0);
    s32 s3 = a0 ^ 1;
    s32 side = s3 != 0;
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    s16 r = *(u16 *)(p + 0x332) + (a1 - 1);
    s16 c = *(u16 *)(p + 0x334) + (a2 - 1);
    u8 b;
    if (*(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x90) != 0) {
        k = func_800B12D8(a0);
        side = s3 == 0;
    }
    b = D_800EF364[*(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x10) * 64 + r * 8 + c];
    if (b == 0xFF) return 0xFF;
    if (D_800EFF58[side * 64 + 0x94 + r * 8 + c] == 1) return 0xFF;
    return b;
}
