#include "common.h"

s32 func_800D9B00(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0738[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x798) & ~0x3000);
        break;
    case 1:
        func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128(M2C_FIELD(temp_s0, s16 *, 0x326)), 0);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~0x3000) | 0x1000);
        break;
    case 2:
        if (((u32) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u32 *, 0x798) >> 0xC) & 3) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
            M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~0x3000) | 0x2000);
        }
        break;
    default:
        if ((((u32) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u32 *, 0x798) >> 0xC) & 3) == 2) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        }
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
