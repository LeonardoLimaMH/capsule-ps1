#include "common.h"

void func_80099C78(void) {
    extern s32 D_800B3AD0[];
    extern M2C_UNK func_8009A160[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20008, var_s0 + 2), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    func_80012A20(func_80019F30(0x50008, 0), 1, 0, 0);
    func_80032DB0(0, 0, 3, 8, 0, (*func_8009A160));
    (*D_800B3AD0) = 0xB4;
    func_8001ADCC(8);
    func_80012508();
}
