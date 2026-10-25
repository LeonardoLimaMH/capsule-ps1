#include "common.h"

extern u8 *D_80078D14;
extern u8 D_8006AF90[];

void func_800279D4(s32 a, s32 b) {
    u8 *dst = (u8 *)0x801CC040 + a * 0x668;
    u8 *src = D_8006AF90 + b * 30;
    s32 i;

    D_80078D14 = dst + 0x323;
    dst[0x323] = src[0];
    for (i = 0; i < 3; i++) {
        D_80078D14[1 + i] = src[2 + i * 2];
        D_80078D14[4 + i * 2] = src[8 + i * 4];
        D_80078D14[5 + i * 2] = src[0xA + i * 4];
    }
}
