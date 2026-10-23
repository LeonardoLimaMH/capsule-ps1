#include "common.h"

void func_800C62A4(s32 arg0, s32 arg1) {
    extern s16 D_80078C20[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    if (arg0 != 2) {
        temp_s2 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
        if (arg1 != 0) {
            var_s1 = 0;
            if (arg1 == 1) {
                do {
                    temp_s0 = var_s1 & 0xFFFF;
                    temp_v0 = func_800C5CA0(arg0, temp_s0);
                    temp_a1 = (temp_s0 * 4) + temp_s2;
                    M2C_FIELD(temp_a1, void **, 0x278) = temp_v0;
                    var_s1 += 1;
                    M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x200) | ((arg0 & 1) << 9));
                    temp_a0 = M2C_FIELD(temp_a1, void **, 0x278);
                    M2C_FIELD(temp_a0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x34) & ~0xC00) | 0x400);
                    temp_v1 = M2C_FIELD(temp_a1, void **, 0x278);
                    M2C_FIELD(temp_v1, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x34) & 0xFFFF0FFF) | (((temp_s0 + 8) & 0xF) << 0xC));
                } while ((u32) (var_s1 & 0xFFFF) < 7U);
            }
        } else {
            var_s1_2 = 0;
            var_v0 = 0 & 0xFFFF;
            do {
                temp_v1_2 = M2C_FIELD(((var_v0 * 4) + temp_s2), void **, 0x278);
                var_s1_2 += 1;
                M2C_FIELD(temp_v1_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v1_2, s32 *, 0x34) & ~0x100) | (((1 - (*D_80078C20)) & 1) << 8));
                var_v0 = var_s1_2 & 0xFFFF;
            } while ((u32) (var_s1_2 & 0xFFFF) < 7U);
        }
    }
}
