#include "common.h"

s32 func_800D0B4C(s32 arg0, s32 arg1) {
    extern s32 D_80118C18[];
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_a2;
    void *temp_a0_2;

    temp_a2 = arg0 & 0xFF;
    temp_a0 = arg1 & 0xFF;
    if ((temp_a2 < 0xDU) && (temp_a0 < 0xDU)) {
        temp_a0_2 = (temp_a0 * 4) + ((temp_a2 * 0x34) + (*D_80118C18));
        temp_a1 = M2C_FIELD(temp_a0_2, u32 *, 0);
        temp_v1 = (temp_a1 >> 6) & 0x1FFF;
        if ((temp_v1 != 0) && (temp_v1 < 3)) {
            if ((temp_a1 & 0x3F) >= 2) {
                if (M2C_FIELD(temp_a0_2, u8 *, 3) == 0) {
                    return temp_v1 == 2;
                }
                goto block_7;
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return 2;
        }
    }
block_7:
    return 2;
}
