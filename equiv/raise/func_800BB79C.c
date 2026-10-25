#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB79C(void) {
    s32 r = func_800BBA38(0x19, 0x20, 0x38, 4, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x80), 0, 1, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x7C) = r;
    return r;
}
