#include "common.h"

void func_800BA4E0(void *arg0, s32 arg1) {
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    s32 var_a2;
    u8 temp_v1;

    switch ((*D_8008EE50)) {
    case 0:
        temp_v1 = M2C_FIELD(arg0, u8 *, 0xBE1);
        var_a0 = 9;
        if (!(temp_v1 & 1) && (var_a0 = 5, ((temp_v1 >> 7) != 0))) {
            func_80012628(5, arg1);
        } else {
            func_8001264C(var_a0, arg1);
        }
        M2C_FIELD(arg0, u8 *, 0xBE1) = (u8) (M2C_FIELD(arg0, u8 *, 0xBE1) & 0x7F);
        return;
    case 1:
        if (func_800A0D40(arg0, arg1, arg1) == 0) {
            func_8001264C(3);
            return;
        }
block_16:
        func_800220B8(arg0);
        func_80012628();
        return;
    case 2:
        var_a2 = arg1;
block_18:
        if (func_800220D4(arg0, 1, var_a2, 0) != 0) {
block_19:
            func_8001264C(9);
            return;
        }
    default:
        return;
    case 3:
        if (func_800A0D40(arg0, 1 - arg1, arg1) == 0) {
            func_8001264C(5);
            return;
        }
        goto block_16;
    case 5:
        if (func_800A0930(arg0, arg1, 1, arg1) == 0) {
            func_8001264C(7);
            return;
        }
        goto block_16;
    case 6:
        var_a2 = arg1;
        goto block_18;
    case 7:
        if (func_800A0930(arg0, 1 - arg1, 1, arg1) != 0) {
            goto block_16;
        }
        goto block_19;
    case 4:
    case 8:
        var_a2 = 1 - arg1;
        goto block_18;
    case 9:
        func_800125D8(arg1);
        break;
    }
}
