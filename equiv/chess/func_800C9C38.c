#include "common.h"

s32 func_800C9C38(void *arg0, void *arg1) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0_2 = M2C_FIELD(arg0, u8 *, 0x15) - M2C_FIELD(arg1, u8 *, 0x15);
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 < 2) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x16) - M2C_FIELD(arg1, u8 *, 0x16);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        return var_v0 < 2;
    }
    return 0;
}
