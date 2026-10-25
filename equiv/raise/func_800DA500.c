#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s32 func_800B1260(s32);

s32 func_800DA500(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u16 c = *(u16 *)(D_80091618 + k * 0x1A8);
    u8 *p = D_80100F38 + k * 0x79C;
    if ((u32)(((*(u32 *)(D_80063940 + c * 60 + 0xC) >> 11) & 0x1F) - 0x19) < 6) {
        u8 *pc = *(u8 **)(p + 0x2BC);
        if (*pc != 1) {
            u8 v;
            do {
                u8 *n = pc + 1;
                *(u8 **)(p + 0x2BC) = n;
                v = pc[1];
                pc = n;
            } while (v != 1);
        }
    } else {
        *(s32 *)(p + 0x2BC) += 1;
    }
    return *(s32 *)(p + 0x2BC);
}
