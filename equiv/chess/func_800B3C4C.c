#include "common.h"

s32 func_800B3C4C(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v1;
    u32 temp_a0;

    var_v1 = 0xB;
    if (arg1 != 0x4E) {
        temp_a0 = M2C_FIELD(arg0, u32 *, 0x10);
        if (!(temp_a0 & 3)) {
            if ((temp_a0 >> 0x15) & 7) {
                var_v1 = 3;
                if (((temp_a0 >> 2) & 0x1F) != 0x12) {
                    var_v1 = (((temp_a0 >> 0x11) & 0xF) == 6) * 2;
                }
            } else {
                var_v1 = 1;
            }
        } else {
            temp_a1 = (temp_a0 >> 2) & 0x1F;
            if (temp_a1 == 0xC) {
                var_v1 = 0xA;
            } else {
                var_v1 = 6;
                if ((temp_a0 & 0x1807C) != 0x8024) {
                    var_v1 = 9;
                    if (temp_a1 != 0x11) {
                        var_v1 = 6;
                        if (temp_a1 != 0xE) {
                            var_v1 = 7;
                            if (temp_a1 != 0x10) {
                                var_v1 = 8;
                                if (temp_a1 != 0xD) {
                                    var_v1 = 5;
                                    if ((temp_a0 >> 0x15) & 7) {
                                        var_v1 = 4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v1;
}
