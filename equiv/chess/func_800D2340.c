#include "common.h"

s32 func_800D2340(s32 arg0) {
    extern u8 D_80063940[];
    extern u8 D_80085994[];
    s16 temp_v1;
    s32 var_v0;
    void *temp_a1;

    temp_a1 = (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085994 + ((arg0 & 0x7F) * 0x7C);
    if (M2C_FIELD(temp_a1, u8 *, 0) == 0x63) {
        temp_v1 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x70), s16 *, 0x64);
        var_v0 = 2;
        if (temp_v1 != -1) {
            var_v0 = 1;
            if (temp_v1 < 0) {
                var_v0 = 1;
                if (temp_v1 == -2) {
                    return 0;
                }
            }
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = ((u32) M2C_FIELD(((M2C_FIELD(temp_a1, u8 *, 0) * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3;
    return var_v0;
}
