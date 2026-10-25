/* rand-mem: 0x8008EE44 1 0x1C */
#include "common.h"

extern u8 D_80085428[], D_800B3B38[], D_80063940[];
extern u16 D_8008EE44;
extern u16 D_800B25B8[];
extern s32 func_80019F30(s32, s32);

#define P32(o) (*(u32 *)(p + (o)))
#define ENT(r, c) (*(s16 *)(D_800B3B38 + (r) * 12 + 0x10 + (c) * 2))

s32 func_800A4448(u8 *p) {
    s32 c, r, v;
    u16 m;
    s16 n;
    P32(0x38) |= 1;
    c = *(s32 *)(p + 0x80);
    m = D_8008EE44;
    r = *(s32 *)(p + 0x84);
    if ((u32)(m - 0x18) >= 3) return 0;
    if (D_80085428[0x5D0] == 2 && m == 0x18) {
        u16 t = *(u16 *)(D_800B3B38 + r * 2);
        if ((u32)(t - 2) < 3) return 1;
        if ((s16)t == 6) return 6;
    }
    n = ENT(r, c);
    if (n < 0) return n;
    P32(0x38) &= ~1;
    *(s32 *)(p + 0x18) = func_80019F30(0x60010, ENT(r, c) + 0x6F);
    *(u16 *)(p + 0x2E) = (*(u32 *)(D_80063940 + ENT(r, c) * 60 + 0x14) >> 1) & 0xE;
    *(u16 *)(p + 0x4A) = D_800B25B8[ENT(r, c)];
    if (D_80085428[0x5D0] == 2) {
        *(u16 *)(p + 0x4A) = r ? 0x60 : -0x20;
        *(u16 *)(p + 0x4A) += D_800B25B8[ENT(r, c)];
    }
    v = ENT(r, c) == 0x31 ? 0xE80 : 0x1000;
    *(u16 *)(p + 0x52) = v;
    *(u16 *)(p + 0x50) = v;
    return v;
}
