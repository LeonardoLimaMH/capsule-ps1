#include "common.h"

s32 func_800DA9D0(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    extern u8 D_80100F38[];
    s16 temp_v1;
    s16 var_a2;
    s32 temp_s0;
    s32 var_v0;
    u16 temp_v0;
    void *temp_a0;
    void *temp_s1;

    temp_s0 = func_800B1260(arg1) & 0xFFFF;
    temp_s1 = (temp_s0 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s1, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0 = (*(s32 *)((temp_s0 * 0x1A8) + D_80091618) * 0x3C) + D_80063940;
        if ((((u32) M2C_FIELD(temp_a0, u32 *, 0xC) >> 0xB) & 0x1F) != 0xB) {
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
            goto block_24;
        }
        if (M2C_FIELD(temp_a0, s32 *, 0x18) & 3) {
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
            goto block_24;
        }
        if (func_800DC5F8(temp_a0) != 1) {
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
            goto block_24;
        }
        if (func_800D2B34(arg1) == 0) {
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
block_24:
            M2C_FIELD(temp_s1, s32 *, 0x2BC) = var_v0;
        } else {
            temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x326);
            M2C_FIELD(temp_s1, u16 *, 0x324) = temp_v0;
            M2C_FIELD(temp_s1, s16 *, 0x328) = func_800D06D4((s16) temp_v0, (s16) M2C_FIELD(temp_s1, u16 *, 0x326));
            M2C_FIELD(temp_s1, s16 *, 0x344) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(temp_s1, s16 *, 0x328) == 0) {
            var_a2 = (s16) M2C_FIELD(temp_s1, u16 *, 0x326);
            if (var_a2 < 0) {
                var_a2 += 3;
            }
            func_800CE4B8(arg1, arg0, (*D_800F07D0) + (var_a2 >> 2), 1);
            M2C_FIELD(temp_s1, s16 *, 0x344) = 2;
        } else {
            func_800CE164(arg1);
            func_800CE204(arg1, arg0);
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s1, s16 *, 0x344) = 3;
        } else {
            func_80098FEC(arg0, arg1, temp_s0);
        }
        break;
    default:
        M2C_FIELD(temp_s1, s16 *, 0x344) = 0;
        var_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
        goto block_24;
    }
    return M2C_FIELD(temp_s1, s32 *, 0x2BC);
}
