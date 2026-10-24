#include "common.h"

void func_800C72BC(M2C_UNK arg1) {
    extern M2C_UNK D_800EE5D0[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_800F1A58[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s1;
    void *temp_s0;
    void *temp_s2;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s2 = (temp_s1 * 0x79C) + D_80100F38;
    if ((u32) (M2C_FIELD(temp_s2, u16 *, 0x2BA) - 4) < 2U) {
        func_800C59F4(arg1, 0, 8);
    }
    func_800CB2B4(arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x2BA));
    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + temp_s0), void **, 0x230), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, M2C_FIELD(D_800EE5D0, s32 *, 0x18) + M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + D_800EEB9C), s32 *, 0x6E0), M2C_FIELD(D_800EE5D0, s32 *, 0x18));
    M2C_FIELD(temp_s0, s16 *, 0x37A) = 0;
    func_800A7600(temp_s1);
    func_800E5C08(temp_s1, M2C_FIELD(temp_s2, u16 *, 0x2BA));
    *((temp_s1 * 2) + D_800F1A58) = 0;
    func_800D4CC4(arg1);
    M2C_FIELD(temp_s2, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x2BC) + 1);
}
