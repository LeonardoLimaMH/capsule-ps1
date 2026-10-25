#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s32 func_800B1260(s32);

s32 func_800C593C(s32 a0) {
    u16 k = func_800B1260(a0);
    u16 v = *(u16 *)(D_80091618 + k * 0x1A8 + 0x50);
    u8 *p = D_80100F38 + k * 0x79C;
    if (v != 0xFFFF) {
        u8 *o = *(u8 **)(p + 0x278 + (u16)(v - 8) * 4);
        *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | (~*(s32 *)(o + 0x38) & 1);
    }
    return 4;
}
