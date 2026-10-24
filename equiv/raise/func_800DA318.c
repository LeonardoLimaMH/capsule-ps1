#include "common.h"

s32 func_800DA318(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0770[];
    extern s16 D_800F0778[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;
    s16 var_a2;
    s32 temp_v0;
    void *temp_s0;

    temp_v0 = func_800B1260(arg1);
    temp_s0 = ((temp_v0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x798) & ~0xC0);
        break;
    case 1:
        if (func_800D0CFC(arg1) == 0) {
            var_a2 = (*D_800F0770);
        } else {
            var_a2 = (*D_800F0778);
        }
        func_800CE4B8(arg1, arg0, var_a2, 0);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~0xC0) | 0x40);
        break;
    case 2:
        if (((u8) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u8 *, 0x798) >> 6) != 0) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
            M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~0xC0) | 0x80);
        }
        break;
    default:
        if (((u8) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u8 *, 0x798) >> 6) == 2) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
            func_800D8E90(arg1);
            func_800D4B7C(arg1, temp_v0 & 0xFFFF);
        }
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
