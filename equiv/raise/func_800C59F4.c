/* arg2: small */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_8008ED68[];
extern s32 func_800B1260(s32);

s32 func_800C59F4(s32 a0, s32 a1, s32 a2) {
    u16 k = func_800B1260(a0);
    u8 *p = D_80100F38 + k * 0x79C;
    u8 *e = D_80091618 + k * 0x1A8;
    u8 **q = (u8 **)(p + 0x230 + a2 * 4);
    if (a1 == 1) {
        *(s32 *)(*q + 0x38) &= ~1;
        *(s16 *)(*q + 0x46) = -(*(s32 *)(D_8008ED68 + 0x108) / 2);
        *(s16 *)(*q + 0x4A) = -(*(s32 *)(D_8008ED68 + 0x10C) / 2);
        *(u16 *)(*q + 0x4E) = *(u16 *)(p + 0x1E0);
        if (a2 == 8) *(u16 *)(e + 0x40) = a2;
        return 8;
    }
    return *(s32 *)(*q + 0x38) |= 1;
}
