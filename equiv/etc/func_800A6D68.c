#include "common.h"

void func_800A6D68(void) {
    extern u8 D_80065164[];
    extern s16 D_8006AF90[];
    extern u8 D_8008ED68[];
    extern u8 D_800B2DA8[];
    extern s32 D_800B3C1C[];
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    var_s0 = 0;
    var_s1 = 0xFF780000;
    var_a0 = 0xFF780000 >> 0x10;
    do {
        func_80020844(var_a0, 0x10, 0x50, 0x18, 0, 0, 0, 0, 5);
        var_s1 += 0x600000;
        var_s0 += 1;
        var_a0 = var_s1 >> 0x10;
    } while (var_s0 < 3);
    if ((*D_8006AF90) > 0) {
        var_s0_2 = 0;
        if ((*D_8006AF90) > 0) {
            var_s1_2 = 0xFF7C0000;
            do {
                temp_v1 = var_s0_2 * 2;
                var_s0_2 += 1;
                func_8001F1A8(var_s1_2 >> 0x10, 0x14, 0, 1, 0, (M2C_FIELD((temp_v1 + D_8006AF90), s16 *, 2) * 0xC) + D_80065164, 1, 6, 2);
                var_s1_2 += 0x600000;
            } while (var_s0_2 < (*D_8006AF90));
        }
    }
    if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x40)) {
        func_80034AB0(0x5D);
        (*D_800B3C1C) = 2;
        func_80012544(5);
    }
}
