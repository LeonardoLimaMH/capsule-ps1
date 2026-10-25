#include "common.h"

s32 func_800A8FF0(void) {
    extern s32 D_80069B28[];
    extern u8 D_800900C0[];
    extern u8 D_80091618[];
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    s32 var_v1_2;

    if ((*D_80069B28) != 0) {
        func_80023F68();
        return 0;
    }
    var_s1 = 1;
    do {
        temp_v0 = func_800B1260(var_s1);
        temp_v1 = temp_v0 & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            var_v1 = 8;
            if (M2C_FIELD(((temp_v1 * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                var_v1 = temp_v0;
            }
            temp_v1_2 = var_v1 & 0xFFFF;
            if ((temp_v1_2 == 1) || (temp_v1_2 == 5) || (var_a1 = 2, (temp_v1_2 == 3))) {
                var_a1 = 3;
            }
            var_a0 = 0;
            if (var_a1 != 0) {
                do {
                    var_v1_2 = var_a0;
                    if (var_s1 != 1) {
                        var_v1_2 = var_a0 + 3;
                    }
                    *(s32 *)((var_v1_2 * 0xBC) + D_800900C0) = -1;
                    var_a0 += 1;
                } while (var_a0 < var_a1);
            }
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    var_s1_2 = 1;
    do {
        temp_s0 = func_800B1260(var_s1_2) & 0xFFFF;
        if ((temp_s0 != 0xFFFF) && (M2C_FIELD(((temp_s0 * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF)) {
            func_800CD288(var_s1_2, 1);
            if (func_800E16AC(temp_s0) != 1) {
                func_800A1F44(var_s1_2, 0, 0);
            }
        }
        var_s1_2 -= 1;
    } while (var_s1_2 >= 0);
    return -1;
}
