#include "common.h"

void func_8001E180(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        var_s0 += 1;
        func_80012C7C(func_80019F30(0x20001, var_s0));
    } while (var_s0 < 0xC);
    func_80012E54(func_80019F30(0x50001, 1));
}
