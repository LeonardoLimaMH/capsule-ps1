#include "common.h"

void func_800134BC(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK *var_a0;
    u16 temp_v0;
    u16 var_s1;

    if (M2C_FIELD(D_8008ED68, s32 *, 0xF8) == 0) {
        var_s1 = 0;
        var_a0 = D_8008ED68;
loop_2:
        if ((M2C_FIELD(var_a0, s32 *, 0x80) & 0x90F) == 0x90F) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xFE) != var_s1) {
                M2C_FIELD(D_8008ED68, u16 *, 0xFE) = var_s1;
                M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
            }
            temp_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xFC) + 1;
            M2C_FIELD(D_8008ED68, u16 *, 0xFC) = temp_v0;
            if ((u32) (temp_v0 & 0xFFFF) >= 0x41U) {
                M2C_FIELD(D_8008ED68, s32 *, 0xF4) = 1;
                ResetRCnt(0xF2000003);
                M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
                M2C_FIELD(D_8008ED68, u16 *, 0xFE) = 0xFFU;
            }
        } else {
            var_s1 += 1;
            var_a0 += 0x10;
            if ((s32) var_s1 < 2) {
                goto loop_2;
            }
        }
        if (var_s1 == 2) {
            M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
        }
    } else {
        M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
        M2C_FIELD(D_8008ED68, u16 *, 0xFE) = 0xFFU;
    }
}
