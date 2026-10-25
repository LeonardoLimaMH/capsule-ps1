#include "common.h"

extern u8 D_800922F0[];

void func_800374E8(s32 a) {
    s32 b[4];
    s32 c[4];

    if (!(a & 0x8000)) {
        return;
    }
    if (*(u16 *)D_800922F0 & 0xF) {
        ((u8 *)c)[0] = 0x2A;
        ((u8 *)c)[1] = 0;
        c[2] = -0x20;
        func_80036DB0(c);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
    }
    *(u16 *)D_800922F0 |= 1;
    ((u8 *)b)[0] = 0x21;
    b[2] = (*(u32 *)(*(u8 **)(D_800922F0 + 0x1170) + (a & 0x7FFF) * 8) & 0xFFFFFF)
           + *(s32 *)(D_800922F0 + 0x1188);
    func_80036DB0(b);
}
