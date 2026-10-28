#include "common.h"

void func_800B52FC(s32 arg0) {
    s32 var_a1;
    u8 temp_s2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1_2;

    temp_s1 = arg0 + 0x5D0;
    temp_a2 = arg0 + 0xCB0;
    temp_v1 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    var_a1 = 0;
    temp_s2 = M2C_FIELD((temp_s1 + temp_v1), u8 *, 0x5FB);
    M2C_FIELD(temp_s1, s8 *, 0x610) = 0;
    temp_s0 = temp_s1 + ((temp_v1 * 0x2E8) + 0x18) + (temp_s2 * 0x7C);
    do {
        temp_v1_2 = temp_a2 + var_a1;
        M2C_FIELD(temp_v1_2, u8 *, 4) = (u8) M2C_FIELD(((M2C_FIELD(temp_a2, u8 *, 0x26) * 2) + temp_a2 + var_a1), u8 *, 8);
        temp_v0 = M2C_FIELD((temp_s0 + var_a1), u8 *, 0x15);
        var_a1 += 1;
        M2C_FIELD(temp_v1_2, u8 *, 6) = temp_v0;
    } while (var_a1 < 2);
    M2C_FIELD(temp_a2, u8 *, 0x26) = (u8) (M2C_FIELD(temp_a2, u8 *, 0x26) + 1);
    M2C_FIELD(temp_s0, s8 *, 0x25) = func_800A8378(arg0);
    if (temp_s2 != 5) {
        if (M2C_FIELD(temp_s0, u8 *, 0) == 0x17) {
            if (M2C_FIELD(temp_s0, u8 *, 0x29) != 0) {
                M2C_FIELD(temp_s1, s8 *, 0x709) = 8;
                M2C_FIELD(temp_s1, s8 *, 0x708) = 8;
                M2C_FIELD(temp_s0, s8 *, 0x17) = 0x88;
                M2C_FIELD(temp_s0, s8 *, 0x23) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) | 0x80);
            } else {
                goto block_6;
            }
        } else {
            goto block_7;
        }
    } else {
block_6:
block_7:
        M2C_FIELD(temp_s1, s8 *, 0x709) = 0x1C;
        M2C_FIELD(temp_s1, s8 *, 0x708) = 0x1C;
        M2C_FIELD(temp_s0, s8 *, 0x17) = 0x82;
        M2C_FIELD(temp_s0, s8 *, 0x23) = 0;
    }
    func_800125D8();
}
