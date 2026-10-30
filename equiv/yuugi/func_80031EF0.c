#include "common.h"

void func_80031EF0(void) {
    extern M2C_UNK D_8006D794[];
    extern M2C_UNK D_8006D79C[];
    extern M2C_UNK D_8006D7A8[];
    extern M2C_UNK D_8006D7BC[];
    extern M2C_UNK D_8006D7CC[];
    extern M2C_UNK D_8006D97C[];
    extern s32 D_80078D38;
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_800922D0[];
    M2C_UNK *var_s4;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    s16 temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_s1;
    s32 var_s2;
    u32 var_s0;
    u32 var_t0;

    var_s2 = 0;
    var_s4 = D_80085428;
    var_a2 = 0;
    do {
        temp_s1 = var_s2 << 6;
        temp_v0 = temp_s1 - 0x48;
        if (M2C_FIELD(D_800922D0, s16 *, 4) == var_s2) {
            var_a2 = 3;
        }
        func_8001F1A8(-0x80, temp_v0, var_a2, 1, 0, D_8006D794, 1, 4, 0);
        var_a2_2 = 0;
        if (M2C_FIELD(D_800922D0, s16 *, 4) == var_s2) {
            var_a2_2 = 3;
        }
        func_8001F35C(-0x48, temp_v0, var_a2_2, 1, 0, var_s2 + 1, 1, 0);
        if (M2C_FIELD((var_s2 + (u8 *)D_80085428), u8 *, 0x34) == 0) {
            func_8001F1A8(-0x40, (s16) (temp_s1 - 0x30), 0, 1, 0, D_8006D97C, 1, 9, 0);
            var_s4 += 8;
        } else {
            temp_s0 = temp_s1 - 0x28;
            func_8001F1A8(-0x88, temp_s0, 0, 1, 0, D_8006D79C, 1, 5, 0);
            temp_v0_2 = temp_s1 - 0x40;
            func_8001F1A8(-0x28, temp_v0_2, 0, 1, 0, D_8006D7A8, 1, 0xA, 0);
            func_8001F1A8(-0x28, temp_s0, 0, 1, 0, D_8006D7BC, 1, 8, 0);
            func_8001F1A8(0x78, temp_s0, 0, 1, 0, D_8006D7CC, 1, 1, 0);
            func_8001F35C(-0x6A, temp_s0, 0, 1, 0, (u32) M2C_FIELD(var_s4, u8 *, 0x38), 2, 0);
            func_8001F35C(0x4C, temp_s0, 0, 1, 0, (u32) M2C_FIELD(var_s4, u8 *, 0x39), 3, 0);
            var_s0 = (M2C_FIELD(var_s4, s32 *, 0x3C) / 3600) % 60;
            var_t0 = (M2C_FIELD(var_s4, s32 *, 0x3C) / 3600) / 60;
            if (var_t0 >= 0x64U) {
                var_t0 = 0x63;
                var_s0 = 0x3B;
            }
            func_8001F35C(0x3C, temp_v0_2, 0, 1, 0, var_t0, 2, 0);
            func_8001F35C(0x60, temp_v0_2, 0, 1, 0, var_s0, 2, 0);
            if (var_s0 < 0xAU) {
                func_8001F35C(0x60, temp_v0_2, 0, 1, 0, 0U, 1, 0);
            }
            var_s4 += 8;
        }
        var_s2 += 1;
        var_a2 = 0;
    } while (var_s2 < 3);
    if (D_80078D38 & 0x4000) {
        func_80034AB0(0x84);
        M2C_FIELD(D_800922D0, s16 *, 4) = (s16) (((u16) M2C_FIELD(D_800922D0, s16 *, 4) + 1) % 3);
        return;
    }
    if (D_80078D38 & 0x1000) {
        func_80034AB0(0x84);
        temp_v0_3 = (u16) M2C_FIELD(D_800922D0, s16 *, 4) - 1;
        M2C_FIELD(D_800922D0, s16 *, 4) = temp_v0_3;
        if (temp_v0_3 & 0x8000) {
            M2C_FIELD(D_800922D0, s16 *, 4) = 2;
        }
    }
}
