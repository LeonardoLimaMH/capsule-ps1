#include "common.h"

void func_800B6014(void) {
    extern u8 D_800859F2[];
    extern s32 D_800EF2EC[], D_800EFF70[], D_800EE5D0[];
    extern u8 D_800EEB9C[];
    u8 *b;
    s32 a, r;
    if (D_800859F2[0] & 8) {
        a = D_800EF2EC[0];
    } else {
        a = D_800EFF70[0];
    }
    r = func_80019F30(D_800EE5D0[0] | 0x60000, a + D_800EE5D0[6]);
    b = D_800EEB9C;
    *(s32 *)(*(s32 *)(b + 0x74C) + 0x18) = r;
    if (D_800859F2[0] & 8) {
        *(u32 *)(*(s32 *)(b + 0x754) + 0x38) &= ~1;
        *(u32 *)(*(s32 *)(b + 0x75C) + 0x38) &= ~1;
    } else {
        *(u32 *)(*(s32 *)(b + 0x754) + 0x38) |= 1;
        *(u32 *)(*(s32 *)(b + 0x75C) + 0x38) |= 1;
    }
}
