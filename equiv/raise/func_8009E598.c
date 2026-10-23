#include "common.h"

s32 func_8009E598(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED88E[];
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    temp_v0 = func_8009ED54();
    if (temp_v0 == -1) {
        if ((*D_800ED88E) == 0) {
            var_a1 = 0;
            var_a0 = 0;
            M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), s16 *, 0x12) = 0;
            do {
                M2C_FIELD(((var_a1 * 2) + (((*D_8006AF80) * 0x1A8) + (*D_80091618))), s16 *, 0x14) = 0xFFFF;
                M2C_FIELD((var_a0 + ((*D_8006AF80) * 0x1A8) + (*D_80091618)), s32 *, 0x1C) = -1;
                M2C_FIELD((var_a0 + ((*D_8006AF80) * 0x1A8) + (*D_80091618)), s32 *, 0x20) = -1;
                var_a1 += 1;
                M2C_FIELD((var_a0 + ((*D_8006AF80) * 0x1A8) + (*D_80091618)), s32 *, 0x24) = -1;
                var_a0 += 0xC;
            } while (var_a1 < 3);
        } else {
            (*D_800ED88E) = 1;
        }
        func_800A0014(0, 0, 0);
        func_800A04B8();
        func_800CC3E4();
    }
    return temp_v0;
}
