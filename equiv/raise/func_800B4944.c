#include "common.h"

void func_800B4944(s32 arg0) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EE5D0[];
    extern s16 D_800EEB90[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    void *temp_s2;

    var_a1 = arg0;
    if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) == 0xFFFF) {
        var_v0 = var_a1 ^ 1;
        if (var_a1 == 0) {
            var_a1 = 1;
            goto block_3;
        }
    } else {
block_3:
        var_v0 = var_a1 ^ 1;
    }
    (*D_800EEB90) = var_v0 == 0;
    var_s1 = 1;
    do {
        temp_s0 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_s0 != 0xFFFF) {
            temp_s2 = (temp_s0 * 0x79C) + D_80100F38;
            if ((*D_800EEB90) == var_s1) {
                var_v1 = M2C_FIELD(D_800EEB9C, s32 *, 0xC8);
            } else {
                var_v1 = M2C_FIELD(D_800EE5D0, s32 *, 8) + (var_s1 - 2);
            }
            temp_v0 = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, var_v1 + M2C_FIELD(D_800EE5D0, s32 *, 0xC));
            M2C_FIELD(M2C_FIELD(temp_s2, void **, 0x190), s32 *, 0x1C) = 0;
            M2C_FIELD(M2C_FIELD(temp_s2, void **, 0x190), s32 *, 0x18) = temp_v0;
            func_800B4AAC(temp_s0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
}
