#include "common.h"

s32 func_800B9914(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v1;
    s32 var_s0;
    u16 temp_s1;
    u32 temp_a0;
    void *temp_s2;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    temp_s1 = M2C_FIELD((((*D_8006AF80) * 0x1A8) + (*D_80091618)), u16 *, 0x8A);
    temp_s2 = (temp_s1 * 0x79C) + (*D_80100F38);
    temp_a0 = M2C_FIELD(temp_s2, u32 *, 0x798);
    temp_v1 = (temp_a0 >> 0xE) & 0x3F;
    switch (temp_v1) {                              /* irregular */
    default:
        var_s0 = temp_s1 & 0xFFFF;
        if (temp_v1 != 0xE) {

        } else {
            func_800AA8D0(var_s0);
            func_800E66A4(var_s0, ((u32) M2C_FIELD(temp_s2, u32 *, 0x798) >> 0x1A) & 0x1F);
block_13:
            func_800E10BC(var_s0);
block_14:
            M2C_FIELD(temp_s2, s16 *, 0x37E) = 0;
            M2C_FIELD(((temp_s1 * 0x1A8) + (*D_80091618)), s16 *, 0x110) = 0;
        }
        break;
    case 6:
        var_s0 = temp_s1 & 0xFFFF;
        func_800AA990(var_s0, 0);
        func_800CB2B4(0, ((u32) M2C_FIELD(temp_s2, u32 *, 0x798) >> 0x1A) & 0x1F);
        func_800A7600(var_s0);
        func_800E5C08(var_s0, ((u32) M2C_FIELD(temp_s2, u32 *, 0x798) >> 0x1A) & 0x1F);
        func_800C57A8(0);
        goto block_13;
    case 9:
        var_s0 = temp_s1 & 0xFFFF;
        func_800AA930(var_s0);
        func_800CB370(0, ((u32) M2C_FIELD(temp_s2, u32 *, 0x798) >> 0x1A) & 0x1F);
        func_800E6158(var_s0, ((u32) M2C_FIELD(temp_s2, u32 *, 0x798) >> 0x1A) & 0x1F);
        goto block_13;
    case 11:
        M2C_FIELD((temp_s2 + ((temp_a0 >> 0x1A) & 0x1F)), s8 *, 0x3AB) = 0;
        goto block_14;
    }
    func_800CD288(0, 0);
    func_800C60E0(0, 0);
    func_800C62A4(0, 0);
    func_800C5EFC(0, 0);
    return 1;
}
