#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800DCC94(s32 a0) {
    u8 *p = PL(a0);
    u16 a;
    s16 v = PS16(0x336);
    if (v <= 0) a = 1;
    else if (v < 9) a = P16(0x336);
    else a = 8;
    P16(0x336) = a;
    v = PS16(0x338);
    if (v <= 0) a = 1;
    else if (v < 9) a = P16(0x338);
    else a = 8;
    P16(0x338) = a;
    {
        s32 r = a + PS16(0x336) * 8 - 9;
        P16(0x32C) = r;
        return r;
    }
}
