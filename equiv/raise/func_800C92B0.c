#include "common.h"

void func_800C92B0(void) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern u8 D_800EE650[];
    extern u8 D_800EE670[];
    extern u8 D_800EE690[];
    extern u8 D_80100F38[];
    u8 *var_a1;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_s1;
    u16 temp_a0;
    void *temp_a2;
    void *var_s0;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_a2 = (temp_v0 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_a2, s16 *, 0x2BA);
    temp_a0 = *((temp_v0 * 0x1A8) + D_80091618);
    if (temp_v1 == 0xE) {
        temp_v1_2 = ((u32) M2C_FIELD(((temp_a0 * 0x3C) + D_80063940), u32 *, 0x20) >> 0xF) & 0xF;
        if (temp_v1_2 != 1) {
            if ((temp_v1_2 < 2) && (var_s1 = 0x11, (temp_v1_2 == 0))) {
                var_a1 = D_800EE650;
            } else {
                var_a1 = D_800EE690;
                var_s1 = 0xD;
            }
        } else {
            var_a1 = D_800EE670;
            var_s1 = 0xE;
        }
        var_s0 = M2C_FIELD((temp_a2 + (M2C_FIELD(temp_a2, s16 *, 0x2BA) * 4)), void **, 0x258);
        var_a1_2 = func_80019F30(M2C_FIELD(var_a1, s32 *, 0) | 0x70000, M2C_FIELD(var_a1, s32 *, 0x18) + var_s1, temp_a2);
        var_a0 = var_s0 + 0x14;
        goto block_11;
    }
    if ((temp_v1 == 0xC) && ((((u32) M2C_FIELD(((temp_a0 * 0x3C) + D_80063940), u32 *, 0x20) >> 0xF) & 0xF) == 1)) {
        var_s1 = 0xB;
        var_s0 = M2C_FIELD(temp_a2, void **, 0x288);
        var_a0 = var_s0 + 0x14;
        var_a1_2 = func_80019F30(M2C_FIELD(D_800EE670, s32 *, 0) | 0x70000, M2C_FIELD(D_800EE670, s32 *, 0x18) + 0xB, temp_a2);
block_11:
        func_80015CD0(var_a0, var_a1_2, 0);
        M2C_FIELD(var_s0, s16 *, 0x66) = 0;
        M2C_FIELD(var_s0, s32 *, 0x7C) = var_s1;
        M2C_FIELD(var_s0, s32 *, 0x30) = (s32) ((M2C_FIELD(var_s0, s32 *, 0x30) & ~0x1C0 & ~0x30) | 0x10);
    }
}
