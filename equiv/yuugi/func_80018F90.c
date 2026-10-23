#include "common.h"

s32 func_80018F90(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 var_v0;

    temp_s2 = (arg1 + 0x160) & 0xFFFF;
    func_80020688(-0x9C, 0x34, 0x80, 0x30, 0x3A0, 0, 0x3F0, temp_s2, 0x80, 0x80, 0x80, 0, 0, 0);
    var_v0 = 1;
    if (!((arg0 / 20) & 1)) {
        func_80020688(-0x40, -0x18, 0x80, 0x10, 0x3A0, 0x30, 0x3F0, temp_s2, 0x80, 0x80, 0x80, 0, 0, 0);
        var_v0 = 0;
    }
    return var_v0;
}
