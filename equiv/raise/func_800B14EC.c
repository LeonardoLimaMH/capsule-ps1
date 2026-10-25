#include "common.h"

s32 func_800B14EC(s32 arg0, s32 arg1) {
    extern u8 D_80091618[];
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 var_v0;
    void *temp_a1;
    void *temp_a2;

    temp_a2 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    temp_a1 = ((arg1 & 0xFFFF) * 0x1A8) + D_80091618;
    temp_a0 = M2C_FIELD(temp_a2, s16 *, 0xBC);
    temp_v1 = M2C_FIELD(temp_a1, s16 *, 0xBC);
    var_v0 = 0;
    if (temp_v1 >= temp_a0) {
        var_v0 = 1;
        if (temp_a0 >= temp_v1) {
            temp_a0_2 = M2C_FIELD(temp_a2, s16 *, 0xB6);
            temp_v1_2 = M2C_FIELD(temp_a1, s16 *, 0xB6);
            if (temp_v1_2 < temp_a0_2) {
                return 0;
            }
            var_v0 = 1;
            if (temp_a0_2 >= temp_v1_2) {
                temp_a0_3 = M2C_FIELD(temp_a2, s16 *, 0xB8);
                temp_v1_3 = M2C_FIELD(temp_a1, s16 *, 0xB8);
                var_v0 = 0;
                if (temp_v1_3 >= temp_a0_3) {
                    var_v0 = 1;
                    if (temp_a0_3 >= temp_v1_3) {
                        var_v0 = func_800202A4(2, temp_a1, temp_a2);
                    }
                }
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
