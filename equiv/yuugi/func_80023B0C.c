#include "common.h"

void func_80023B0C(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    extern M2C_UNK D_80078C08[];
    s16 temp_a0;
    s16 temp_a1;
    s32 temp_a3;
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    if (arg0 != 0) {
        if ((arg0 >= 0) && (arg0 < 3)) {
            temp_v0 = arg3 + (arg2 * 0x18);
            func_8001DBF4(M2C_FIELD(temp_v0, s16 *, 0), M2C_FIELD(temp_v0, s16 *, 2), 0, arg0 == 1, (*D_80078C08), temp_v0 + 8);
        }
    } else {
        var_s1 = 0;
        if (arg0 < arg1) {
            var_s0 = arg3;
            do {
                temp_a3 = var_s1 == arg2;
                temp_v0_2 = var_s0 + 8;
                temp_a0 = M2C_FIELD(var_s0, s16 *, 0);
                temp_a1 = M2C_FIELD(var_s0, s16 *, 2);
                var_s0 += 0x18;
                var_s1 += 1;
                func_8001DBF4(temp_a0, temp_a1, 0, temp_a3, (*D_80078C08), temp_v0_2);
            } while (var_s1 < arg1);
        }
    }
}
