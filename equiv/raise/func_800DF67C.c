#include "common.h"

extern u8 D_80092008[];

s32 func_800DF67C(s32 a0, u16 a1, s32 a2, s16 a3, s16 a4) {
    u8 *e = D_80092008 + a1 * 0x44;
    s32 n = (*(u32 *)e >> 17) & 0x3F;
    s16 i;
    if (n == 0) return 0;
    for (i = 0; i < n; i++) {
        u16 h = *(u16 *)(e + 4 + i * 2);
        if (((h >> 3) & 0x3F) + 1 == a3 && ((h >> 9) & 0x3F) + 1 == a4) return 1;
    }
    return 0;
}
