#include "common.h"

void func_800DDBEC(void) {
    extern M2C_UNK D_80100F38[];
    s16 sp20;
    s16 sp22;
    u16 sp24;
    u16 sp26;
    s16 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    u16 temp_s0;
    u16 temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a0 = M2C_FIELD(temp_s2, s16 *, 0x5B0);
    temp_v1 = temp_a0 + 0x1F;
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = temp_a0 + 0x3E;
    }
    temp_v0 = temp_s2 + ((s32) ((temp_v1 - ((var_v0 >> 5) << 5)) << 0x10) >> 0xE);
    temp_s1 = M2C_FIELD(temp_v0, u16 *, 0x6B6);
    temp_s0 = M2C_FIELD(temp_v0, u16 *, 0x6B8);
    func_800DE304((s16) (M2C_FIELD(temp_v0, u16 *, 0x636) - 1), (s16) (M2C_FIELD(temp_v0, u16 *, 0x638) - 1), &sp20, &sp22);
    func_800DE35C((s16) temp_s0, sp20, sp22, M2C_FIELD(temp_s2, s16 *, 0x220), (s32) (s16) temp_s1, &sp24, &sp26);
    M2C_FIELD(temp_s2, u16 *, 0x1D0) = sp24;
    M2C_FIELD(temp_s2, u16 *, 0x1CC) = sp26;
}
