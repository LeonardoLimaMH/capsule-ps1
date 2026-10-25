#include "common.h"

s32 func_800DAE14(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    extern u8 D_80100F38[];
    extern s32 D_8010530C[];
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    u16 temp_a1;
    void *temp_s0;
    void *temp_s2;

    temp_v0 = func_800B1260(arg1);
    temp_s1 = temp_v0 & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0 = *(s32 *)((temp_s1 * 0x1A8) + D_80091618);
        temp_s2 = (temp_a0 * 0x3C) + D_80063940;
        if ((u32) ((((u32) M2C_FIELD(temp_s2, u32 *, 0xC) >> 0xB) & 0x1F) - 1) >= 0xEU) {
            var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
            goto block_23;
        }
        if (temp_a0 == 4) {
            var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
            goto block_23;
        }
        if (func_800E14C4(temp_s1) == 1) {
            var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
            goto block_23;
        }
        temp_v0_2 = func_800DBC98(temp_v0, ((u32) M2C_FIELD(temp_s2, u32 *, 0xC) >> 0xB) & 0x1F);
        (*D_8010530C) = temp_v0_2;
        if (temp_v0_2 == 0) {
            var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
block_23:
            M2C_FIELD(temp_s0, s32 *, 0x2BC) = var_v0;
        } else {
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            temp_a1 = ((u32) M2C_FIELD(temp_s2, u32 *, 0x1C) >> 8) & 7;
            M2C_FIELD(temp_s0, u16 *, 0x326) = temp_a1;
            M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), temp_a1);
            M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        }
        break;
    case 1:
        if (((*D_8008ED80) & 3) == 3) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                func_800CE4B8(arg1, arg0, (*D_800F07D0), 1);
                M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        } else {
            func_80098FEC(arg0, arg1, temp_s1);
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
        goto block_23;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
