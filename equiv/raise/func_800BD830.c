#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BD830(void) {
    s32 r = func_800BDE30(0x19, 0x38, -0x50, 4, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x5F4), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x5F0) = r;
    return r;
}
