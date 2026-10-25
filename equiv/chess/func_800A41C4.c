#include "common.h"

void func_800A41C4(void *arg0) {
    extern u8 D_8008619F[];
    extern u8 D_8008ED68[];
    extern u8 D_80100C18[];
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5C);
    switch ((*D_8008619F)) {                           /* irregular */
    case 3:
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~1);
    case 0:
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_a0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_a0 = temp_v1 + 1;
        }
        temp_s0 = (temp_a1 * 4) + D_80100C18;
        M2C_FIELD(arg0, s32 *, 0x54) = var_a0;
        temp_v0 = rsin(((var_a0 << 0xC) / 120) & 0x7FF, temp_a1, MULTU_HI((var_a0 << 0xC), 0x88888889));
        var_v0 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 0);
        if (var_v0 < 0) {
            var_v0 += 0xFFF;
        }
        M2C_FIELD(arg0, s8 *, 0x38) = (s8) (var_v0 >> 0xC);
        var_v0_2 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 1);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        M2C_FIELD(arg0, s8 *, 0x39) = (s8) (var_v0_2 >> 0xC);
        var_v0_3 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 2);
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        M2C_FIELD(arg0, s8 *, 0x3A) = (s8) (var_v0_3 >> 0xC);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) | 1);
        return;
    default:
        func_800185F8(arg0, temp_a1);
        return;
    }
}
