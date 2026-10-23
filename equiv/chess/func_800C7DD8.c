#include "common.h"

s32 func_800C7DD8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_801010B0[];
    s32 temp_t1;
    s32 temp_t3;
    u32 temp_v0;
    u32 temp_v1_2;
    u8 temp_t0;
    u8 temp_v1;
    void *temp_a0;

    temp_t3 = *((M2C_FIELD(arg0, u8 *, 9) * 0x34) + D_801010B0);
    if (M2C_FIELD(arg1, u8 *, 0) == 0x2E) {
        temp_v1 = M2C_FIELD(arg1, u8 *, 0x29);
        temp_v0 = temp_v1 & 0xFF;
        if (temp_v0 != 0) {
            temp_t0 = (temp_v0 >> 4) - 1;
            temp_t1 = (temp_v1 & 0xF) - 1;
            if (temp_t0 < 0xDU) {
                if (temp_t1 >= 0) {
                    if (temp_t1 >= 0xD) {
                        goto block_5;
                    }
                    temp_a0 = (temp_t1 * 4) + ((temp_t0 * 0x34) + temp_t3);
                    temp_v1_2 = M2C_FIELD(temp_a0, u32 *, 0);
                    if ((temp_v1_2 & 0x3F) >= 2) {
                        if (((temp_v1_2 >> 6) & 0x1FFF) == 1) {
                            if (temp_t0 == M2C_FIELD(arg1, u8 *, 0x15)) {
                                if (temp_t1 != M2C_FIELD(arg1, u8 *, 0x16)) {
                                    goto block_11;
                                }
                                goto block_13;
                            }
block_11:
                            if (M2C_FIELD(temp_a0, u8 *, 3) == 0) {
block_13:
                                M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0x16) * 4) + ((M2C_FIELD(arg1, u8 *, 0x15) * 0x34) + temp_t3)), s8 *, 3) = 0;
                                M2C_FIELD(arg1, u8 *, 0x15) = temp_t0;
                                M2C_FIELD(arg1, u8 *, 0x16) = (u8) temp_t1;
                                M2C_FIELD(((temp_t1 * 4) + ((temp_t0 * 0x34) + temp_t3)), s8 *, 3) = (s8) ((arg2 << 7) | (arg3 + 1));
                                M2C_FIELD(arg1, u8 *, 0x29) = 0xFFU;
                                return 1;
                            }
                            goto block_6;
                        }
                        goto block_6;
                    }
                    goto block_6;
                }
block_5:
                goto block_6;
            }
block_6:
            M2C_FIELD(arg1, u8 *, 0x29) = 0xFEU;
            goto block_14;
        }
block_14:
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
