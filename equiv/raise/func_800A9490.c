#include "common.h"

s32 func_800A9490(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80091618[];
    s32 temp_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;
    u16 temp_v1;
    void *temp_v0;
    void *var_a0;

    if ((M2C_FIELD((*D_80069AD4), s32 *, 0x54) == 0) || (func_800A9A74(), func_80023F68(), var_v0 = 0, (M2C_FIELD((*D_80069AD4), s32 *, 0x54) == 0))) {
        var_s0 = 1;
        do {
            temp_a0 = func_800B1260(var_s0) & 0xFFFF;
            if (temp_a0 != 0xFFFF) {
                temp_v1 = M2C_FIELD(((temp_a0 * 0x1A8) + (*D_80091618)), u16 *, 0x10);
                if ((temp_v1 == 1) || (temp_v1 == 5) || (var_a2 = 2, (temp_v1 == 3))) {
                    var_a2 = 3;
                }
                var_a1 = 0;
                if (var_a2 != 0) {
                    var_a0 = (temp_a0 * 0x1A8) + (*D_80091618);
                    do {
                        temp_v0 = M2C_FIELD(var_a0, void **, 0x18C);
                        var_a1 += 1;
                        M2C_FIELD(temp_v0, s32 *, 0x50) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x50) | 1);
                        var_a0 += 4;
                    } while (var_a1 < var_a2);
                }
            }
            var_s0 -= 1;
            var_v0 = -1;
        } while (var_s0 >= 0);
    }
    return var_v0;
}
