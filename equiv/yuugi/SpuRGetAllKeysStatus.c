#include "common.h"

s32 SpuRGetAllKeysStatus(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 D_80071524[];
    extern s32 D_80071598[];
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_a2;
    u16 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0_2 = var_a0 < 0x18;
    if (var_a0 < 0) {
        var_a0 = 0;
        var_v0_2 = 0 < 0x18;
    }
    if (var_v0_2 != 0) {
        if (var_a1 >= 0x18) {
            var_a1 = 0x17;
        }
        var_v0 = -3;
        if (var_a1 >= 0) {
            var_a3 = var_a0;
            if (var_a1 < var_a0) {
                goto block_7;
            }
            temp_a1 = var_a1 + 1;
            var_v0 = 0;
            if (var_a3 < temp_a1) {
                var_a2 = var_a3 + arg2;
                do {
                    temp_v0 = M2C_FIELD(((var_a3 * 0x10) + (*D_80071598)), u16 *, 0xC);
                    if ((*D_80071524) & (1 << var_a3)) {
                        if (temp_v0 != 0) {
                            *var_a2 = 1;
                        } else {
                            *var_a2 = 3;
                        }
                    } else if (temp_v0 != 0) {
                        *var_a2 = 2;
                    } else {
                        *var_a2 = 0;
                    }
                    var_a3 += 1;
                    var_a2 += 1;
                } while (var_a3 < temp_a1);
                var_v0 = 0;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_7:
    return -3;
}
