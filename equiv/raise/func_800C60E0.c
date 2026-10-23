#include "common.h"

void func_800C60E0(s32 arg0, s32 arg1) {
    extern s16 D_80078C20[];
    extern M2C_UNK D_800EE5D0[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1;

    temp_s3 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    if (arg1 != 0) {
        var_s2 = 0;
        if (arg1 == 1) {
            do {
                temp_s1 = var_s2 & 0xFFFF;
                temp_s0 = temp_s1 * 4;
                temp_v0 = func_800B6D98(4, 0, 0, 4, 0, (*D_800EE5D0), M2C_FIELD((temp_s0 + (*D_800EEB9C)), s32 *, 0x6E0), 1, 1, 0, 2, 0);
                temp_s0_2 = temp_s0 + temp_s3;
                var_s2 += 1;
                M2C_FIELD(temp_s0_2, void **, 0x230) = temp_v0;
                M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x200) | ((arg0 & 1) << 9));
                temp_a0 = M2C_FIELD(temp_s0_2, void **, 0x230);
                M2C_FIELD(temp_a0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x34) & ~0xC00);
                temp_a0_2 = M2C_FIELD(temp_s0_2, void **, 0x230);
                M2C_FIELD(temp_a0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x34) & 0xFFFF0FFF) | ((temp_s1 & 0xF) << 0xC));
            } while ((u32) (var_s2 & 0xFFFF) < 9U);
        }
    } else {
        var_s2_2 = 0;
        var_v0 = 0 & 0xFFFF;
        do {
            temp_v1 = M2C_FIELD(((var_v0 * 4) + temp_s3), void **, 0x230);
            var_s2_2 += 1;
            M2C_FIELD(temp_v1, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x34) & ~0x100) | (((1 - (*D_80078C20)) & 1) << 8));
            var_v0 = var_s2_2 & 0xFFFF;
        } while ((u32) (var_s2_2 & 0xFFFF) < 9U);
    }
}
