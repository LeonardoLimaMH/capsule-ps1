/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s16 D_800F0758;
extern s32 func_800B1260(s32), func_800CE128(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CC1FC(s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C478C(u8 *o, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *e;
    s32 t, v;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, (s32)o, D_800F0758 + func_800CE128(PS16(0x326)), 1);
        P16(0x344) = 2;
    case 2:
        if (func_80015E60((s32)o) == 1) {
            P16(0x344) = 3;
            break;
        }
        e = D_80091618 + (u16)k * 0x1A8;
        t = (*(u32 *)(D_80063940 + *(u16 *)e * 60 + 0x24) >> 10) & 0x1F;
        if (t == 1) {
            if (*(u16 *)(o + 0x24) != *(s32 *)(*(u8 **)(*(u8 **)(o + 0x1C) + 4) + 4)) break;
            v = *(s32 *)(o + 0x20);
        } else {
            if (*(u16 *)(o + 0x20) != t - 2) break;
            v = *(s16 *)(o + 0x24);
        }
        if (v == 0) func_800CC1FC(a1, *(u16 *)e, 1);
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}
