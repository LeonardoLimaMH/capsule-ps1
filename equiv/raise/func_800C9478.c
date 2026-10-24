#include "common.h"

void func_800C9478(M2C_UNK arg1) {
    extern M2C_UNK D_800F1A58[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v0;
    s32 var_s0;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_v1;

    temp_v0 = func_800B1260(arg1);
    temp_s1 = ((temp_v0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s1, void **, 0x2BC);
    M2C_FIELD(temp_s1, void **, 0x2BC) = (void *) (temp_v1 + 1);
    temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 1);
    if (temp_v1_2 != 0) {
        if (temp_v1_2 != 1) {
            var_s0 = temp_v0 & 0xFFFF;
        } else {
            func_800C5B30(arg1, 1, M2C_FIELD(temp_s1, s16 *, 0x2BA) - 8);
            var_s0 = temp_v0 & 0xFFFF;
        }
    } else {
        func_800C5B30(arg1, 0, M2C_FIELD(temp_s1, s16 *, 0x2BA) - 8);
        func_800CB370(arg1, M2C_FIELD(temp_s1, s16 *, 0x2BA));
        func_800C92B0(arg1);
        var_s0 = temp_v0 & 0xFFFF;
    }
    func_800E6158(var_s0, (u16) M2C_FIELD(temp_s1, s16 *, 0x2BA));
    *((var_s0 * 2) + D_800F1A58) = 0;
    func_800D4CC4(arg1);
    M2C_FIELD(temp_s1, void **, 0x2BC) = (void *) (M2C_FIELD(temp_s1, void **, 0x2BC) + 1);
}
