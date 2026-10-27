#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738;
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) (*(u32 *)(D_80100F38 + (func_800B12D8(a) & 0xFFFF) * 0x79C + 0x798))

s32 func_800D9B00(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0x3000;
        break;
    case 1:
        func_800CE4B8(a1, a0, D_800F0738 + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0x3000) | 0x1000;
        break;
    case 2:
        if (((Q798(a1) >> 12) & 3) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0x3000) | 0x2000;
        }
        break;
    default:
        if (((Q798(a1) >> 12) & 3) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
        }
        break;
    }
    return P32(0x2BC);
}
