#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x80103D3A 1 0,1,2,0x3F */
extern u8 D_80100F38[], D_80091618[];
extern s16 D_80103D38[];
extern s32 func_800B1260(s32), func_800B24B8(s32, s32), func_800CFF9C(s32, s32, s32);
extern void func_800CEC68(s32, s32, s32), func_800CF418(s32, s32), func_800DCC94(s32, s32);

#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800D0D4C(s32 a0) {
    u16 k = func_800B1260(a0);
    u8 *p = D_80100F38 + k * 0x79C;
    u8 *q;
    s16 r;
    P16(0x332) = P16(0x336);
    P16(0x334) = P16(0x338);
    func_800CEC68(a0, PS16(0x332), PS16(0x334));
    P16(0x32A) = P16(0x32C);
    P16(0x324) = P16(0x326);
    q = (u8 *)D_80103D38 + D_80103D38[1] * 6;
    P16(0x336) = *(u16 *)(q + 8);
    P16(0x338) = *(u16 *)(q + 0xA);
    r = P16(0x326) = func_800B24B8(a0, D_80103D38[1]); /* a1: sobra do índice */
    if (r == -1 || r == 8) {
        P16(0x326) = P16(0x324);
        func_800DCC94(a0, r);
    } else {
        func_800CF418(a0, r);
        P16(0x32C) = func_800CFF9C(a0, PS16(0x326), 1);
        if (PS16(0x32C) == 0xFF) func_800DCC94(a0, PS16(0x326));
    }
    *(u16 *)(D_80091618 + k * 0x1A8 + 0x90) = 1 - *(u16 *)(q + 0xC);
    D_80103D38[3] -= 1;
    D_80103D38[1] = D_80103D38[1] == 0x3F ? 0 : D_80103D38[1] + 1;
    return 0;
}
