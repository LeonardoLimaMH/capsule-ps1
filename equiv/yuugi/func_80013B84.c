#include "common.h"

void func_80013B84(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    u32 var_s0;
    void *var_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0) {
        func_80012A20(temp_a0, 1, 0, 0);
    }
    var_s0 = 0;
    if (M2C_FIELD(arg0, u32 *, 8) != 0) {
        var_s1 = arg0;
        do {
            temp_a0_2 = M2C_FIELD(var_s1, s32 *, 0xC);
            var_s1 += 4;
            func_80012A20(temp_a0_2, 1, 0, 0);
            var_s0 += 1;
        } while (var_s0 < (u32) M2C_FIELD(arg0, u32 *, 8));
    }
}
