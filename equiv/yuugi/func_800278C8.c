#include "common.h"

extern u8 *D_80078D14;
extern u8 D_8006AF90[];

void func_800278C8(s32 a, s32 b) {
    u8 *src = (u8 *)0x801CC040 + a * 0x668 + 0x323;
    u8 *dst = D_8006AF90 + b * 30;
    s32 i;
    u16 v;

    D_80078D14 = src;
    *(u16 *)dst = src[0];
    for (i = 0; i < 3; i++) {
        v = src[1 + i];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        *(u16 *)(dst + 2 + i * 2) = v;
        v = src[4 + i * 2];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        *(u16 *)(dst + 8 + i * 4) = v;
        v = src[5 + i * 2];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        *(u16 *)(dst + 0xA + i * 4) = v;
    }
}
