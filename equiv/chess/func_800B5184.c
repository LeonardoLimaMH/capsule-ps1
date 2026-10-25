#include "common.h"

void func_800B5184(s32 arg0) {
    extern u8 D_80063940[];
    extern u8 D_80100C20[];
    s32 var_a0;
    s32 var_v1;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_a1;
    void *temp_s0;
    void *temp_s1;
    void *temp_s4;

    temp_s0 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a1 = temp_s0 + temp_s2;
    temp_s3 = M2C_FIELD(temp_a1, u8 *, 0x5FB);
    temp_s1 = temp_s0 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s3 * 0x7C);
    var_a0 = 0;
    temp_s4 = func_800A8E84(temp_s0, temp_a1);
    if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
        var_a0 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
    }
    if (var_a0 != 0) {
        M2C_FIELD(temp_s1, u8 *, 0x11) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x11) + M2C_FIELD(temp_s4, u8 *, 0x14));
    }
    if (temp_s3 != 5) {
        (*(void (**)())((((u32) M2C_FIELD(((M2C_FIELD(temp_s1, u8 *, 0) * 0x3C) + D_80063940), u32 *, 8) >> 6) & 0x3C) + D_80100C20))(temp_s0, temp_s1, temp_s2, temp_s3);
    } else {
        func_800B5C4C(temp_s0, temp_s1, temp_s2, 5);
    }
    var_v1 = 0;
    M2C_FIELD(temp_s0, s8 *, 0x706) = 0;
    if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
        var_v1 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
    }
    if (var_v1 != 0) {
        M2C_FIELD(temp_s1, u8 *, 0x11) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x11) - M2C_FIELD(temp_s4, u8 *, 0x14));
    }
    func_800125D8();
}
