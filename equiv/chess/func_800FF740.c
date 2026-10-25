#include "common.h"

void func_800FF740(void *arg0) {
    extern u8 D_80085FF2[];
    extern u8 D_80118C18[];
    s32 temp_a2;
    u8 temp_a1;
    u8 temp_s0;
    void *temp_s0_2;

    temp_a2 = MULT_HI((M2C_FIELD(D_80118C18, u8 *, 0x9E9) + 1), 0x66666667);
    temp_s0 = (M2C_FIELD(D_80118C18, u8 *, 0x9E9) + 1) % 10;
    M2C_FIELD(D_80118C18, u8 *, 0x9E9) = temp_s0;
    temp_s0_2 = ((temp_s0 & 0xFF) * 4) + D_80118C18;
    M2C_FIELD(temp_s0_2, s8 *, 0x9EA) = (s8) (((*D_80085FF2) << 7) | (M2C_FIELD(arg0, u8 *, 0) + 1));
    M2C_FIELD(temp_s0_2, u8 *, 0x9EB) = (u8) M2C_FIELD(arg0, u8 *, 1);
    M2C_FIELD(temp_s0_2, s8 *, 0x9EC) = (s8) (M2C_FIELD(arg0, u8 *, 3) + (M2C_FIELD(arg0, u8 *, 2) * 0xD));
    temp_a1 = M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(temp_s0_2, s8 *, 0x9ED) = (s8) (M2C_FIELD(arg0, u8 *, 5) + (temp_a1 * 0xD));
    M2C_FIELD(temp_s0_2, s32 *, 0xA14) = func_800FF644(temp_a1, temp_a2);
    func_800FF820();
}
