#include "common.h"

void func_800DCE78(void) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80119710[];
    extern s8 D_8011974D[];
    s32 temp_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = M2C_FIELD(D_80119710, s32 *, 0) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = M2C_FIELD(D_80119710, s32 *, 0) + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 0) = var_v0;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_2 = M2C_FIELD(D_80119710, s32 *, 4) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_2 = M2C_FIELD(D_80119710, s32 *, 4) + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 4) = var_v0_2;
    temp_a0 = M2C_FIELD(D_80119710, s32 *, 8);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_3 = temp_a0 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_3 = temp_a0 + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 8) = var_v0_3;
    func_800FE98C(temp_a0, D_8008ED68, D_80119710);
    (*D_8011974D) = 0;
}
