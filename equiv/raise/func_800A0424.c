#include "common.h"

void func_800A0424(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    u32 temp_a2;

    temp_a2 = M2C_FIELD(D_800EE5F0, s32 *, 0xC) + M2C_FIELD(D_800EFF58, s32 *, 0x318) + 3;
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x314), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5F0, s32 *, 0) | 0x60000, temp_a2 - M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x12), temp_a2);
}
