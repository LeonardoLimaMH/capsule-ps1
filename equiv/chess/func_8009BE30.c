#include "common.h"

void func_8009BE30(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *temp_s0;

    var_a3 = 0;
    temp_s0 = arg0 + ((arg1 * 0x2E8) + 0x5E8) + (arg2 * 0x7C);
    if (arg2 != 5) {
        var_a3 = func_800A89C8(arg0, arg1, arg2) != 0;
    } else if (((u8) M2C_FIELD(temp_s0, u8 *, 0x2A) < 0xAU) || (arg1 != (M2C_FIELD(temp_s0, u8 *, 0x2A) - 0xA))) {
        var_a3 = 1;
    }
    if (var_a3 == 0) {
        func_8001A49C(func_800A8954((s32) M2C_FIELD(temp_s0, u8 *, 0x2A)));
    }
}
