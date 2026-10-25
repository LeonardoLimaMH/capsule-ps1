#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCF20(void) {
    s32 r = func_800BD2E0(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x41C), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x418) = r;
    return r;
}
