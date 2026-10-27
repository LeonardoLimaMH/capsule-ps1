/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s16 D_800F0788;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
#define F(d) ((*(u32 *)((d) + 0x28) >> 18) & 0x1F)

s32 func_800C6E5C(u8 *o, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *d;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, (s32)o, D_800F0788, 1);
        P16(0x344) = 2;
    case 2:
        if (func_80015E60((s32)o) == 1) {
            P16(0x344) = 3;
            break;
        }
        d = D_80063940 + *(u16 *)(D_80091618 + (u16)k * 0x1A8) * 60;
        if (F(d) == 1) {
            if (*(u16 *)(o + 0x24) != *(s32 *)(*(u8 **)(*(u8 **)(o + 0x1C) + 4) + 4)) break;
            if (*(s32 *)(o + 0x20) != 0) break;
            func_80034AB0(0x83);
            func_800C5670(a1);
        } else {
            if (*(u16 *)(o + 0x20) != F(d) - 2) break;
            if (*(s16 *)(o + 0x24) == 1) func_800C5670(a1);
            if (*(u16 *)(o + 0x20) == F(d) - 2 && *(s16 *)(o + 0x24) == 0) func_80034AB0(0x83);
        }
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}
