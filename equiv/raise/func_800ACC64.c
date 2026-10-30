#include "common.h"

void func_800ACC64(s16 arg0) {
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EEC6C[];
    s32 temp_a1;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;

    temp_s3 = M2C_FIELD(D_800EEB9C, s32 *, 0xD0);
    var_s1 = 9;
    if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) {
        if ((M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) && (arg0 < 2) && (arg0 >= 0)) {
            func_800B4944(arg0);
        }
    } else if (arg0 >= 2) {
        func_800AEB5C(2, 0);
        if (arg0 == 3) {
            var_s1_2 = 8;
loop_8:
            var_a1 = 0;
            if (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) < (M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + (u8 *)D_800EEB9C), s32 *, 0x60) - 1)) {
                var_a1 = M2C_FIELD(D_800EEB9C, s32 *, 0xD0) + 1;
            }
            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = var_a1;
            if (func_800AEC94(M2C_FIELD(D_800EEB9C, s32 *, 0x24), var_a1) == 0) {
                var_s1_2 -= 1;
                if (var_s1_2 == 0) {
                    M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = temp_s3;
                } else {
                    goto loop_8;
                }
            }
        } else {
loop_13:
            var_v0 = M2C_FIELD(D_800EEB9C, s32 *, 0xD0);
            var_s1 -= 1;
            if (var_v0 <= 0) {
                var_v0 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + (u8 *)D_800EEB9C), s32 *, 0x60);
            }
            temp_a1 = var_v0 - 1;
            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = temp_a1;
            if (func_800AEC94(M2C_FIELD(D_800EEB9C, s32 *, 0x24), temp_a1) == 0) {
                if (var_s1 == 0) {
                    M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = temp_s3;
                } else {
                    goto loop_13;
                }
            }
        }
        func_800AEB5C(1, 0);
        if (temp_s3 != (*D_800EEC6C)) {
            func_80034AB0(0x84);
        }
    }
}
