#include "common.h"

void func_800B768C(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_800EFF58[];
    s32 temp_s0;
    s32 var_a2;
    s32 var_v1;

    var_v1 = 0;
    do {
        if (var_v1 == M2C_FIELD((*D_800EEB9C), s32 *, 0x73C)) {
            var_a2 = 1;
        } else if (var_v1 == (*D_8006AF80)) {
            var_a2 = 3;
        } else {
            var_a2 = (M2C_FIELD(((var_v1 * 0x1A8) + (*D_80091618)), u16 *, 0x10) != 0xFFFF) * 2;
        }
        temp_s0 = var_v1 + 1;
        func_8001F35C((s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x14), u16 *, 0x46) + (var_v1 * 0xD) + 0x32), (s16) (M2C_FIELD(M2C_FIELD((*D_800EFF58), void **, 0x14), u16 *, 0x4A) + 8), var_a2, 0, 0, temp_s0, 1, 5);
        var_v1 = temp_s0;
    } while (var_v1 < 6);
}
