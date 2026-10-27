#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F07B8;
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800C5B30(s32, s32, s32);

s32 func_800C8AF8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, D_800F07B8 + (*(u8 **)(p + 0x2BC))[1], 1);
        func_800C5B30(a1, 0, PS16(0x2BA) - 8);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        if ((*(u8 **)(p + 0x2BC))[1] == 0) P32(0x798) &= ~0x20;
        P16(0x344) = 0;
        P32(0x2BC) += 2;
        break;
    }
    return P32(0x2BC);
}
