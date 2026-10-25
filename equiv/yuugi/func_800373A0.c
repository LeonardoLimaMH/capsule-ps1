#include "common.h"

extern u16 D_800922F0;

void func_800373A0(void) {
    s32 b[4];
    s32 a[4];

    if (D_800922F0 & 0xF) {
        ((u8 *)a)[0] = 0x2A;
        ((u8 *)a)[1] = 0;
        a[2] = -0x20;
        func_80036DB0(a);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
        ((u8 *)b)[0] = 0x11;
        func_80036DB0(b);
    }
}
