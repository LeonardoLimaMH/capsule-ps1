#include "common.h"

s32 func_800DBBC4(s32 arg0) {
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;
    u8 *temp_s0_3;

    temp_s0 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s0, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_s0_2 = func_800202A4(temp_a0);
        func_800D90C0(temp_s0);
        temp_s0_3 = (temp_s0_2 & 0xFF) + D_80119660;
        func_800CFFF8((temp_s0 & 0x80) | 6, (*temp_s0_3 / 13) & 0xFF, (*temp_s0_3 % 13) & 0xFF, MULTU_HI(*temp_s0_3, 0x4EC4EC4F));
        M2C_FIELD(D_8011970A, s8 *, 0) = (s8) (*temp_s0_3 / 13);
        var_v0 = 1;
        M2C_FIELD(D_8011970A, s8 *, 1) = (s8) (*temp_s0_3 % 13);
    }
    return var_v0;
}
