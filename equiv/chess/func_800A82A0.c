#include "common.h"

void func_800A82A0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x84) + 0x10000;
    M2C_FIELD(arg0, s32 *, 0x84) = temp_v1;
    if ((temp_v1 & 0xFF0000) > 0x20000) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x8C);
        temp_v1_2 = *arg2 - (temp_a3 - 8);
        var_v0 = temp_v1_2;
        if (temp_v1_2 < 0) {
            var_v0 = temp_v1_2 + 7;
        }
        var_v0_2 = temp_a3 + 7;
        if ((temp_v1_2 - ((var_v0 >> 3) * 8)) < 5) {
            var_v0_2 = temp_a3 + 1;
        }
        *arg2 = var_v0_2;
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) & 0xFF00FFFF);
    } else {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x8C);
    }
    temp_v1_3 = *arg2;
    var_v0_3 = temp_v1_3;
    if (temp_v1_3 < 0) {
        var_v0_3 = temp_v1_3 + 7;
    }
    *arg2 = temp_v1_3 - ((var_v0_3 >> 3) * 8);
    *arg1 = 1;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
}
