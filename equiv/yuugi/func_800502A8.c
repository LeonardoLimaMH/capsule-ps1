#include "common.h"

void func_800502A8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    extern M2C_UNK (*D_80096630)(s32 *, M2C_UNK, M2C_UNK);
    extern M2C_UNK D_80096638[];
    M2C_UNK (*temp_s3)(s32 *, M2C_UNK, M2C_UNK);
    s32 temp_a0;
    u32 temp_v1;
    u32 var_s0;

    if (*arg0 == 0) {
        *arg0 = 1;
    }
    var_s0 = *(u32 *)0x150;
    temp_s3 = D_80096630;
    temp_v1 = var_s0 + ((*(s32 *)0x154 / 80) * 0x50);
    if (var_s0 < temp_v1) {
loop_4:
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0);
        if ((temp_a0 != 0) && (strcmp(temp_a0, D_80096638) == 0)) {
            M2C_FIELD(var_s0, M2C_UNK (**)(s32 *, M2C_UNK, M2C_UNK), 0x34) = temp_s3;
        } else {
            var_s0 += 0x50;
            if (var_s0 < temp_v1) {
                goto loop_4;
            }
        }
    }
    D_80096630(arg0, arg1, arg2);
}
