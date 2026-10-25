#include "common.h"

void func_800CD1A0(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    extern u8 D_800EFF58[];
    s16 temp_a0;
    s16 var_a2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;

    var_a2 = 0;
    temp_a3 = func_800A9658(arg1, arg1 << 0x10) << 0x10;
    if (temp_a3 > 0) {
        temp_a1 = arg1 + 1;
        do {
            temp_v0 = var_a2 / temp_a1;
            temp_v1 = var_a2 % temp_a1;
            temp_a0 = var_a2 + 1;
            var_a2 = temp_a0;
            *(((arg2 - ((s16) temp_v0 + 1)) * 8) + (((arg0 != 1) << 6) + D_800EFF58 + 0x94) + (arg3 - ((s16) temp_v1 + 1))) = 0;
        } while ((temp_a0 << 0x10) < temp_a3);
    }
}
