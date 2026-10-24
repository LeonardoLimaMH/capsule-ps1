#include "common.h"

void func_8004506C(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80072F68[];
    s32 temp_a0;
    s32 var_s0;

    var_s0 = arg0;
    func_80045714(var_s0 & 0xFF);
    M2C_FIELD(D_80072F68, s32 *, 4) = 0;
    M2C_FIELD(D_80072F68, s32 *, 0) = 0;
    if (M2C_FIELD(D_80072F68, u8 *, -0x2C) & 0x10) {
        var_s0 = 5;
    }
    if (M2C_FIELD(D_80072F68, s32 *, -0x28) != 0x1F) {
        temp_a0 = var_s0 & 0xFF;
        if (M2C_FIELD(D_80072F68, s32 *, -0x28) != 0x20) {
            func_80045594(temp_a0, arg1);
        } else {
            func_8004530C(temp_a0, arg1);
        }
    } else {
        func_80045128(var_s0 & 0xFF, arg1);
    }
    if (M2C_FIELD(D_80072F68, s32 *, 0) == 0) {
        M2C_FIELD(D_80072F68, s32 *, -0x28) = 0x21;
    }
}
