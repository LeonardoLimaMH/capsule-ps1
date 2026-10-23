#include "common.h"

void func_800C3D9C(s32 arg0) {
    extern u16 D_8008EE50[];
    s32 var_a2;

    switch ((*D_8008EE50)) {
    case 0:
        if (func_800A11C0(arg0, func_800CA69C(arg0), 0) == 0) {
            func_8001264C(2);
            return;
        }
block_6:
        func_800220B8(arg0);
        func_80012628();
        return;
    case 1:
        var_a2 = func_800CA69C(arg0);
block_9:
        if (func_800220D4(arg0, 1, var_a2, 0) != 0) {
            func_80012628();
            return;
        }
    default:
        return;
    case 2:
        if (func_800A11C0(arg0, 1 - func_800CA69C(arg0), 1) != 0) {
            goto block_6;
        }
        func_8001264C(4);
        return;
    case 3:
        var_a2 = 1 - func_800CA69C(arg0);
        goto block_9;
    case 4:
        func_800125D8();
        break;
    }
}
