/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s32 D_800EE6F0[];
extern s32 func_800B1260(s32), func_80019F30(s32, s32);
extern void func_800D4B7C(s32, s32), func_80012A20(s32, s32, s32, s32);
extern u8 *func_800B6D98(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define Q (*(u8 **)(p + 0x180))
#define W(o, x) (*(s32 *)((o) + (x)))

s32 func_800C7FC0(u8 *o, s32 a1) {
    s32 k = func_800B1260(a1);
    u16 c = *(u16 *)(D_80091618 + (u16)k * 0x1A8);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *d, *q;
    u32 w10;
    s32 h;
    func_800D4B7C(a1, (u16)k);
    func_80012A20(func_80019F30(0x2000E, 0x2A), 1, 0, 0);
    q = func_800B6D98(1, 0, 0, 7, 0, D_800EE6F0, *(s16 *)(p + 0x2BA) != 0 ? 5 : 2, 0, 0, 0, 2, 2);
    Q = q;
    W(q, 0x34) = (W(q, 0x34) & ~0x200) | ((a1 & 1) << 9);
    W(Q, 0x34) = (W(Q, 0x34) & 0xFFFF0FFF) | ((k & 0xF) << 12);
    W(Q, 0x8C) = c;
    W(Q, 0x30) = (W(Q, 0x30) & ~7) | 3;
    d = D_80063940 + c * 60;
    w10 = *(u32 *)(d + 0x10);
    h = (w10 >> 24) & 0x3F;
    if ((((*(u32 *)(d + 0x14) & 3) << 2) | (w10 >> 30)) == 0) h = (h * 4) / 5;
    *(u16 *)(Q + 0x46) = *(u16 *)(o + 0x46);
    *(u16 *)(Q + 0x4A) = *(u16 *)(o + 0x4A) - h;
    *(u16 *)(Q + 0x4E) = *(u16 *)(o + 0x4E) - 1;
    P32(0x2BC) += 1;
    P32(0x798) = P32(0x798) & ~0xC0 & ~0x300 & ~0xC00 & ~0x3000;
    return P32(0x2BC);
}
