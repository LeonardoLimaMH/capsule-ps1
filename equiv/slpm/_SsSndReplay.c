#include "common.h"

void _SsSndReplay(s32 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    s32 *temp_a0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_a0 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_v0 = arg1 * 0xB0;
    M2C_FIELD((*temp_a0 + temp_v0), s8 *, 0x14) = 1;
    temp_v0_2 = temp_v0 + *temp_a0;
    M2C_FIELD(temp_v0_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x98) & ~8);
}
