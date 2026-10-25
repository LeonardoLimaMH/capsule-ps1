#include "common.h"

s32 func_800A0930(void *arg0, s32 arg1, s32 arg2) {
    extern u8 D_80065310[];
    s32 temp_s0;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    u8 temp_a1;

    var_s1 = -1;
    if (M2C_FIELD((arg0 + arg1), u8 *, 0x5E4) != 0xFF) {
        temp_s0 = arg1 != M2C_FIELD(arg0, u8 *, 0xBCA);
        temp_s5 = temp_s0;
        if (func_800202A4(5) == 0) {
            if (M2C_FIELD(arg0, u8 *, 0xCDC) == 5) {
                if (temp_s0 == 0) {
                    if (arg2 == 0) {
                        var_s1 = 0x11;
                    }
                } else if (arg2 != 0) {
                    var_s1 = 0x12;
                }
            } else {
                temp_v0 = func_800CB10C(arg0, arg0 + 0x5D0, arg1);
                if (temp_v0 == 2) {
                    if (temp_s0 == 0) {
                        if (arg2 == 0) {
                            var_s1 = 0xD;
                        }
                    } else if (arg2 != 0) {
                        var_s1 = 0xF;
                    }
                } else if (temp_v0 == 0) {
                    if (temp_s5 == 0) {
                        if (arg2 == 0) {
                            var_s1 = 0xE;
                        }
                    } else if (arg2 != 0) {
                        var_s1 = 0x10;
                    }
                }
            }
        }
    }
    if (var_s1 != -1) {
        temp_a1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
        if (temp_a1 >= 8U) {
            var_a0 = 0;
        } else {
            var_a0 = (arg1 * 0x980) - 0x5580;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (*(s32 *)((var_s1 * 4) + (*((temp_a1 * 4) + D_80065310) + var_a0)) + var_a0);
        return 1;
    }
    return 0;
}
