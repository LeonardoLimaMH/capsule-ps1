#include "common.h"

void func_800A0540(s32 arg0) {
    extern u8 D_800EFF58[];
    u8 *var_a0;
    s32 temp_a3;
    s32 var_a1;
    s32 var_a2;
    void *temp_v0;
    void *temp_v1;

    if (arg0 != 0) {
        if (arg0 > 0) {
            var_a1 = -1;
            if (arg0 != 1) {
                var_a2 = 0;
            } else {
                var_a1 = M2C_FIELD(D_800EFF58, s32 *, 0x114) - M2C_FIELD(D_800EFF58, s32 *, 0x330);
                goto block_7;
            }
        } else {
            var_a1 = -1;
            goto block_7;
        }
    } else {
        var_a1 = M2C_FIELD(D_800EFF58, s32 *, 0x114) - M2C_FIELD(D_800EFF58, s32 *, 0x32C);
block_7:
        var_a2 = 0;
    }
    temp_a3 = var_a1 * 0x10;
    var_a0 = D_800EFF58;
    M2C_FIELD(D_800EFF58, s32 *, 0x32C) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x32C) + var_a1);
    M2C_FIELD(D_800EFF58, s32 *, 0x330) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x330) + var_a1);
    do {
        temp_v0 = M2C_FIELD(var_a0, void **, 0x120);
        M2C_FIELD(temp_v0, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x4A) - temp_a3);
        if (M2C_FIELD(var_a0, s32 *, 0x21C) != -1) {
            temp_v1 = M2C_FIELD(var_a0, void **, 0x290);
            M2C_FIELD(temp_v1, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x4A) - temp_a3);
        }
        var_a2 += 1;
        var_a0 += 4;
    } while (var_a2 < 0xE);
}
