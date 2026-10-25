#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_8008F7E0[];

void func_80019DB4(s32 a0, u16 a1, s32 a2, s32 a3) {
    s32 s[10];

    s[0] = a2;
    s[1] = a1;
    func_800190F4(6, a3, s, a0);
    *(s32 *)(D_8008ED68 + 0xF8) = 1;
    D_8008F7E0[0x40C] = 1;
}
