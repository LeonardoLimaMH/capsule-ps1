#include "common.h"

s32 func_800C1C54(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0738[];
    extern M2C_UNK D_80100F38[];
    s32 temp_a0;
    u8 temp_v1;
    void *temp_s0;

    temp_a0 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_a0 * 0x79C) + D_80100F38;
    if ((func_800E14C4(temp_a0) == 1) || ((temp_v1 = *M2C_FIELD(temp_s0, u8 **, 0x2BC), (temp_v1 != 0x52)) && (temp_v1 != 0xD) && (temp_v1 != 0x53) && (temp_v1 != 0x69) && (temp_v1 != 0x79) && (temp_v1 != 0x7A) && (temp_v1 != 0x71) && (temp_v1 != 0x74) && (temp_v1 != 0x77) && (temp_v1 != 0x70)) || (M2C_FIELD(temp_s0, s16 *, 0x344) != 2) || (M2C_FIELD(temp_s0, s16 *, 0x342) == 4)) {
        M2C_FIELD(temp_s0, s16 *, 0x2CA) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x2C4) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2C4) + 1);
        func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128(M2C_FIELD(temp_s0, s16 *, 0x326)), 0);
        func_800D8E90(arg1);
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2C4);
}
