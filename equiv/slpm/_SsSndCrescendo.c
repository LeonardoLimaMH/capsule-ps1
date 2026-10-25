#include "common.h"

void _SsSndCrescendo(s32 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    u16 sp10;
    u16 sp12;
    s16 temp_a2;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s16 var_a0_2;
    s32 *temp_s3;
    u32 temp_a1;
    u32 temp_s2;
    u32 temp_v0;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_a2;
    u16 temp_v0_2;
    u16 temp_v0_4;
    u16 temp_v1_2;
    void *temp_s0;
    void *temp_v0_6;
    void *temp_v1_3;
    void *var_v0;

    temp_s3 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_s2 = arg1 * 0xB0;
    temp_s0 = *temp_s3 + temp_s2;
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 0xA0) - 1;
    M2C_FIELD(temp_s0, s32 *, 0xA0) = temp_v0;
    if (temp_v0 < 0) {
        var_v0 = temp_s2 + *temp_s3;
        goto block_20;
    }
    temp_a2 = M2C_FIELD(temp_s0, s16 *, 0x4C);
    if (temp_a2 > 0) {
        var_a0 = arg1 << 8;
        if ((temp_v0 % temp_a2) == 0) {
            temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x4A) - 1;
            M2C_FIELD(temp_s0, u16 *, 0x4A) = temp_v0_2;
            if (!(temp_v0_2 & 0x8000)) {
                temp_v0_3 = arg0 | (arg1 << 8);
                _SsVmGetSeqVol(temp_v0_3, &sp10, &sp12, arg0);
                temp_a1 = sp10 + 1;
                var_a0_2 = temp_v0_3;
                if ((sp10 + (s16) M2C_FIELD(temp_s0, u16 *, 0x4A)) >= temp_a1) {
                    var_a1 = temp_a1 & 0xFFFF;
                    var_a2 = sp12 + 1;
                    goto block_14;
                }
            } else {
                goto block_15;
            }
            goto block_16;
        }
    } else {
        var_a0 = arg1 << 8;
        if (temp_a2 < 0) {
            temp_v0_4 = M2C_FIELD(temp_s0, u16 *, 0x4A) + (u16) M2C_FIELD(temp_s0, s16 *, 0x4C);
            M2C_FIELD(temp_s0, u16 *, 0x4A) = temp_v0_4;
            if (!(temp_v0_4 & 0x8000)) {
                temp_v0_5 = arg0 | (arg1 << 8);
                _SsVmGetSeqVol(temp_v0_5, &sp10, &sp12, arg0);
                temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x4C);
                if (((sp10 - temp_v1) >= 0x7F) && ((sp12 - temp_v1) >= 0x7F)) {
                    _SsVmSetSeqVol(temp_v0_5, 0x7F, 0x7F, 1);
                    temp_v0_6 = temp_s2 + *temp_s3;
                    M2C_FIELD(temp_v0_6, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v0_6, s32 *, 0x98) & ~0x10);
                }
                temp_v1_2 = (u16) M2C_FIELD(temp_s0, s16 *, 0x4C);
                if (((M2C_FIELD(temp_s0, s32 *, 0x9C) - M2C_FIELD(temp_s0, s32 *, 0xA0)) * -M2C_FIELD(temp_s0, s16 *, 0x4C)) < M2C_FIELD(temp_s0, s16 *, 0x48)) {
                    var_a0_2 = arg0 | (arg1 << 8);
                    var_a1 = (sp10 - temp_v1_2) & 0xFFFF;
                    var_a2 = sp12 - temp_v1_2;
block_14:
                    _SsVmSetSeqVol(var_a0_2, var_a1, var_a2 & 0xFFFF, 1);
                }
            } else {
block_15:
                _SsVmSetSeqVol((s16) (arg0 | (arg1 << 8)), 0x7F, 0x7F, 1);
                temp_v1_3 = temp_s2 + *temp_s3;
                M2C_FIELD(temp_v1_3, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x98) & ~0x10);
            }
block_16:
            var_a0_3 = arg0 << 0x10;
            if (M2C_FIELD(temp_s0, s32 *, 0xA0) != 0) {
                var_a0 = arg1 << 8;
                if ((s16) M2C_FIELD(temp_s0, u16 *, 0x4A) <= 0) {
                    var_a0_3 = arg0 << 0x10;
                    goto block_19;
                }
            } else {
block_19:
                var_v0 = (arg1 * 0xB0) + *(s16 *)(D_801373F0 + (var_a0_3 >> 0xE));
block_20:
                M2C_FIELD(var_v0, s32 *, 0x98) = (s32) (M2C_FIELD(var_v0, s32 *, 0x98) & ~0x10);
                var_a0 = arg1 << 8;
            }
        }
    }
    _SsVmGetSeqVol((s16) (arg0 | var_a0), temp_s0 + 0x5C, temp_s0 + 0x5E);
}
