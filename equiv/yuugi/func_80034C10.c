#include "common.h"

extern u16 D_800922F0;

void func_80034C10(s32 x) {
    s32 b[4];
    s32 a[4];

    if (D_800922F0 & 0x80) {
        ((u8 *)a)[0] = 0x45;
        ((u8 *)a)[1] = 0;
        a[2] = (s16)x;
        func_80036DB0(a);
        ((u8 *)b)[0] = 0x49;
        func_80036DB0(b);
    }
    ((u8 *)b)[0] = 0x47;
    func_80036DB0(b);
}
