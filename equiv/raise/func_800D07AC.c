#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* arg1: small */
extern u8 D_80100F38[], D_80091618[], D_800EF364[], D_800EFF58[];
extern u16 D_8006AF80;
extern s32 func_800B1260(s32);

s32 func_800D07AC(s32 a0, s32 a1, s32 a2) {
    u8 *p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    s16 c = (a2 == -1 ? 8 : 1) - 1;
    s16 r = *(u16 *)(p + 0x332) + a1 - 1;
    u16 idx;
    s32 side;
    u8 b;
    if (a2 == -1) idx = *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A);
    else idx = D_8006AF80;
    side = a2 == -1;
    b = D_800EF364[*(u16 *)(D_80091618 + idx * 0x1A8 + 0x10) * 64 + r * 8 + c];
    if (b == 0xFF) return 0xFF;
    if (D_800EFF58[side * 64 + 0x94 + r * 8 + c] == 1) return 0xFF;
    return b;
}
