#include "common.h"

void func_800A0668(void) {
    extern u16 D_8008EE48[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20010, var_s0 + 0xB), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80012A20(func_80019F30(0x50010, 1), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012508();
        func_800125AC(1);
        return;
    }
    func_80012508();
}
