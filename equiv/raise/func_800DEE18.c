#include "common.h"

/* arg1: small */
extern u8 D_80092008[], D_80091618[];

s32 func_800DEE18(s32 a0, u16 a1, s16 *px, s16 *py, s16 *pz) {
    u32 *e = (u32 *)(D_80092008 + a1 * 0x44);
    u32 w = e[0];
    u16 h;
    s32 x, y;
    if (((w >> 17) & 0x3F) == 0) return 0;
    *(u16 *)(D_80091618 + a1 * 0x1A8 + 0x90) = w & 1;
    h = *(u16 *)((u8 *)e + 4 + ((e[0] >> 4) & 0x7E));
    x = (h >> 3) & 0x3F;
    y = (h >> 9) & 0x3F;
    if (x == 0x3F) x = -1;
    if (y == 0x3F) y = -1;
    *pz = h & 7;
    *px = x + 1;
    *py = y + 1;
    w = e[0];
    w = (w & ~0x7E0) | (((((w >> 5) & 0x3F) + 1) & 0x3F) << 5);
    w = (w & 0xFF81FFFF) | (((((w >> 17) & 0x3F) - 1) & 0x3F) << 17);
    e[0] = w;
    return 1;
}
