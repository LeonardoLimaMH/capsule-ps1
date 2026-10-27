/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s16 D_800F07A8;
extern s32 func_800B1260(s32), func_80015E60(s32), rand(void);
extern void func_800CE4B8(s32, s32, s32, s32), func_800C5B30(s32, s32, s32), func_800991D4(s32, s32, u8 *);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C87C0(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
    case 1: {
        u8 *d = D_80063940 + *(u16 *)(D_80091618 + (u16)k * 0x1A8) * 60;
        u32 w18 = *(u32 *)(d + 0x18), w1C = *(u32 *)(d + 0x1C);
        s32 s = 0;
        if ((((w1C & 1) << 3) | (w18 >> 29)) == 0xF) s = 3;
        else if (((w1C >> 1) & 0xF) != 0xF && !(rand() & 1)) s = 3;
        func_800CE4B8(a1, a0, s + D_800F07A8 + PS16(0x372), 1);
        func_800C5B30(a1, 0, PS16(0x2BA) - 8);
        P16(0x344) = 2;
    }
    case 2:
        if (func_80015E60(a0) != 1) {
            func_800991D4(a0, (u16)k, p);
            break;
        }
        P16(0x344) = 3;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}
