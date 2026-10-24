#include "common.h"

void func_800B78C4(void) {
    extern M2C_UNK D_8006AF80[];
    extern M2C_UNK D_800EEB9C[];
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_ret;
    s32 temp_s0;
    s32 temp_t2;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_s0 = M2C_FIELD(D_8006AF80, s32 *, 4);
    if (M2C_FIELD(D_8006AF80, u16 *, 0) != 0xFFFF) {
        temp_ret = func_800B4704(1);
        temp_hi = temp_s0 % temp_ret;
        temp_v1 = temp_ret / 24;
        temp_a3 = (s32) (temp_hi % temp_v1) / (s32) ((temp_ret / 24) / 60);
        temp_a1 = (temp_hi / temp_v1) % 12;
        temp_t2 = (temp_a1 << 0xC) / 6;
        temp_v1_2 = temp_a3 * 0x155;
        temp_hi_2 = MULT_HI(temp_v1_2, 0x88888889);
        temp_a1_2 = (s32) (temp_a1 << 0xC) >> 0x1F;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) & ~8);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x54) = (u16) ((temp_t2 >> 1) - temp_a1_2);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x54) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), u16 *, 0x54) + (((s32) (temp_hi_2 + temp_v1_2) >> 5) - (temp_v1_2 >> 0x1F)));
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s16 *, 0x78) = 0;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) & ~8);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s16 *, 0x54) = (s16) ((temp_a3 << 0xC) / 60);
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s16 *, 0x78) = 0;
    }
}
