#include "common.h"

void func_8009C7D4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20014, var_s0 + 4), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    func_80012A20(func_80019F30(0x50014, 2), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 6), 1, 0, 0);
}
