#include "common.h"

void func_800B7FA8(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_UNK *var_a1;
    s32 temp_a1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_4;
    void *temp_v1_5;

    var_a1 = D_800EEB9C;
    M2C_FIELD(D_800EEB9C, s32 *, 0x18) = arg0;
    temp_v1 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + (u8 *)D_800EEB9C), void **, 0x98);
    var_a3 = arg0 != 1;
    M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x38) & ~1) | var_a3);
    if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) {
        var_a2 = 0;
        if (M2C_FIELD(D_800EEB9C, s32 *, 8) == 1) {
            temp_v1_2 = arg0 == 1;
            var_a3 = temp_v1_2 & 1;
            M2C_FIELD(D_800EEB9C, s32 *, 0x10) = temp_v1_2;
            M2C_FIELD(M2C_FIELD(D_800EEB9C, M2C_UNK **, 0x1C), s32 *, 0x38) = (s32) ((M2C_FIELD(M2C_FIELD(D_800EEB9C, M2C_UNK **, 0x1C), s32 *, 0x38) & ~1) | var_a3);
            do {
                temp_v0 = M2C_FIELD(var_a1, void **, 0x28);
                var_a2 += 1;
                M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x38) & ~1) | var_a3);
                var_a1 += 4;
            } while (var_a2 < 7);
            temp_v1_3 = arg0 != 1;
            var_a1 = M2C_FIELD(D_800EEB9C, M2C_UNK **, 0x1C);
            M2C_FIELD(D_800EEB9C, s32 *, 0x14) = temp_v1_3;
            M2C_FIELD(var_a1, s32 *, 0x38) = (s32) ((M2C_FIELD(var_a1, s32 *, 0x38) & ~0x40) | ((temp_v1_3 ^ 1) << 6));
        }
        func_800B5BA0(arg0, var_a1, var_a2, var_a3);
        func_800B70A0((s16) (1 - arg0));
        return;
    }
    var_a0 = 0;
    if (M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + (u8 *)D_800EEB9C), s32 *, 0x60) > 0) {
        do {
            temp_a1 = var_a0 * 4;
            temp_v1_4 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + (u8 *)D_800EEB9C + temp_a1), void **, 0xD4);
            M2C_FIELD(temp_v1_4, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1_4, s32 *, 0x38) & ~1) | var_a3);
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) < 2) {
                temp_v1_5 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + (u8 *)D_800EEB9C + temp_a1), void **, 0x4C4);
                M2C_FIELD(temp_v1_5, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v1_5, s32 *, 0x38) & ~1) | var_a3);
            }
            var_a0 += 1;
        } while (var_a0 < M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + (u8 *)D_800EEB9C), s32 *, 0x60));
    }
}
