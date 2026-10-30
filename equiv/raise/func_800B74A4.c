#include "common.h"

void func_800B74A4(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_80100F38[];
    M2C_UNK *var_s1;
    s16 temp_a0;
    s16 temp_v1;
    s16 var_v0;
    s32 var_a2;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 0xF) < 0x32U) {
        var_s2 = 0x32;
        var_s1 = D_80100F38;
        do {
            if (var_s0 == M2C_FIELD(D_800EEB9C, s32 *, 0x73C)) {
                var_a2 = 1;
                if (var_s0 != (*D_8006AF80)) {

                } else {
                    goto block_6;
                }
            } else {
block_6:
                var_a2 = var_s0 == M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A);
            }
            temp_a0 = M2C_FIELD(var_s1, s16 *, 0x384);
            if ((temp_a0 == 1) && ((var_s0 == (*D_8006AF80)) || (var_s0 == M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)))) {
                if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) != temp_a0) {
                    temp_v1 = M2C_FIELD(var_s1, s16 *, 0x386);
                    var_v0 = temp_v1;
                    if (temp_v1 < 0) {
                        var_v0 = temp_v1 + 0x1F;
                    }
                    if ((s16) (temp_v1 - ((var_v0 >> 5) << 5)) < 0x10) {
                        goto block_14;
                    }
                } else {
block_14:
                    goto block_15;
                }
            } else {
block_15:
                func_8001F35C((s16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x46) + var_s2), (s16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), u16 *, 0x4A) + 8), var_a2, 0, var_s0 != (*D_8006AF80), var_s0 + 1, 1, 3);
            }
            var_s2 += 0xD;
            var_s0 += 1;
            var_s1 += 0x79C;
        } while (var_s0 < 6);
    }
}
