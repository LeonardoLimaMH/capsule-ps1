#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD8A8(void) {
    s32 r = func_800BDE30(0x1A, 0x50, -0x88, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x430), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x42C) = r;
    return r;
}
