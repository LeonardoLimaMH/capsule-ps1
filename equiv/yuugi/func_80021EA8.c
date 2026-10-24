#include "common.h"

void func_80021EA8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    extern M2C_UNK D_8008ED68;
    M2C_UNK var_a0;
    M2C_UNK var_a1;
    u16 *temp_v0;
    u16 *var_a0_2;
    u16 temp_v1;
    u16 var_v1;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = arg0 + 0x10;
    temp_s2 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(temp_s1, s16 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 1;
    if (((M2C_FIELD(temp_s2, u8 *, 0x12) != 0) || (M2C_FIELD(temp_s2, u8 *, 0xE) == 2)) && ((arg3 == 2) || !(func_800337EC(arg0) & 4)) && !(func_800337EC(arg0) & 1)) {
        temp_v1 = M2C_FIELD(temp_s1, u16 *, 0xE);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v1 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v1 = temp_v1 + 1;
        }
        M2C_FIELD(temp_s1, u16 *, 0xE) = var_v1;
        var_a0 = 0xC8;
        if (arg3 != 3) {
            var_a0 = 0x128;
        }
        var_a1 = 0xD4;
        if (var_v1 & 0x10) {
            var_a1 = 0xD0;
        }
        func_8001EA24(var_a0, var_a1, 1, 0xEE, 0, 3);
    }
    if (func_80021A9C(arg0, arg1, arg2, arg3) != 0) {
        if (M2C_FIELD(temp_s2, u8 *, 0x12) != 0) {
            func_8001E310();
            if (arg3 != 2) {
                goto block_26;
            }
            goto block_27;
        }
        temp_v1_2 = M2C_FIELD(temp_s2, u8 *, 0xE);
        if (temp_v1_2 == 2) {
            M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
            M2C_FIELD(temp_s2, u8 *, 0xE) = (u8) (M2C_FIELD(temp_s2, u8 *, 0xE) + 1);
            return;
        }
        if (temp_v1_2 == 1) {
            if (arg3 != 2) {
                func_8003422C(0x8000);
            }
            var_a0_2 = M2C_FIELD(temp_s2, u16 **, 0);
            if (*var_a0_2 != 0xFFEB) {
                do {
                    temp_v0 = var_a0_2 + 2;
                    M2C_FIELD(temp_s2, u16 **, 0) = temp_v0;
                    var_a0_2 = temp_v0;
                } while (M2C_FIELD(var_a0_2, u16 *, 2) != 0xFFEB);
            }
        } else {
            func_8001E310();
            if (arg3 != 2) {
block_26:
                func_8003422C(0x8000);
            }
block_27:
            M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
            M2C_FIELD(temp_s1, u8 *, 0) = (u8) (M2C_FIELD(temp_s1, u8 *, 0) + 1);
        }
    }
}
