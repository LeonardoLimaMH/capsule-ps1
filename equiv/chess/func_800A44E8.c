#include "common.h"

s32 func_800A44E8(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 temp_a1;
    void *temp_a0;
    void *temp_a3;

    temp_a3 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_a3, u8 *, 0x5FA);
    temp_a0 = temp_a3 + ((M2C_FIELD((temp_a3 + temp_a1), u8 *, 0x5FB) * 0x7C) + (temp_a1 * 0x2E8));
    var_v1 = arg1 - M2C_FIELD(temp_a0, u8 *, 0x2D);
    sp0 = var_v1;
    var_v0_2 = arg2 - M2C_FIELD(temp_a0, u8 *, 0x2E);
    sp4 = var_v0_2;
    if ((var_v1 != 0) && (var_v0_2 != 0)) {
        if (var_v1 < 0) {
            var_v1 = -var_v1;
        }
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        var_v0 = 0xFF;
        if (var_v1 == var_v0_2) {
            goto block_7;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
block_7:
    var_v0 = 0xFF;
    if (M2C_FIELD(((arg1 * 0xD) + temp_a3 + arg2), u8 *, 0x630) != 0) {
        if (sp0 > 0) {
            var_v0 = 1;
            if (sp4 <= 0) {
                var_v0 = 0;
                if (sp4 < 0) {
                    return 7;
                }
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_v0;
        }
        if (sp0 < 0) {
            var_v0 = 3;
            if (sp4 <= 0) {
                var_v0 = 4;
                if (sp4 < 0) {
                    return 5;
                }
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 2;
        if (sp4 <= 0) {
            var_v0 = 0xFF;
            if (sp4 < 0) {
                var_v0 = 6;
            }
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
