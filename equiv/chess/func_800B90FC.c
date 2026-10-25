#include "common.h"

s32 func_800B90FC(void *arg0, s32 arg1) {
    extern u8 D_80100FA8[];
    extern u8 D_801010B0[];
    s8 temp_a3;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0x5FA);
    temp_v1 = arg0 + ((M2C_FIELD((arg0 + temp_a0), u8 *, 0x5FB) * 0x7C) + (temp_a0 * 0x2E8));
    temp_a1 = (arg1 * 2) + D_80100FA8;
    temp_a0_2 = M2C_FIELD(temp_v1, u8 *, 0x2D) + M2C_FIELD(temp_a1, s8 *, 0);
    temp_a3 = M2C_FIELD(temp_v1, u8 *, 0x2E) + M2C_FIELD(temp_a1, s8 *, 1);
    if (temp_a0_2 < 0xDU) {
        if (temp_a3 >= 0) {
            if (temp_a3 < 0xD) {
                if ((*(s32 *)((temp_a3 * 4) + ((temp_a0_2 * 0x34) + *((M2C_FIELD(arg0, u8 *, 9) * 0x34) + D_801010B0))) & 0x3F) >= 2) {
                    temp_v1_2 = arg0 + (temp_a0 * 2);
                    M2C_FIELD(temp_v1_2, u8 *, 0x601) = temp_a0_2;
                    M2C_FIELD(temp_v1_2, s8 *, 0x602) = temp_a3;
                    return 1;
                }
                /* Duplicate return node #6. Try simplifying control flow for better match */
                return 0;
            }
            goto block_5;
        }
        goto block_5;
    }
block_5:
    return 0;
}
