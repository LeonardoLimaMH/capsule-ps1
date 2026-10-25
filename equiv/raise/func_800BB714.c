#include "common.h"

void func_800BB714(void) {
    extern u8 D_800EE5F0[];
    extern s32 D_800EF2D8[];
    extern u8 D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0x74) = func_800BBA38(0x1A, 0x78, 0x120, 4, 0, D_800EE5F0, M2C_FIELD(D_800EFF58, s32 *, 0x78) + (*D_800EF2D8) + 1, 1, 0, 0, 2, 0, 0);
}
