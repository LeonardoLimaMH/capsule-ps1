/* rand-ptr: 0x800F1E94 16 */
/* stub-ret: mixed */
/* arg2: small */
#include "common.h"

extern u8 D_80100F38[];
extern u8 *D_800F1E94[];
extern s32 func_800B1260(s32);
extern s32 func_800DE10C(s32, s32, s32, s16 *, s16 *);

#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800DE770(s32 a0, s32 a1, s32 a2) {
    struct { s16 x, y; } t;
    u8 *p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    u8 *s1, *q;
    s16 j;
    u16 s5;
    u8 c;
    s32 m;
    if (PS16(0x5B4) == 0x20) return 0x21;
    P16(0x5B4) += 1;
    j = PS16(0x5B2);
    s5 = P16(0x5B2);
    s1 = p + j * 4;
    *(s16 *)(s1 + 0x5B6) = a1;
    *(s16 *)(s1 + 0x5B8) = a2;
    P16(0x5B2) = (j + 1) % 32;
    t.x = P16(0x336);
    t.y = P16(0x338);
    c = *D_800F1E94[(s16)a2];
    func_800DE10C(a0, (s16)a1, c, &t.x, &t.y);
    *(u16 *)(s1 + 0x636) = t.x;
    *(u16 *)(s1 + 0x638) = t.y;
    m = (16 - c) % 8;



    q = p + (s16)s5 * 4;
    *(u16 *)(q + 0x6B6) = (m * 8 + 16) % 64;
    *(u16 *)(q + 0x6B8) = ((c - 8) & 1) ? ((s16)a1 - 1) * 141 : ((s16)a1 - 1) * 100;
    return (s32)q;
}
