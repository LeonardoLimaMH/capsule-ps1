#include "common.h"

s32 func_800E1450(s32 arg0) {
    extern M2C_UNK D_80100F38[];
    s32 var_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = ((arg0 & 0xFFFF) * 0x79C) + (*D_80100F38);
    var_v0 = 0;
    if (M2C_FIELD(temp_a0, s16 *, 0x2B8) == 2) {
        temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x2BA);
        var_v0 = 1;
        if ((u32) (temp_v1 - 0xA) >= 2U) {
            var_v0 = 0;
            if ((s16) temp_v1 == 0xE) {
                var_v0 = 1;
            }
        }
    }
    return var_v0;
}
