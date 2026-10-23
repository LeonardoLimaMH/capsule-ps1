#include "common.h"

void func_8009CA60(u32 arg0) {
    s32 var_a1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;

    switch (arg0) {
    case 0:
        var_a1 = 0x1F;
block_13:
        func_80012A20(func_80019F30(0x20013, var_a1), 1, 0, 0);
        return;
    case 1:
        var_s0 = 0;
        do {
            func_80012A20(func_80019F30(0x20013, var_s0 + 0x20), 1, 0, 0);
            var_s0 += 1;
        } while (var_s0 < 4);
        return;
    case 2:
        var_s0_2 = 0;
        do {
            func_80012A20(func_80019F30(0x20013, var_s0_2 + 0x24), 1, 0, 0);
            var_s0_2 += 1;
        } while (var_s0_2 < 2);
        return;
    case 3:
        var_s0_3 = 0;
        do {
            func_80012A20(func_80019F30(0x20013, 0x26), 1, 0, 0);
            var_s0_3 += 1;
        } while (var_s0_3 <= 0);
        return;
    case 4:
        var_a1 = 0x27;
        goto block_13;
    case 5:
        var_s0_4 = 0;
        do {
            func_80012A20(func_80019F30(0x20013, var_s0_4 + 0x28), 1, 0, 0);
            var_s0_4 += 1;
        } while (var_s0_4 < 2);
        /* fallthrough */
    default:
        return;
    }
}
