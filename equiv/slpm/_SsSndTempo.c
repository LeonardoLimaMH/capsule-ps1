#include "common.h"

void _SsSndTempo(s32 arg0, s16 arg1) {
    extern s32 D_801373EC[];
    extern u8 D_801373F0[];
    s16 temp_a0;
    s32 *temp_a2;
    s32 *temp_t1;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1_4;
    s32 var_v0_2;
    u32 temp_a0_2;
    u32 temp_lo;
    u32 temp_t0_2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 var_v0;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1;
    void *var_v1;

    temp_t1 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_t0 = arg1 * 0xB0;
    temp_a3 = *temp_t1 + temp_t0;
    temp_v0 = M2C_FIELD(temp_a3, s32 *, 0xA8) - 1;
    M2C_FIELD(temp_a3, s32 *, 0xA8) = temp_v0;
    if (temp_v0 < 0) {
        temp_v1 = temp_t0 + *temp_t1;
        M2C_FIELD(temp_v1, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x98) & ~0x40);
        var_v1 = temp_t0 + *temp_t1;
        goto block_18;
    }
    temp_a0 = M2C_FIELD(temp_a3, s16 *, 0x4E);
    if (temp_a0 > 0) {
        if ((temp_v0 % temp_a0) == 0) {
            temp_v1_2 = M2C_FIELD(temp_a3, u32 *, 0x94);
            temp_a0_2 = M2C_FIELD(temp_a3, u32 *, 0xAC);
            var_v0 = temp_v1_2 - 1;
            if ((temp_a0_2 < temp_v1_2) || (var_v0 = temp_v1_2 + 1, ((temp_v1_2 < temp_a0_2) != 0))) {
                M2C_FIELD(temp_a3, u32 *, 0x94) = var_v0;
            }
            goto block_13;
        }
    } else {
        temp_v1_3 = M2C_FIELD(temp_a3, u32 *, 0x94);
        temp_t0_2 = M2C_FIELD(temp_a3, u32 *, 0xAC);
        temp_v0_2 = temp_v1_3 + temp_a0;
        if (temp_t0_2 < temp_v1_3) {
            M2C_FIELD(temp_a3, u32 *, 0x94) = temp_v0_2;
            var_v0_2 = temp_v0_2 < temp_t0_2;
            goto block_11;
        }
        temp_v0_3 = temp_v1_3 - temp_a0;
        if (temp_v1_3 < temp_t0_2) {
            M2C_FIELD(temp_a3, u32 *, 0x94) = temp_v0_3;
            var_v0_2 = (u32) M2C_FIELD(temp_a3, u32 *, 0xAC) < temp_v0_3;
block_11:
            if (var_v0_2 != 0) {
                M2C_FIELD(temp_a3, u32 *, 0x94) = M2C_FIELD(temp_a3, u32 *, 0xAC);
            }
        }
block_13:
        temp_lo = (u32) (M2C_FIELD(temp_a3, s16 *, 0x50) * M2C_FIELD(temp_a3, u32 *, 0x94) * 0xA) / (u32) ((*D_801373EC) * 0x3C);
        M2C_FIELD(temp_a3, s16 *, 0x54) = (s16) temp_lo;
        if ((temp_lo << 0x10) <= 0) {
            M2C_FIELD(temp_a3, s16 *, 0x54) = 1;
        }
        if ((M2C_FIELD(temp_a3, s32 *, 0xA8) == 0) || (M2C_FIELD(temp_a3, u32 *, 0x94) == M2C_FIELD(temp_a3, u32 *, 0xAC))) {
            temp_a2 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
            temp_v1_4 = arg1 * 0xB0;
            temp_a1 = temp_v1_4 + *temp_a2;
            M2C_FIELD(temp_a1, s32 *, 0x98) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x98) & ~0x40);
            var_v1 = temp_v1_4 + *temp_a2;
block_18:
            M2C_FIELD(var_v1, s32 *, 0x98) = (s32) (M2C_FIELD(var_v1, s32 *, 0x98) & ~0x80);
        }
    }
}
