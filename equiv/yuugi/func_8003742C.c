#include "common.h"

extern u8 D_800922FA;
extern u16 D_800922F0;

s32 func_8003742C(s32 a, s32 b) {
    s32 x[4];
    s32 y[4];
    u16 v;

    if (!(D_800922FA & 2)) {
        v = a;
        if (v > 0x8021 && v <= 0x8320) {
            return 0;
        }
    }
    if (!(a & 0x8000)) {
        return 0;
    }
    ((u8 *)x)[0] = 0x24;
    ((u16 *)x)[1] = a & 0x7FFF;
    func_80036DB0(x);
    ((u8 *)y)[0] = 0x29;
    y[2] = (s16)b;
    ((u8 *)y)[1] = 0xFF;
    func_80036DB0(y);
    D_800922F0 = (D_800922F0 | 1) & 0xFFFB;
    return 1;
}
