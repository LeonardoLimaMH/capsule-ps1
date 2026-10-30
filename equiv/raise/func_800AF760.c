#include "common.h"

void func_800AF760(void) {
    extern M2C_UNK D_8006AF80[];
    extern M2C_UNK D_80091618[];
    s32 temp_a0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_s0_2;

    temp_s1 = M2C_FIELD(D_8006AF80, s32 *, 4);
    if (temp_s1 != 0) {
        if (temp_s1 == ((M2C_FIELD(D_8006AF80, s32 *, 4) / 28800) * 0x7080)) {
            var_s0 = 0;
            do {
                temp_a0 = var_s0 & 0xFFFF;
                if (M2C_FIELD(((temp_a0 * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) == 0xFFFF) {
                    var_a0 = -1;
                } else if (temp_a0 == M2C_FIELD(D_8006AF80, u16 *, 0)) {
                    var_a0 = 1;
                } else {
                    var_a0 = (temp_a0 != M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)) * 2;
                }
                if (var_a0 != -1) {
                    func_800E68D8(var_s0 & 0xFFFF);
                }
                var_s0 += 1;
            } while (var_s0 < 6);
        }
        if (temp_s1 != 0) {
            var_s0_2 = 0;
            if (temp_s1 == ((temp_s1 / 200) * 0xC8)) {
                var_a0_2 = 0 & 0xFFFF;
                do {
                    if (M2C_FIELD(((var_a0_2 * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) == 0xFFFF) {
                        var_a0_3 = -1;
                    } else if (var_a0_2 == M2C_FIELD(D_8006AF80, u16 *, 0)) {
                        var_a0_3 = 1;
                    } else {
                        var_a0_3 = (var_a0_2 != M2C_FIELD(((M2C_FIELD(D_8006AF80, u16 *, 0) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A)) * 2;
                    }
                    if (var_a0_3 != -1) {
                        func_800AF468(var_a0_3, var_s0_2 & 0xFFFF);
                    }
                    var_s0_2 += 1;
                    var_a0_2 = var_s0_2 & 0xFFFF;
                } while (var_s0_2 < 6);
            }
        }
    }
}
