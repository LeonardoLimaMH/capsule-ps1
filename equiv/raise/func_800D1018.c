#include "common.h"

void func_800D1018(void) {
    extern M2C_UNK D_8006AFCC[];
    extern u16 D_800F1C98[];
    M2C_UNK *var_s0;
    s32 var_s2;
    u16 *var_s1;
    u16 temp_v1;

    var_s2 = 0;
    var_s1 = D_800F1C98;
    var_s0 = D_8006AFCC;
    do {
        if (M2C_FIELD(var_s0, u16 *, 0x30) == 1) {
            M2C_FIELD(var_s0, u16 *, 0x30) = 0U;
            temp_v1 = *var_s1;
            if (temp_v1 != 0xFFFF) {
                func_8003422C(temp_v1);
            }
        }
        var_s1 += 2;
        var_s2 += 1;
        var_s0 += 2;
    } while (var_s2 < 0xB);
}
