#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD920(void) {
    s32 r = func_800BDE30(0x1A, 0x10, 0x160, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x5B4), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x5B0) = r;
    return r;
}
