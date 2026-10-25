#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BB20C(void) {
    s32 r = func_800BBA38(0x1A, -0x180, 0x30, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x24), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x20) = r;
    return r;
}
