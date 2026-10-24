#include "common.h"

s32 func_800C8378(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0760[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    func_800D8E90(arg1);
    func_800CE4B8(arg1, arg0, (*D_800F0760), 0);
    M2C_FIELD(temp_s0, s16 *, 0x364) = func_800B5034(arg1, temp_s1, 7);
    M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
    func_800E134C(0);
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
