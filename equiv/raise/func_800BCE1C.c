#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BCE1C(void) {
    s32 r = func_800BD2E0(0x1A, 0x1C0, 0x48, 5, 0, D_800EE5F0, *(s32 *)(D_800EFF58 + 0x358), 1, 0, 0, 2, 0, 0);

    *(s32 *)(D_800EFF58 + 0x354) = r;
    return r;
}
