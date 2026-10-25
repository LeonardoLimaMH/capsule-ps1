#include "common.h"

void func_800C28A8(s32 arg0) {
    extern u16 D_8008EE4C[];
    M2C_UNK var_a0;
    s32 temp_t1;
    s32 temp_t2;
    u8 *temp_a0_2;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_t0;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_s0;
    void *temp_s1;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_a1 = arg0 + 0x5D0;
        temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
        temp_a0 = M2C_FIELD(temp_a1, u8 *, 0x60D);
        if (temp_a0 == 0) {
            M2C_FIELD(temp_a1, u8 *, 0x600) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x600) + 1);
        }
        M2C_FIELD((temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C)), s8 *, 0x17) = 1;
        func_800125D8(temp_a0, temp_a1);
        return;
    case 1:
        temp_s0 = arg0 + 0x5D0;
        temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
        temp_a1_2 = temp_s0 + temp_s3;
        temp_s2 = M2C_FIELD(temp_a1_2, u8 *, 0x5FB);
        temp_s1 = temp_s0 + ((temp_s3 * 0x2E8) + 0x18) + (temp_s2 * 0x7C);
        func_800FF740(temp_s0 + ((temp_s3 * 6) + 0x5EC), temp_a1_2);
        if ((M2C_FIELD(temp_s1, u8 *, 0) != 0x17) || (var_a0 = 2, (M2C_FIELD(temp_s1, u8 *, 0x29) != 1))) {
            var_a0 = 4;
            if (M2C_FIELD(temp_s0, u8 *, 0x60C) != 0) {
                var_a0 = 4;
                if ((func_800A8E34(temp_s0, temp_s3, temp_s2) == 0) && !(M2C_FIELD(temp_s0, u8 *, 0x611) & 1)) {
                    var_a0 = 2;
                }
            }
        }
        func_80012604(var_a0);
        M2C_FIELD(temp_s0, u8 *, 0x60C) = 0U;
        M2C_FIELD(temp_s0, s8 *, 0x60D) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x60E) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x60F) = 0;
        return;
    case 2:
        func_800C2524();
        return;
    case 3:
        func_800C26DC();
        return;
    case 4:
        temp_a1_3 = arg0 + 0x5D0;
        temp_t0 = M2C_FIELD(temp_a1_3, u8 *, 0x5FA);
        temp_t2 = temp_t0 * 0x2E8;
        temp_a2 = M2C_FIELD((temp_a1_3 + temp_t0), u8 *, 0x5FB);
        temp_t1 = temp_a2 * 0x7C;
        temp_a0_2 = temp_a1_3 + (temp_t2 + 0x18) + temp_t1;
        temp_a3 = *temp_a0_2;
        if ((temp_a3 == 0x17) || (temp_a3 == 0x52)) {
            M2C_FIELD((temp_a1_3 + (temp_t1 + temp_t2)), s8 *, 0x41) = 0;
        }
        if (temp_a2 != 5) {
            func_800A84A0(temp_a0_2, temp_t0, temp_a2, 0);
        }
        func_800125AC(0xB);
        /* fallthrough */
    default:
        return;
    }
}
