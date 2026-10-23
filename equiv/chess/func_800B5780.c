#include "common.h"

void func_800B5780(s32 arg0) {
    M2C_UNK var_a0;
    s32 var_v1;
    u8 temp_s1;
    u8 temp_s3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a0 = temp_s0 + temp_s1;
    temp_s3 = M2C_FIELD(temp_a0, u8 *, 0x5FB);
    temp_s2 = temp_s0 + ((temp_s1 * 0x2E8) + 0x18) + (temp_s3 * 0x7C);
    if (func_800C9414(temp_a0) == 0) {
        M2C_FIELD(temp_s0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
        if (M2C_FIELD(temp_s2, u8 *, 0) == 0x17) {
            if ((M2C_FIELD(temp_s2, u8 *, 0x29) != 1) || (M2C_FIELD(temp_s0, u8 *, 0x60D) == 0) || (var_a0 = 0xA, (temp_s3 == 5))) {
                goto block_6;
            }
        } else {
block_6:
            if ((M2C_FIELD(temp_s2, u8 *, 0) != 0x52) || (var_a0 = 0xA, (M2C_FIELD(temp_s2, u8 *, 0x29) != 1))) {
                var_v1 = 0;
                if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
                    var_v1 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
                }
                if (var_v1 == 0) {
                    var_a0 = 3;
                    if (M2C_FIELD((temp_s0 + (temp_s1 * 6)), u8 *, 0x5ED) != 4) {

                    } else {
                        goto block_15;
                    }
                } else {
                    var_a0 = 0xA;
                    if (M2C_FIELD((temp_s0 + (temp_s1 * 6)), u8 *, 0x5ED) != 4) {
                        func_800CAE14(arg0);
block_15:
                        var_a0 = 0xA;
                    }
                }
            }
        }
        func_800125AC(var_a0);
    }
}
