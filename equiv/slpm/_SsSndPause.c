#include "common.h"

void _SsSndPause(s32 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    s32 *temp_s2;
    s32 temp_a1;
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_s1;

    temp_s2 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_s0 = arg1 * 0xB0;
    temp_a1 = arg1 << 8;
    temp_s1 = *temp_s2 + temp_s0;
    _SsVmSeqKeyOff((s16) (arg0 | temp_a1), temp_a1);
    M2C_FIELD(temp_s1, s8 *, 0x14) = 0;
    temp_s0_2 = temp_s0 + *temp_s2;
    M2C_FIELD(temp_s0_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_s0_2, s32 *, 0x98) & ~2);
}
