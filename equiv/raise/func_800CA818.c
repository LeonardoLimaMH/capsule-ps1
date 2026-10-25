#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s32 D_800EE670[];
extern s32 func_800B1260(s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800CA818(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *e = D_80091618 + k * 0x1A8;
    u8 *p = D_80100F38 + k * 0x79C;
    *(s32 *)(p + 0x2BC) += 1;
    if (((*(u32 *)(D_80063940 + *(u16 *)e * 60 + 0x20) >> 15) & 0xF) == 1) {
        u8 *o = *(u8 **)(p + 0x258 + *(s16 *)(p + 0x2BA) * 4);
        func_80015CD0(o + 0x14, func_80019F30(D_800EE670[0] | 0x70000, D_800EE670[6] + 0xD), 0);
        *(s32 *)(o + 0x7C) = 0xD;
        *(u16 *)(o + 0x66) = 0;
        *(s32 *)(o + 0x30) = ((*(s32 *)(o + 0x30) & ~0x1C0) & ~0x30) | 0x10;
    }
    return *(s32 *)(p + 0x2BC);
}
