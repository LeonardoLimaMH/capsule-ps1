#include "common.h"

s32 func_800D4258(s32 arg0) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EF524[];
    extern s16 D_800EFA4A[];
    extern s16 D_800EFA4C[];
    extern M2C_UNK D_800FAE10[];
    extern M2C_UNK D_800FDE08[];
    M2C_UNK *var_a2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a1;
    s32 var_v0;
    u16 temp_t5;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_t0;
    void *temp_v1_2;
    void *var_a0;

    temp_v1 = func_800B1260() & 0xFFFF;
    if (temp_v1 == 0xFFFF) {
        return 0;
    }
    temp_t0 = (temp_v1 * 0x1A8) + (u8 *)D_80091618;
    var_a0 = temp_t0;
    var_a2 = D_800EF524;
    temp_t5 = M2C_FIELD(temp_t0, u16 *, 0x10);
    temp_a3 = temp_t5 & 0xFFFF;
    var_a1 = temp_a3 * 0x9C;
    do {
        if (temp_a3 == 0xFFFF) {
            var_v0 = M2C_FIELD(var_a2, s32 *, 0x444);
        } else {
            var_v0 = *(s32 *)(var_a1 + (u8 *)D_800EF524);
        }
        if (var_v0 != -1) {
            temp_v1_2 = M2C_FIELD(var_a0, void **, 0x18C);
            M2C_FIELD(temp_v1_2, u16 *, 0x4C) = (u16) (1 - M2C_FIELD(temp_v1_2, u16 *, 0x4C));
        }
        M2C_FIELD(var_a0, void **, 0x18C) = NULL;
        var_a0 += 4;
        var_a1 += 0x34;
        var_a2 += 0x34;
    } while ((s32) var_a0 < (s32) (temp_t0 + 0xC));
    if (temp_t5 != 0xFFFF) {
        temp_a1 = M2C_FIELD(temp_t0, void **, 0x178);
        temp_v0 = M2C_FIELD(temp_a1, u32 *, 0x34);
        M2C_FIELD(temp_a1, u32 *, 0x34) = (u32) ((temp_v0 & ~0x100) | ((((temp_v0 >> 8) & 1) ^ 1) << 8));
        temp_v1_3 = (arg0 != 1) * 4;
        M2C_FIELD(temp_t0, void **, 0x178) = NULL;
        *(s32 *)(temp_v1_3 + (u8 *)D_800FDE08) = 0;
        temp_a1_2 = M2C_FIELD(temp_t0, void **, 0x17C);
        temp_v0_2 = M2C_FIELD(temp_a1_2, u32 *, 0x34);
        M2C_FIELD(temp_a1_2, u32 *, 0x34) = (u32) ((temp_v0_2 & ~0x100) | ((~(temp_v0_2 >> 8) & 1) << 8));
        M2C_FIELD(temp_t0, void **, 0x17C) = NULL;
        *(s32 *)(temp_v1_3 + (u8 *)D_800FAE10) = 0;
    }
    (*D_800EFA4A) = 0;
    (*D_800EFA4C) = 0;
    return 1;
}
