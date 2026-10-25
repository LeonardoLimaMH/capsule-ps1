#include "common.h"

void func_800A0618(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_800EFF58[];
    extern u8 D_800F0568[];
    extern u8 D_800F0584[];
    u8 *var_a3;
    M2C_UNK var_a2;
    s16 var_s0;
    s16 var_v0;
    s32 var_v0_2;
    void *temp_v0;

    var_s0 = M2C_FIELD(D_800EFF58, s16 *, 0x32C);
    if (M2C_FIELD(D_800EFF58, s32 *, 0x330) >= M2C_FIELD(D_800EFF58, s16 *, 0x32C)) {
        do {
            var_v0 = var_s0 + 1;
            if (arg0 != 2) {
                var_a2 = 0;
                if (var_s0 == M2C_FIELD(D_800EFF58, s32 *, 0x114)) {
                    var_a2 = 3;
                }
                if (var_s0 == 0xD) {
                    var_a2 = 1;
                }
                if ((u32) ((var_s0 - 0xA) & 0xFFFF) < 3U) {
                    var_v0_2 = var_s0 * 4;
                    if (!(M2C_FIELD(D_80085428, u8 *, 6) & *((var_s0 * 2) + D_800F0568))) {
                        var_a3 = D_800F0584;
                    } else {
                        goto block_11;
                    }
                } else {
                    var_v0_2 = var_s0 * 4;
block_11:
                    var_a3 = ((var_v0_2 + var_s0) * 2) + (D_800EFF58 + 0x190);
                }
                temp_v0 = M2C_FIELD((((s32) (var_s0 << 0x10) >> 0xE) + D_800EFF58), void **, 0x120);
                func_8001F1A8(M2C_FIELD(temp_v0, s16 *, 0x46), M2C_FIELD(temp_v0, s16 *, 0x4A), var_a2, 1, ((u32) M2C_FIELD(temp_v0, u32 *, 0x38) >> 6) & 1, var_a3, 1, 5, 4);
                var_v0 = var_s0 + 1;
            }
            var_s0 = var_v0;
        } while (M2C_FIELD(D_800EFF58, s32 *, 0x330) >= var_v0);
    }
}
