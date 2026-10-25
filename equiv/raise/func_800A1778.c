#include "common.h"

s32 func_800A1778(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_800F2D30[];
    extern u8 D_800F2D98[];
    extern int func_80012508();
    s32 temp_a0;
    s32 temp_s3;
    s32 var_v0;
    u16 temp_s2;
    u8 *temp_s0;
    u8 *var_v0_2;
    u8 *var_v0_3;
    u8 temp_s1;
    u8 var_v1;

    temp_s2 = *(u16 *)(((*D_8006AF80) * 0x1A8) + D_80091618);
    temp_a0 = temp_s2 & 0xFFFF;
    temp_s0 = temp_a0 + D_800F2D30;
    temp_s1 = *temp_s0;
    var_v0 = 1;
    if (temp_s1 == 0xFF) {
        var_v1 = *temp_s0;
        temp_s3 = func_800A8CB4(temp_a0);
        if (var_v1 == temp_s1) {
            var_v1 = 0;
            var_v0_2 = D_800F2D98;
loop_3:
            if (*var_v0_2 != (temp_s2 & 0xFF)) {
                var_v1 += 1;
                var_v0_2 = &(D_800F2D98)[var_v1];
                if ((s32) var_v1 >= 6) {

                } else {
                    goto loop_3;
                }
            }
            if (var_v1 == 6) {
                var_v1 = 0;
                var_v0_3 = D_800F2D98;
loop_8:
                if (*var_v0_3 != 0xFF) {
                    var_v1 += 1;
                    var_v0_3 = &(D_800F2D98)[var_v1];
                    if ((s32) var_v1 >= 6) {

                    } else {
                        goto loop_8;
                    }
                }
                if (var_v1 == 6) {
                    var_v1 = 5;
                }
                (D_800F2D98)[var_v1] = (u8) temp_s2;
            }
        }
        func_8001A464(temp_s3, (var_v1 * 0x15800) + 0x80146A18);
        func_80019F30(temp_s3, &func_80012508);
        var_v0 = 0;
    }
    return var_v0;
}
