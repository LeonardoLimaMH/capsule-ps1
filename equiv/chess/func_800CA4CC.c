#include "common.h"

s32 func_800CA4CC(void *arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        var_v0 = 0x7000;
        if (func_80020304(2) == 0) {
            return 0x7014;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x5D0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D4);
        var_v1 = 0x7000;
        if (temp_a0 >= 3U) {
            var_v1 = 0x7011;
            if (temp_a0 >= 6U) {
                var_v1 = 0x7010;
                if (temp_a0 == 6) {
                    var_v1 = 0x700F;
                }
            }
        }
        break;
    case 1:
        var_v1 = 0x7014;
        break;
    default:
        var_v1 = 0x7000;
        break;
    }
    var_v0 = var_v1;
    return var_v0;
}
