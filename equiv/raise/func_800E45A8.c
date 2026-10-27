#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x80078C20 1 0,1 */
/* arg2: small */
/* arg3: small */
extern u8 D_80091618[], D_800EF364[], D_80069EC4[];
extern u16 D_8006AF80, D_80078C20;
extern s32 func_800E36E4(s32);

s32 func_800E45A8(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 n = a0 == 1 ? 1 : 4;
    u16 idx, m;
    u8 b;
    if (func_800E36E4(a0) == 1) {
        idx = D_8006AF80;
        m = D_80078C20;
    } else {
        m = 1 - D_80078C20;
        idx = *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A);
    }
    b = D_800EF364[*(u16 *)(D_80091618 + idx * 0x1A8 + 0x10) * 64 + a2 * 8 + a3 - 9];
    return (s16)(*(u16 *)(*(u8 **)(D_80069EC4 + n * 28 + (s16)m * 0x2D8 + 0x10) + b * 8 + 4) - 5);
}
