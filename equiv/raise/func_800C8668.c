#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[];
extern s16 D_800F07A0;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CB438(s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C8668(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, D_800F07A0 + PS16(0x372), 1);
        P16(0x344) = 2;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        else func_800CB438(PS16(0x372), a0, *(u16 *)(D_80091618 + (u16)k * 0x1A8), 0x5D);
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}
