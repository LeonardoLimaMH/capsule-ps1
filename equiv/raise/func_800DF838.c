/* arg1: small */
#include "common.h"

extern u8 D_80100F38[], D_80092008[];

s32 func_800DF838(s32 a0, u16 a1, s32 a2, s32 a3) {
    u8 *p = D_80100F38 + a1 * 0x79C;
    u32 *e = (u32 *)(D_80092008 + a1 * 0x44);
    u32 w;
    s32 r;
    *(u16 *)((u8 *)e + 4 + ((e[0] >> 10) & 0x7E)) =
        (((a2 - 1) & 0x3F) << 3) | (*(u16 *)(p + 0x326) & 7) | (((a3 - 1) & 0x3F) << 9);
    w = e[0];
    r = ((((w >> 11) & 0x3F) + 1) & 0x3F) << 11;
    w = (w & 0xFFFE07FF) | r;
    w = (w & 0xFF81FFFF) | (((((w >> 17) & 0x3F) + 1) & 0x3F) << 17);
    e[0] = w;
    return r;
}
