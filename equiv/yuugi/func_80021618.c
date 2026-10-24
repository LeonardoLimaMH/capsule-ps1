#include "common.h"

void func_80021618(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    extern M2C_UNK D_80078D08;
    M2C_UNK var_a0;
    M2C_UNK var_s1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s0;
    u8 temp_v1;
    u8 var_v0;

    var_s0 = -1;
    var_s1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x3C) == 0) || (M2C_FIELD(&D_80078D08, u8 *, 0) != M2C_FIELD(arg2, u8 *, 5))) {
        M2C_FIELD(&D_80078D08, u8 *, 0) = (u8) M2C_FIELD(arg2, u8 *, 5);
        temp_v1 = M2C_FIELD(arg2, u8 *, 5);
        switch (temp_v1) {
        case 1:
            var_s0 = 3;
            var_s1 = 1;
            break;
        case 2:
            var_s0 = 4;
            var_s1 = 1;
            break;
        case 3:
            var_s0 = 5;
            var_s1 = 1;
            break;
        case 4:
            var_s0 = 6;
            var_s1 = 1;
            break;
        case 5:
            var_s0 = 7;
            var_s1 = 1;
            break;
        default:
            var_s0 = 0;
            var_s1 = 1;
            break;
        }
    } else if (M2C_FIELD(&D_80078D08, u8 *, 0) == 0) {
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            if (arg4 < 4) {
                if (arg3 != 0) {
                    if (M2C_FIELD(&D_80078D08, u8 *, 1) != 1) {
                        var_s0 = 0;
                        goto block_24;
                    }
                    goto block_17;
                }
                if (M2C_FIELD(&D_80078D08, u8 *, 1) == 0x65) {
block_17:
                    temp_v0 = func_80020304(0x3E8);
                    if (temp_v0 < 0xA) {
                        var_s0 = 2;
                        if (!(func_800337EC() & 4)) {
                            var_s0 = 1;
                            var_s1 = 3;
                        } else {
                            goto block_22;
                        }
                    } else if (temp_v0 < 0x14) {
                        var_s0 = 2;
block_22:
                        var_s1 = 3;
                    }
                } else {
                    var_s0 = 0;
block_24:
                    var_s1 = 1;
                }
            }
            goto block_25;
        }
    } else {
block_25:
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            M2C_FIELD(arg2, s8 *, 0x10) = 1;
        }
    }
    if (var_s0 != -1) {
        if (arg4 != 4) {
            var_v0 = var_s0 + 1;
            if (arg3 == 0) {
                var_v0 = var_s0 + 0x65;
            }
            M2C_FIELD(&D_80078D08, u8 *, 1) = var_v0;
            var_a0 = 0x7000E;
            if (arg3 != 0) {
                var_a0 = 0x70013;
            }
            var_a1 = M2C_FIELD(&D_80078D08, u8 *, 1) + (arg1 * 8);
        } else {
            M2C_FIELD(&D_80078D08, u8 *, 1) = (u8) (var_s0 + 0x3B);
            var_a0 = 0x7000A;
            var_a1 = 0x3B;
        }
        func_80015CD0(arg0 + 0x14, func_80019F30(var_a0, var_a1), var_s1);
        if (0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x24) = 0;
        }
        M2C_FIELD(arg2, s8 *, 0x10) = 0;
    }
}
