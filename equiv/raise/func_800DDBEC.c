#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern void func_800DE304(s32, s32, s16 *, s16 *);
extern void func_800DE35C(s32, s32, s32, s32, s32, s16 *, s16 *);

s32 func_800DDBEC(s32 a0) {
    struct { s16 x, y, u, v; } t;
    u8 *p = PL(a0);
    u8 *q = p + (s16)((PS16(0x5B0) + 31) % 32) * 4;
    u16 s1 = *(u16 *)(q + 0x6B6), s0 = *(u16 *)(q + 0x6B8);
    func_800DE304((s16)(*(u16 *)(q + 0x636) - 1), (s16)(*(u16 *)(q + 0x638) - 1), &t.x, &t.y);
    func_800DE35C((s16)s0, t.x, t.y, PS16(0x220), (s16)s1, &t.u, &t.v);
    P16(0x1D0) = t.u;
    P16(0x1CC) = t.v;
    return (u16)t.u;
}
