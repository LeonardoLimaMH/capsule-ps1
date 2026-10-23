#include "common.h"

void func_800B80E4(s32 arg0) {
    extern M2C_UNK D_8006AF90[];
    extern M2C_UNK D_801018F8[];
    M2C_UNK var_a0;
    s8 temp_a1;
    u16 *var_v1;
    u16 var_v0;
    u8 temp_s0;
    u8 temp_s2;
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x716);
    temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    if (temp_s2 == 4) {
        var_a0 = 4;
        if (M2C_FIELD((arg0 + temp_s0), u8 *, 6) & 0x20) {
            var_a0 = 5;
        }
        temp_a1 = (func_800202A4(var_a0) * 2) + 5;
        M2C_FIELD(temp_s1, s8 *, 0x718) = temp_a1;
        func_80022E64((*D_801018F8), temp_a1, 0x13, 0);
        if (M2C_FIELD((temp_s1 + temp_s0), u8 *, 0x10) == 0) {
            var_v1 = (temp_s0 * 0x1E) + (*D_8006AF90);
            var_v0 = *var_v1 + 1;
        } else {
            var_v1 = (temp_s0 * 0x1E) + (*D_8006AF90);
            var_v0 = 1;
        }
        *var_v1 = var_v0;
    }
    func_8009CC34();
    if (temp_s2 == 4) {
        func_8009CBDC();
    }
    M2C_FIELD(temp_s1, s8 *, 0x717) = 0;
    func_800125D8();
}
