#include "common.h"

void func_800BD164(void *arg0) {
    extern M2C_UNK D_80065164[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_800F05AC[];
    M2C_UNK *var_s1;
    M2C_UNK var_a2;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;

    var_s1 = D_800EFF58;
    if (arg0 == M2C_FIELD(D_800EFF58, s32 *, 0x418)) {
        func_8001F1A8((s16) (M2C_FIELD(arg0, u16 *, 0x46) + 8), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + 0x20), 0, 1, 0, D_800F05AC, 1, 0xE, 4);
    }
    if (arg0 == M2C_FIELD(D_800EFF58, s32 *, 0x34C)) {
        temp_s4 = M2C_FIELD(D_800EFF58, s32 *, 0x348);
        temp_s5 = M2C_FIELD(D_800EFF58, s32 *, 0x344);
        var_s0 = 0;
        if (temp_s4 >= 0) {
            var_s2 = 8;
            do {
                var_a2 = 0;
                if (var_s0 == temp_s5) {
                    var_a2 = 3;
                }
                func_8001F1A8((s16) (M2C_FIELD(arg0, u16 *, 0x46) + 0x10), (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + var_s2), var_a2, 1, 0, (M2C_FIELD(var_s1, s32 *, 0x3D4) * 0xC) + D_80065164, 1, 6, 4);
                var_s2 += 0x10;
                var_s0 += 1;
                var_s1 += 4;
            } while (temp_s4 >= var_s0);
        }
    }
    if ((*D_8008EE44) == 0x41) {
        func_80013920(arg0);
    }
}
