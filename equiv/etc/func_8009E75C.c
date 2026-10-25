#include "common.h"

void func_8009E75C(void *arg0) {
    extern int func_800A4964();
    s32 temp_a1;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_v0;

    var_s0 = 0;
    do {
        temp_a1 = var_s0;
        var_s0 += 1;
        func_80012A20(func_80019F30((M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15) | 0x20000, temp_a1), 1, 0, 0);
    } while (var_s0 < 4);
    var_s0_2 = 0;
    func_80012A20(func_80019F30((M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15) | 0x50000, 0), 1, 0, 0);
    temp_v0 = func_80032DB0(0, 0x78, 5, M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, 0, &func_800A4964);
    M2C_FIELD(temp_v0, s8 *, 0x5A) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x59) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x58) = 0;
    do {
        func_800992CC(arg0, var_s0_2);
        var_s0_2 += 1;
    } while (var_s0_2 < 2);
    func_80012508(arg0);
}
