#include "common.h"

void _SsSndNextSep(s32 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    s32 *temp_a0;
    s32 temp_a2;
    void *temp_a2_2;
    void *temp_a3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_a0 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_a2 = arg1 * 0xB0;
    temp_a3 = *temp_a0 + temp_a2;
    M2C_FIELD(temp_a3, s8 *, 0x20) = 1;
    M2C_FIELD(temp_a3, s8 *, 0x21) = 0;
    temp_v1 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_v1, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x98) & ~0x100);
    temp_v1_2 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_v1_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x98) & ~8);
    temp_v1_3 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_v1_3, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x98) & ~2);
    temp_v1_4 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_v1_4, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x98) & ~4);
    temp_v1_5 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_v1_5, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x98) & ~0x200);
    M2C_FIELD(temp_a3, s8 *, 0x14) = 1;
    M2C_FIELD(temp_a3, s32 *, 0) = (s32) M2C_FIELD(temp_a3, s32 *, 4);
    temp_a2_2 = temp_a2 + *temp_a0;
    M2C_FIELD(temp_a2_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_a2_2, s32 *, 0x98) | 1);
}
