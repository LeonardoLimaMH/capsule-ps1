#include "common.h"

s32 func_800D0D4C(s32 arg0) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    extern M2C_UNK D_80103D38[];
    s16 var_v0;
    s32 temp_s1;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_s0;
    void *temp_s3;

    temp_s1 = func_800B1260() & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    M2C_FIELD(temp_s0, u16 *, 0x332) = (u16) M2C_FIELD(temp_s0, u16 *, 0x336);
    temp_v0 = M2C_FIELD(temp_s0, u16 *, 0x338);
    M2C_FIELD(temp_s0, u16 *, 0x334) = temp_v0;
    func_800CEC68(arg0, (s16) M2C_FIELD(temp_s0, u16 *, 0x332), (s16) temp_v0);
    M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
    M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
    temp_s3 = (M2C_FIELD(D_80103D38, s16 *, 2) * 6) + D_80103D38;
    M2C_FIELD(temp_s0, u16 *, 0x336) = (u16) M2C_FIELD(temp_s3, u16 *, 8);
    M2C_FIELD(temp_s0, u16 *, 0x338) = (u16) M2C_FIELD(temp_s3, u16 *, 0xA);
    temp_v0_2 = func_800B24B8(arg0, M2C_FIELD(D_80103D38, s16 *, 2));
    M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_2;
    if ((s16) temp_v0_2 == -1) {
        M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
        goto block_6;
    }
    if ((s16) temp_v0_2 == 8) {
        M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
        goto block_6;
    }
    func_800CF418(arg0, (s16) temp_v0_2);
    temp_v0_3 = func_800CFF9C(arg0, (s16) M2C_FIELD(temp_s0, u16 *, 0x326), 1);
    M2C_FIELD(temp_s0, u16 *, 0x32C) = temp_v0_3;
    if ((s16) temp_v0_3 == 0xFF) {
block_6:
        func_800DCC94(arg0);
    }
    M2C_FIELD(((temp_s1 * 0x1A8) + D_80091618), s16 *, 0x90) = (s16) (1 - M2C_FIELD(temp_s3, u16 *, 0xC));
    M2C_FIELD(D_80103D38, u16 *, 6) = (u16) (M2C_FIELD(D_80103D38, u16 *, 6) - 1);
    var_v0 = (u16) M2C_FIELD(D_80103D38, s16 *, 2) + 1;
    if (M2C_FIELD(D_80103D38, s16 *, 2) == 0x3F) {
        var_v0 = 0;
    }
    M2C_FIELD(D_80103D38, s16 *, 2) = var_v0;
    return 0;
}
