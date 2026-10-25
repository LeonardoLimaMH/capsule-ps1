#include "common.h"

s32 func_800B1668(void) {
    extern u8 D_800900C0[];
    extern s16 D_80103D38[];
    u8 *var_v1;
    s32 var_a0;
    s32 var_a0_2;
    void *var_v1_2;

    if ((*D_80103D38) == 1) {
        var_a0 = 0;
        if (M2C_FIELD(D_800900C0, s32 *, 0x34) != 0x320) {
            var_v1 = D_800900C0;
            do {
                var_a0 += 1;
                M2C_FIELD(var_v1, s32 *, 0x34) = (s32) (M2C_FIELD(var_v1, s32 *, 0x34) + 0x14);
                var_v1 += 0xBC;
            } while (var_a0 < 3);
            return 0;
        }
        goto block_6;
    }
    var_a0_2 = 3;
    if (M2C_FIELD(D_800900C0, s32 *, 0x268) == -0x640) {
block_6:
        return 1;
    }
    var_v1_2 = D_800900C0 + 0x234;
    do {
        var_a0_2 += 1;
        M2C_FIELD(var_v1_2, s32 *, 0x34) = (s32) (M2C_FIELD(var_v1_2, s32 *, 0x34) - 0x14);
        var_v1_2 += 0xBC;
    } while (var_a0_2 < 6);
    return 0;
}
