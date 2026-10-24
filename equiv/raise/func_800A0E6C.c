#include "common.h"

s32 func_800A0E6C(u8 arg0) {
    extern M2C_UNK D_800F2D30[];
    extern u8 D_800F2D98[];
    s32 var_a1;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a1;
    u8 *var_v0;
    u8 *var_v0_2;

    temp_a1 = (arg0 & 0xFFFF) + D_800F2D30;
    var_v1 = 0;
    if (*temp_a1 == 0xFF) {
        var_v0 = D_800F2D98;
loop_2:
        if (*var_v0 != (arg0 & 0xFF)) {
            var_v1 += 1;
            var_v0 = &(D_800F2D98)[var_v1];
            if (var_v1 >= 6) {

            } else {
                goto loop_2;
            }
        }
        var_a1 = var_v1;
        if (var_v1 == 6) {
            var_v1_2 = 0;
            var_v0_2 = D_800F2D98;
loop_7:
            if (*var_v0_2 != 0xFF) {
                var_v1_2 += 1;
                var_v0_2 = &(D_800F2D98)[var_v1_2];
                if (var_v1_2 < 6) {
                    goto loop_7;
                }
            }
            var_a1 = var_v1_2;
            if (var_a1 == 6) {
                var_a1 = 5;
            }
            (D_800F2D98)[var_a1] = arg0;
        }
    } else {
        var_a1 = (s32) *temp_a1;
    }
    return (var_a1 * 0x15800) + 0x80146A18;
}
