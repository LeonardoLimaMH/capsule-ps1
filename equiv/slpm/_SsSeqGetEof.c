#include "common.h"

void _SsSeqGetEof(s32 arg0, s16 arg1) {
    extern u8 D_801373F0[];
    s32 *temp_a3;
    s32 temp_a2;
    s32 var_v1;
    s8 temp_v1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    temp_a3 = ((s32) (arg0 << 0x10) >> 0xE) + D_801373F0;
    temp_a2 = arg1 * 0xB0;
    temp_s0 = *temp_a3 + temp_a2;
    temp_v1 = M2C_FIELD(temp_s0, s8 *, 0x20);
    temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x21) + 1;
    M2C_FIELD(temp_s0, u8 *, 0x21) = temp_v0;
    if (temp_v1 == 0) {
        M2C_FIELD(temp_s0, s32 *, 0x88) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x90) = 0;
        if (M2C_FIELD((temp_a2 + *temp_a3), s32 *, 0x98) & 0x400) {
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD(temp_s0, s32 *, 0xC);
            return;
        }
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
        return;
    }
    if ((s8) temp_v0 < temp_v1) {
        M2C_FIELD(temp_s0, s32 *, 0x88) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x90) = 0;
        if (M2C_FIELD((temp_a2 + *temp_a3), s32 *, 0x98) & 0x400) {
            var_v1 = M2C_FIELD(temp_s0, s32 *, 0xC);
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD(temp_s0, s32 *, 0xC);
        } else {
            var_v1 = M2C_FIELD(temp_s0, s32 *, 4);
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
        }
        M2C_FIELD(temp_s0, s32 *, 8) = var_v1;
        return;
    }
    temp_v1_2 = temp_a2 + *temp_a3;
    M2C_FIELD(temp_v1_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x98) & ~1);
    temp_v1_3 = temp_a2 + *temp_a3;
    M2C_FIELD(temp_v1_3, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x98) & ~8);
    temp_v1_4 = temp_a2 + *temp_a3;
    M2C_FIELD(temp_v1_4, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x98) & ~2);
    temp_v1_5 = temp_a2 + *temp_a3;
    M2C_FIELD(temp_v1_5, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x98) | 0x200);
    temp_v1_6 = temp_a2 + *temp_a3;
    M2C_FIELD(temp_v1_6, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x98) | 4);
    M2C_FIELD(temp_s0, s8 *, 0x14) = 0;
    if (M2C_FIELD((temp_a2 + *temp_a3), s32 *, 0x98) & 0x400) {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) M2C_FIELD(temp_s0, s32 *, 0xC);
    } else {
        M2C_FIELD(temp_s0, s32 *, 8) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
    }
    if (M2C_FIELD(temp_s0, s8 *, 0x22) != -1) {
        M2C_FIELD(temp_s0, s8 *, 0x14) = 0;
        _SsSndNextSep(M2C_FIELD(temp_s0, s8 *, 0x22), M2C_FIELD(temp_s0, s8 *, 0x23), temp_a2, temp_a3);
        _SsVmSeqKeyOff((s16) (arg0 | (arg1 << 8)));
    }
    _SsVmSeqKeyOff((s16) (arg0 | (arg1 << 8)));
    M2C_FIELD(temp_s0, s32 *, 0x90) = (s32) M2C_FIELD(temp_s0, s16 *, 0x54);
}
