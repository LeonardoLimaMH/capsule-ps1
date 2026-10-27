/* arg0: small */
/* arg1: small */
#include "common.h"

extern u8 D_80091618[], D_801061E0[], D_800ED228[];
extern u32 D_8008ED80;

s32 func_800E6BD8(s32 a0, s32 a1) {
    u8 *e = D_80091618 + (u16)a0 * 0x1A8;
    s16 v = *(u16 *)(D_800ED228 + (u16)a1 * 6 + *(u16 *)(e + 0xA0) * 2);
    s32 n;
    float f;
    *(s16 *)(D_801061E0 + (u16)a0 * 40 + 0x26) = v;
    switch (v) {
    case 0: n = 0; break;
    case 1: n = 1; break;
    case 2: n = 2; break;
    default: n = 1; break;
    }
    f = (float)n * (float)*(s16 *)(D_80091618 + (u16)a0 * 0x1A8 + 0xC2) / 255.0f * 100.0f;
    return f < (float)(D_8008ED80 % 100) ? -1 : 0;
}
