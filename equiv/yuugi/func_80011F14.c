#include "common.h"

void func_80011F14(void) {
    extern M2C_UNK D_80065390[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012C7C(func_80019F30(0x20001, var_s0 + 0xD));
        var_s0 += 1;
    } while (var_s0 < 3);
    func_80012E54(func_80019F30(0x50001, 2));
    func_8001A49C(D_80065390);
}
