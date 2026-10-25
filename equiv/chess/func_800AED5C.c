#include "common.h"

extern u8 *D_801010B0[];

u8 func_800AED5C(s32 a0, u8 *o, u8 i, u8 j) {
    u8 *t = D_801010B0[o[9] * 13];
    return t[i * 52 + j * 4 + 3] & 0x7F;
}
