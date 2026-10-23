#include "common.h"

void func_80021064(void *arg0, s32 arg1) {
    extern M2C_UNK D_8006388C[];
    extern M2C_UNK D_80063890[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    s32 temp_v1_2;
    s32 var_v1_3;
    u16 temp_v1;
    u16 var_v1;
    u8 var_v1_2;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = arg0 + 0x10;
    temp_s2 = M2C_FIELD(temp_s1, void **, 0x10);
    M2C_FIELD(temp_s1, s16 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 1;
    if (M2C_FIELD(temp_s2, u8 *, 0x12) == 0) {
        if (M2C_FIELD(temp_s2, u8 *, 0xE) == 2) {
            goto block_2;
        }
    } else {
block_2:
        temp_v1 = M2C_FIELD(temp_s1, u16 *, 0xE);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v1 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v1 = temp_v1 + 1;
        }
        M2C_FIELD(temp_s1, u16 *, 0xE) = var_v1;
        if (M2C_FIELD(temp_s2, u8 *, 0xF) == 0) {
            var_a1 = 0xD4;
            if (var_v1 & 0x10) {
                var_a1 = 0xD0;
            }
            func_8001EA24(0x128, var_a1, 1, 0xEE, 0, 3);
            var_v1_2 = 0;
            temp_a0 = arg0 + 0x5D0;
            if (arg1 == 1) {
                var_v1_2 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
            }
            if (M2C_FIELD(arg0, u8 *, 1) == 0) {
                if (arg1 == 1) {
                    if (M2C_FIELD((temp_a0 + var_v1_2), u8 *, 0x10) != 0) {
                        goto block_13;
                    }
                    goto block_14;
                }
block_14:
                temp_v1_2 = M2C_FIELD(((var_v1_2 * 0x10) + (*D_8008ED68)), s32 *, 0x88);
                if (!(temp_v1_2 & 0x20)) {
                    if (temp_v1_2 & 0x40) {
                        goto block_16;
                    }
                    var_v1_3 = ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0xB5U) ^ 1;
                } else {
block_16:
                    var_v1_3 = 1;
                }
            } else {
block_13:
                var_v1_3 = ((u16) M2C_FIELD(arg0, u16 *, 0x1E) < 0x1FU) ^ 1;
            }
        } else {
            func_8001F1A8(0x70, 0x38, 1, 1, 0, (*D_8006388C), 0, 2, 3);
            func_8001F1A8(0x70, 0x48, 1, 1, 0, (*D_80063890), 0, 3, 3);
            var_v1_3 = func_80020F0C(arg0, arg1);
        }
        if (var_v1_3 != 0) {
            if (M2C_FIELD(temp_s2, u8 *, 0x12) != 0) {
                if (var_v1_3 == 2) {
                    M2C_FIELD(temp_s1, s8 *, 1) = 1;
                }
                func_8001E310();
                M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
                M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) + 1);
                return;
            }
            M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
            M2C_FIELD(temp_s2, u8 *, 0xE) = (u8) (M2C_FIELD(temp_s2, u8 *, 0xE) + 1);
        }
    }
}
