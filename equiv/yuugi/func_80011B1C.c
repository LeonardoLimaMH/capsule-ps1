#include "common.h"

extern u8 D_80086228[];
extern u8 D_8008ED68[];

void func_80011B1C(void) {
    u8 *d = D_80086228;

    SetDefDrawEnv(d, 0, 0, 320, 240);
    SetDefDrawEnv(d + 0x4594, 0, 240, 320, 240);
    SetDefDispEnv(d + 0x5C, 0, 240, 320, 240);
    SetDefDispEnv(d + 0x45F0, 0, 0, 320, 240);
    d[0x18] = 1;
    d[0x45AC] = 1;
    *(s16 *)(d + 0x14) = 0x20;
    *(s16 *)(d + 0x45A8) = 0x20;
    *(s16 *)(d + 0x45FA) = 0;
    *(s16 *)(d + 0x66) = 0;
    *(s16 *)(d + 0x45FE) = 240;
    *(s16 *)(d + 0x6A) = 240;
    d[0x19] = 0;
    d[0x1A] = 0;
    d[0x1B] = 0;
    d[0x4594 + 0x19] = 0;
    d[0x4594 + 0x1A] = 0;
    d[0x4594 + 0x1B] = 0;
    ClearOTagR(d + 0x70, 0x408);
    ClearOTagR(d + 0x4604, 0x408);
    *(u8 **)D_8008ED68 = d;
    *(s32 *)(D_8008ED68 + 0x110) = 0;
    *(s32 *)(D_8008ED68 + 0x120) = 0;
    *(s32 *)(D_8008ED68 + 0x118) = 0;
    *(s32 *)(D_8008ED68 + 0x128) = 0;
    *(s32 *)(D_8008ED68 + 0x114) = 0;
    *(s32 *)(D_8008ED68 + 0x124) = 0;
    *(s32 *)(D_8008ED68 + 0x11C) = 240;
    *(s32 *)(D_8008ED68 + 0x12C) = 240;
}
