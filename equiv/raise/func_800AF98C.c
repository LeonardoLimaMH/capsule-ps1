#include "common.h"

void func_800AF98C(void) {
    extern M2C_UNK D_8006AF80[];
    extern M2C_UNK D_80091618[];
    s32 var_a0;
    s32 var_s0;
    s32 var_v1;

    if (M2C_FIELD(D_8006AF80, s32 *, 4) != 0) {
        var_s0 = 0;
        if (M2C_FIELD(D_8006AF80, s32 *, 4) == ((M2C_FIELD(D_8006AF80, s32 *, 4) / 86400) * 0x15180)) {
            var_a0 = 0 & 0xFFFF;
            do {
                var_v1 = -1;
                if (M2C_FIELD(((var_a0 * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) != 0xFFFF) {
                    if (var_a0 == M2C_FIELD(D_8006AF80, u16 *, 0)) {
                        var_v1 = 1;
                    } else {
                        var_v1 = (var_a0 != M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)) * 2;
                    }
                }
                if (var_v1 != -1) {
                    func_800E6948(var_s0 & 0xFFFF);
                }
                var_s0 += 1;
                var_a0 = var_s0 & 0xFFFF;
            } while (var_s0 < 6);
        }
    }
}
