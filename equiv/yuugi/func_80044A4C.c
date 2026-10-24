#include "common.h"

s32 func_80044A4C(s32 arg0) {
    extern M2C_UNK D_80072F68[];
    void *temp_a3;

    if (M2C_FIELD(D_80072F68, s32 *, 0) <= 0) {
        temp_a3 = D_80072F68 - 0x44;
        if (M2C_FIELD(D_80072F68, s32 *, -0x44) != 0) {
            if (M2C_FIELD(D_80072F68, s32 *, -0x24) == 1) {
                M2C_FIELD(temp_a3, s32 *, 0x1C) = 0x1F;
                M2C_FIELD(D_80072F68, s32 *, -0x24) = 2;
                M2C_FIELD(temp_a3, s32 *, 0x24) = 0xB;
                return func_80044C04(arg0 & 0xFF, D_80072F68, temp_a3);
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
