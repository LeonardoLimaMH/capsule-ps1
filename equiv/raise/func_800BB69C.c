#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB69C(void) {
    s32 r = func_800BBA38(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x70), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x6C) = r;
    return r;
}
