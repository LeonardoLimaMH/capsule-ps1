#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BC31C(void) {
    s32 r = func_800BC8FC(0x1A, -0xF8, 0x10, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x11C), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x118) = r;
    return r;
}
