#include "common.h"

s32 func_800B5DE8(s32 arg0, s32 arg1) {
    extern u8 D_800EE5D0[];
    extern u8 D_800EEA00[];
    extern u8 D_800EEB9C[];
    s32 var_a2;
    s32 var_v0;
    void *temp_a0;

    if (*(arg0 + D_800EEA00) == 1) {
        temp_a0 = (arg0 * 4) + D_800EEB9C;
        var_a2 = M2C_FIELD(temp_a0, s32 *, 0x7C);
        var_v0 = var_a2 * 4;
loop_2:
        if (*(var_v0 + ((arg0 * 0x24) + D_800EEB9C + 0x3C8)) != 1) {
            var_a2 = (s32) (var_a2 + 1) % (s32) M2C_FIELD(temp_a0, s32 *, 0x60);
            var_v0 = var_a2 * 4;
            goto loop_2;
        }
        M2C_FIELD(((arg0 * 4) + D_800EEB9C), s32 *, 0x7C) = var_a2;
    }
    if (arg0 == 5) {
        return 0;
    }
    return func_800B6D98(1, (s16) (((arg0 % 2) * 0x24) + 0x38), (s16) (((arg0 / 2) * 0xE) + 0x24), 6, 0, D_800EE5D0, M2C_FIELD(((arg0 * 0x24) + D_800EEB9C + (arg1 * 4)), s32 *, 0x1D0), 1, 1, 0, 2, 1);
}
