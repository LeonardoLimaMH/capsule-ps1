#include "common.h"

/* arg1: small */
/* arg2: small */
extern u8 D_800EF364[], D_800EFF58[];

s32 func_800DEC04(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    u8 b;
    if ((u16)(a3 - 1) >= 8 || (u16)(a4 - 1) >= 8) return 0;
    b = D_800EF364[(u16)a1 * 64 + (s16)a3 * 8 + (s16)a4 - 9];
    if (b == 0xFF) return 0;
    if (D_800EFF58[(u16)a2 * 64 + (s16)a3 * 8 + (s16)a4 + 0x8B] == 1) return 0;
    return 1;
}
