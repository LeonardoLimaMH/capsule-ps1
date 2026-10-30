#include "common.h"

void func_8004386C(s8 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80094A78[];
    extern s32 D_80094B6C[];
    extern s32 D_80094B70[];
    extern M2C_UNK (*D_80094C50)(s32, M2C_UNK);
    M2C_UNK var_a0;
    s32 *temp_s3;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_v0;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    s32 var_v1;
    void *temp_s0;
    void *temp_v1_5;

    temp_s3 = D_80094B6C - 0xC4;
    temp_s0 = ((*D_80094B6C) * 0x18) + temp_s3;
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0);
    if (temp_v1 != 0) {
        M2C_FIELD(D_80094A78, s32 *, 0) = temp_v1;
        M2C_FIELD(D_80094A78, s8 *, 4) = arg0;
        func_800458A0((u8 *)D_80094A78 + 5, arg0);
        temp_v1_2 = arg0 & 0xFF;
        switch (temp_v1_2) {                        /* irregular */
        case 2:
            temp_a1 = (*D_80094B6C) + 1;
            temp_a2 = temp_a1 < 8;
            var_v1 = temp_a1;
            if (temp_a2 == 0) {
                var_v1 = 0;
            }
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
            if (*((var_v1 * 0x18) + temp_s3) != temp_a0) {
                func_80043A90(temp_a0, 2, arg1);
                var_a0 = 2;
                if (M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10) != NULL) {
block_16:
                    M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10)(var_a0, arg1);
                }
block_17:
                func_800434CC();
            } else {
                (*D_80094B6C) = temp_a1;
                if (temp_a2 == 0) {
                    (*D_80094B6C) = 0;
                }
            }
            break;
        case 5:
            temp_v1_3 = M2C_FIELD(temp_s0, s32 *, 0x14);
            if (temp_v1_3 <= 0) {
                if (temp_v1_3 == -1) {
                    goto block_13;
                }
                func_80043A90(M2C_FIELD(temp_s0, s32 *, 0), 5, arg1);
                var_a0 = 5;
                if (M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x10) != NULL) {
                    goto block_16;
                }
                goto block_17;
            }
block_13:
            (*D_80094B6C) = M2C_FIELD(temp_s3, s32 *, 0xC0);
            temp_v1_4 = M2C_FIELD(temp_s0, s32 *, 0x14);
            if (temp_v1_4 != -1) {
                M2C_FIELD(temp_s0, s32 *, 0x14) = (s32) (temp_v1_4 - 1);
            }
            break;
        }
    }
    if (D_80094C50 != NULL) {
        D_80094C50(arg0 & 0xFF, arg1);
    }
    temp_v0 = func_80044AF8(0);
    if (temp_v0 == 1) {
        if ((*D_80094B70) > 0) {
            if (func_80044AF8(0) == temp_v0) {
                temp_v1_5 = ((*D_80094B6C) * 0x18) + (D_80094B70 - 0xC8);
                if (M2C_FIELD(temp_v1_5, s32 *, 0) != 0) {
                    func_80044A4C(M2C_FIELD(temp_v1_5, u8 *, 4), M2C_FIELD(temp_v1_5, s32 *, 0xC));
                }
            }
        }
    }
}
