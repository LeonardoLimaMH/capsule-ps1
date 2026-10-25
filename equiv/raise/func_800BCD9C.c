#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCD9C(void) {
    s32 r = func_800BD2E0(0x1A, -0xC0, 0x28, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x350), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x34C) = r;
    return r;
}
