#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s32 func_800B1260(s32);

s32 func_800C5888(s32 a0) {
    u16 k = func_800B1260(a0);
    u8 *p = D_80100F38 + k * 0x79C;
    u16 v = *(u16 *)(D_80091618 + k * 0x1A8 + 0x40);
    if (v != 0xFFFF) {
        u8 *o = *(u8 **)(p + 0x230 + v * 4);
        *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | (~*(s32 *)(o + 0x38) & 1);
    }
    return 4;
}
