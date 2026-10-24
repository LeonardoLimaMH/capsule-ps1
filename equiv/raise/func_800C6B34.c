#include "common.h"

s32 func_800C6B34(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0790[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        break;
    case 1:
        func_800CE4B8(arg1, arg0, (*D_800F0790), 1);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x798) & ~0x20);
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
