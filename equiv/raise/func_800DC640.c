#include "common.h"

void func_800DC640(void) {
    extern u8 D_8006AFCC[];
    extern u8 D_800F1F58[];
    extern u8 D_800F1F70[];
    extern u8 D_80105990[];
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    M2C_FIELD(D_8006AFCC, s16 *, 0x34) = 0;
    M2C_FIELD(D_8006AFCC, s16 *, 0x30) = 1;
    M2C_FIELD(D_80105990, s16 *, 0xA) = 0;
    func_80034AB0(1);
    M2C_FIELD(D_80105990, s16 *, 0) = 0;
    func_800E4838(1, 0);
    temp_s0 = M2C_FIELD(D_80105990, s16 *, 0) * 8;
    temp_v0 = temp_s0 + D_800F1F58;
    M2C_FIELD(D_80105990, s16 *, 0xC) = GetClut(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4));
    temp_s0_2 = temp_s0 + D_800F1F70;
    M2C_FIELD(D_80105990, s16 *, 0xE) = GetTPage(0, 0, M2C_FIELD(temp_s0_2, s32 *, 0), M2C_FIELD(temp_s0_2, s32 *, 4));
}
