#include "common.h"

void func_800A903C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a0;
    void *temp_a0;

    if (arg3 != 5) {
        func_80028200(M2C_FIELD((arg0 + ((arg3 * 0x7C) + (arg2 * 0x2E8))), u8 *, 0x5E8), 2);
        var_a0 = arg3 << 5;
    } else {
        func_80034AB0(0x48);
        var_a0 = arg3 << 5;
    }
    temp_a0 = arg1 + (((var_a0 - arg3) * 4) + (arg2 * 0x2E8));
    M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x30) | 0x100);
}
