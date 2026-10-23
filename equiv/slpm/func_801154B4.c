#include "common.h"

s32 func_801154B4(void *arg0, s32 *arg1) {
    extern s16 D_80131B38;
    extern s16 D_80131B3A;
    extern s32 * D_80131C38;
    extern s32 * D_80131C3C;
    extern s32 ** D_80131C40;
    extern s32 * D_80131C44;
    extern s32 * D_80131C48;
    s16 temp_a1;
    s16 temp_a1_2;
    s32 *var_s2;
    u32 temp_a0;
    u32 temp_s0;
    u32 temp_v1;
    u32 temp_v1_2;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a0;
    u16 var_a0_2;

    var_s2 = arg1;
    func_80116220();
    temp_a1 = M2C_FIELD(arg0, s16 *, 4);
    if (temp_a1 >= 0) {
        var_a0 = (u16) M2C_FIELD(arg0, s16 *, 4);
        if (D_80131B38 < temp_a1) {
            var_a0 = (u16) D_80131B38;
        }
    } else {
        var_a0 = 0;
    }
    temp_a1_2 = M2C_FIELD(arg0, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 4) = (s16) var_a0;
    if (temp_a1_2 >= 0) {
        var_a0_2 = (u16) M2C_FIELD(arg0, s16 *, 6);
        var_v0_2 = var_a0_2 << 0x10;
        if (D_80131B3A < temp_a1_2) {
            var_a0_2 = (u16) D_80131B3A;
            goto block_8;
        }
    } else {
        var_a0_2 = 0;
block_8:
        var_v0_2 = var_a0_2 << 0x10;
    }
    M2C_FIELD(arg0, s16 *, 6) = (s16) var_a0_2;
    temp_v1 = (M2C_FIELD(arg0, s16 *, 4) * (var_v0_2 >> 0x10)) + 1;
    temp_a0 = temp_v1 / 2;
    temp_s0 = temp_v1 >> 5;
    if (temp_a0 <= 0) {
        return -1;
    }
    var_a0_3 = 0xA0000000;
    if (!(*D_80131C3C & 0x04000000)) {
loop_13:
        var_v0 = -1;
        if (func_80116254(0xA0000000) == 0) {
            var_a0_3 = 0xA0000000;
            if (*D_80131C3C & 0x04000000) {
                goto block_15;
            }
            goto loop_13;
        }
    } else {
block_15:
        *D_80131C3C = 0x04000000;
        *D_80131C38 = 0x01000000;
        if (0 != 0) {
            var_a0_3 = 0xB0000000;
        }
        *D_80131C38 = var_a0_3;
        *D_80131C38 = M2C_FIELD(arg0, s32 *, 0);
        var_s0 = (temp_a0 - (temp_s0 * 0x10)) - 1;
        *D_80131C38 = (s32) M2C_FIELD(arg0, s16 *, 4);
        if (var_s0 != -1) {
            do {
                temp_v1_2 = *var_s2;
                var_s2 += 4;
                var_s0 -= 1;
                *D_80131C38 = temp_v1_2;
            } while (var_s0 != -1);
        }
        if (temp_s0 != 0) {
            *D_80131C3C = 0x04000002;
            *D_80131C40 = var_s2;
            *D_80131C44 = (temp_s0 << 0x10) | 0x10;
            *D_80131C48 = 0x01000201;
        }
        var_v0 = 0;
    }
    return var_v0;
}
