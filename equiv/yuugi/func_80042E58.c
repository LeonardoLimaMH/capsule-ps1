#include "common.h"

s32 func_80042E58(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80071D88[];
    extern u16 * D_80072E14[];
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1_2;
    u16 temp_v1;
    u16 var_s3;
    void *temp_a2;

    temp_a0 = (arg0 * 4) + (u8 *)D_80071D88;
    temp_s4 = *temp_a0;
    if (arg1 != temp_s4) {
        temp_a2 = D_80071D88 - 4;
        if (M2C_FIELD(D_80071D88, u16 *, -4) != 0) {
            temp_v1 = *(*D_80072E14);
            *(*D_80072E14) = 0;
            temp_s3 = temp_v1 & 0xFFFF;
            if (arg1 != 0) {
                temp_v1_2 = 1 << arg0;
                *temp_a0 = arg1;
                var_s3 = temp_s3 | temp_v1_2;
                M2C_FIELD(temp_a2, u16 *, 0x30) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x30) | temp_v1_2);
            } else {
                temp_v0 = ~(1 << arg0);
                *temp_a0 = 0;
                var_s3 = temp_s3 & temp_v0;
                M2C_FIELD(D_80071D88, u16 *, 0x2C) = (u16) (M2C_FIELD(D_80071D88, u16 *, 0x2C) & temp_v0);
            }
            if (arg0 == 0) {
                temp_s0 = arg1 == 0;
                func_8004FF7C(temp_s0, D_80071D88, temp_a2);
                func_8004FF8C(3, temp_s0);
            }
            if (arg0 == 4) {
                func_8004FF8C(0, arg1 == 0);
            }
            if (arg0 == 5) {
                func_8004FF8C(1, arg1 == 0);
            }
            if (arg0 == 6) {
                func_8004FF8C(2, arg1 == 0);
            }
            *(*D_80072E14) = var_s3;
        }
    }
    return temp_s4;
}
