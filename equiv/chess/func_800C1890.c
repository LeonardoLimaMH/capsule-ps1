#include "common.h"

void func_800C1890(void *arg0, M2C_UNK arg1, s32 arg2) {
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    u8 temp_a3;
    u8 temp_v1;
    u8 var_a2;

    temp_a3 = M2C_FIELD(arg0, u8 *, 0xBCA);
    switch ((*D_8008EE50)) {
    case 0:
        var_a0 = 5;
        if ((arg2 != 0) && (temp_v1 = M2C_FIELD(arg0, u8 *, 0xBE1), var_a0 = 9, ((temp_v1 & 1) == 0)) && (var_a0 = 5, ((temp_v1 >> 7) != 0))) {
            func_80012628(5, temp_a3);
        } else {
            func_8001264C(var_a0, temp_a3);
        }
        M2C_FIELD(arg0, u8 *, 0xBE1) = (u8) (M2C_FIELD(arg0, u8 *, 0xBE1) & 0x7F);
        return;
    case 1:
        if (func_800A0D40(arg0, temp_a3, 0, temp_a3) == 0) {
            func_8001264C(3);
            return;
        }
block_17:
        func_800220B8(arg0);
        func_80012628();
        return;
    case 2:
        var_a2 = temp_a3;
block_19:
        if (func_800220D4(arg0, 1, var_a2, 0) != 0) {
block_20:
            func_8001264C(9);
            return;
        }
    default:
        return;
    case 3:
        if (func_800A0D40(arg0, 1 - temp_a3, 0, temp_a3) == 0) {
            func_8001264C(5);
            return;
        }
        goto block_17;
    case 5:
        if (func_800A0AD4(arg0, temp_a3, arg1, 1) == 0) {
            func_8001264C(7);
            return;
        }
        goto block_17;
    case 6:
        var_a2 = temp_a3;
        goto block_19;
    case 7:
        if (func_800A0AD4(arg0, 1 - temp_a3, arg1, 1) != 0) {
            goto block_17;
        }
        goto block_20;
    case 4:
    case 8:
        var_a2 = 1 - temp_a3;
        goto block_19;
    case 9:
        func_800125D8(temp_a3);
        break;
    }
}
