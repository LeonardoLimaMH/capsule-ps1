#include "common.h"

s32 func_800B1EBC(void) {
    extern u16 D_8006AF80[];
    extern u16 D_8008EE4C[];
    extern u8 D_80091618[];
    extern s32 D_800EEB8C[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern s16 D_80103D38[];
    s32 var_a3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    var_s0 = 0;
    switch ((*D_8008EE4C)) {
    case 0:
        if ((*D_80103D38) == 1) {
            (*D_800EFA4C) = 2;
        } else {
            (*D_800EFA4C) = 0;
        }
        if ((*D_800EFA4C) != (*D_800EFA4A)) {
            func_80024990(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s32 *, 0x18C), 1, 0x32, 0);
        }
block_12:
        func_800125D8();
        return 0;
    case 1:
        var_v0_2 = func_800B1668();
block_11:
        var_v0 = 0;
        if (var_v0_2 == 1) {
            goto block_12;
        }
        return var_v0;
    case 2:
        var_v0_2 = func_800B1700();
        goto block_11;
    case 3:
        var_v0_2 = func_800B1940();
        goto block_11;
    case 4:
        var_v0_2 = func_800B1B3C();
        goto block_11;
    case 5:
        if ((*D_800EEB8C) == 0) {
            var_a3 = 1;
            M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s16 *, 0x66) = 0;
            (*D_800EEB8C) = 8;
            M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s16 *, 0x68) = 0;
        } else {
            (*D_800EEB8C) -= 1;
            var_a3 = 0;
        }
        var_v0 = 0;
        if (var_a3 == 1) {
            goto block_12;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    case 6:
        var_s0 = 1;
        /* fallthrough */
    default:
        var_v0 = var_s0;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
}
