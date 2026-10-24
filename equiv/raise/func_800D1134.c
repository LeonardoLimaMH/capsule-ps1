#include "common.h"

void func_800D1134(void) {
    extern M2C_UNK D_8006AFCC[];
    extern u16 D_800F1C98[];
    extern s16 D_80105990[];
    M2C_UNK *var_s2;
    s32 var_s1;
    u16 *var_s0;
    u16 temp_v1;
    u16 temp_v1_2;

    var_s1 = 0;
    var_s0 = D_800F1C98;
    var_s2 = D_8006AFCC;
    do {
        temp_v1 = M2C_FIELD(var_s2, u16 *, 0x30);
        if ((temp_v1 == 1) && ((var_s1 != 0) || ((*D_80105990) != temp_v1))) {
            temp_v1_2 = *var_s0;
            if (temp_v1_2 != 0xFFFF) {
                func_80034AB0(temp_v1_2);
            }
        }
        var_s0 += 2;
        var_s1 += 1;
        var_s2 += 2;
    } while (var_s1 < 0xB);
}
