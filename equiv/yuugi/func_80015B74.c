#include "common.h"

void func_80015B74(void *arg0) {
    s32 temp_a0;
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = M2C_FIELD(arg0, u32 *, 8);
    var_s0 = (temp_s1 + (M2C_FIELD(arg0, s32 *, 0) * 0x24)) - 0x24;
    if (var_s0 >= temp_s1) {
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 4);
            var_s0 -= 0x24;
            func_80012A20(temp_a0, 1, 0, 0);
        } while (var_s0 >= temp_s1);
    }
}
