#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BC5FC(void) {
    s32 r = func_800BC8FC(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x310), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x30C) = r;
    return r;
}
