#include "common.h"

extern u8 D_800922F0[];

void func_80033514(s32 a0, s32 a1) {
    s32 attr[10];
    s32 m[6];

    D_800922F0[0xA] = 3;
    *(s16 *)(D_800922F0 + 4) = 0xFF;
    *(s16 *)(D_800922F0 + 6) = 0x5F;
    D_800922F0[8] = 0xFF;
    D_800922F0[9] = 0xFF;
    func_8003C7C8();
    attr[0] = 0x2C3;
    ((s16 *)attr)[2] = 0x3FFF;
    ((s16 *)attr)[3] = 0x3FFF;
    ((s16 *)attr)[8] = 0x7FFF;
    ((s16 *)attr)[9] = 0x7FFF;
    attr[5] = 1;
    attr[6] = 1;
    SpuSetCommonAttr(attr);
    *(s32 *)(D_800922F0 + 0xC) = a0;
    func_80037138(a1);
    func_80034B14();
    func_80033AC8();
    func_80033764(0);
    *(s16 *)D_800922F0 = 2;
    func_80033824(0x801EF000, a0, 0x2800);
    ((u8 *)m)[0] = 0x11;
    func_80036DB0(m);
}
