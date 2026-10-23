#include "common.h"

s32 func_800ACFA8(void *arg0) {
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x5D0);
    var_v0 = 0;
    if (temp_s1 == 1) {
        var_v0 = 0;
        if (M2C_FIELD(arg0, u8 *, 1) == 0) {
            temp_v0 = func_800CB24C(arg0, arg0 + 0x5D0, 1);
            var_v0 = 0;
            if (M2C_FIELD(arg0, u8 *, 0xBED) != temp_v0) {
                if (temp_v0 == temp_s1) {
                    var_v1 = 0x7014;
                } else if (temp_v0 == 2) {
                    var_v1 = 0x7013;
                    if (M2C_FIELD(arg0, u8 *, 0x5E1) != 0) {
                        var_v1 = 0x7012;
                    }
                } else {
                    var_v1 = 0x7012;
                    if (M2C_FIELD(arg0, u8 *, 0x5E1) != 0) {
                        var_v1 = 0x7013;
                    }
                }
                M2C_FIELD(arg0, s16 *, 8) = var_v1;
                func_80034BD8(-3, 0);
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
