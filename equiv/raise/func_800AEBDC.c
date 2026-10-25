#include "common.h"

s32 func_800AEBDC(s32 arg0) {
    extern u8 D_800EEA00[];
    extern u8 D_800EEB9C[];
    s32 var_a2;
    void *temp_v0;

    var_a2 = 9;
    if (arg0 != 0xFF) {
        if (*(arg0 + D_800EEA00) == 1) {
            temp_v0 = (arg0 * 4) + D_800EEB9C;
            M2C_FIELD(D_800EEB9C, s32 *, 0x24) = arg0;
            M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = (s32) M2C_FIELD(temp_v0, s32 *, 0x7C);
loop_3:
            var_a2 -= 1;
            if (*((M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4) + ((arg0 * 0x24) + D_800EEB9C + 0x3C8)) != 1) {
                M2C_FIELD(D_800EEB9C, s32 *, 0xD0) = (s32) ((s32) (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) + 1) % (s32) M2C_FIELD(temp_v0, s32 *, 0x60));
                if (var_a2 == 0) {
                    return 0;
                }
                goto loop_3;
            }
            return 1;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
