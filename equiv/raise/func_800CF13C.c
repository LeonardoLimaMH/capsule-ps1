#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800CF13C(s32 a0) {
    u8 *p = PL(a0);
    u16 x = P16(0x1CC), a = P16(0x1D4), b = P16(0x1D6), c = P16(0x1D8);
    s32 r;
    P16(0x1CC) = x + a;
    r = P16(0x1CE) + b;
    P16(0x1D0) = P16(0x1D0) + c;
    P16(0x1CE) = r;
    return r;
}
