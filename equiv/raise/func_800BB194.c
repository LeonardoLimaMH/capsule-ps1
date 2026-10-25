#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EFF58[];

s32 func_800BB194(void) {
    s32 r = func_800BBA38(0x1A, 0x60, -0x30, 5, 0, D_800EE5D0, *(s32 *)(D_800EFF58 + 0x18), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x14) = r;
    return r;
}
