#include "common.h"

void func_800A7D2C(void) {
    extern u8 D_80085428[];
    extern s32 D_800B3C20[];
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    void *temp_v0_3;
    void *temp_v1;
    void *var_a3;
    void *var_t0;
    void *var_v0_2;
    void *var_v0_3;
    void *var_v1;

    var_t2 = (*D_800B3C20);
    var_v0 = var_t2 * 8;
    if ((var_t2 != 0x31) && ((var_t2 != 0) || (var_v0 = var_t2 * 8, (M2C_FIELD(D_80085428, u8 *, 2) != 1)))) {
        var_t1 = var_t2 + 1;
        var_v0 = var_t2 * 8;
        if (var_t1 < (s32) M2C_FIELD(D_80085428, u8 *, 2)) {
            var_t0 = (var_t1 * 0xE) + D_80085428;
            var_a3 = (var_t2 * 0xE) + D_80085428;
            do {
                var_a0 = 0;
                M2C_FIELD(var_a3, u8 *, 0x50) = (u8) M2C_FIELD(var_t0, u8 *, 0x50);
                var_v1 = var_a3;
loop_6:
                temp_v0 = M2C_FIELD((var_t0 + var_a0), u8 *, 0x51);
                var_a0 += 1;
                M2C_FIELD(var_v1, u8 *, 0x51) = temp_v0;
                var_v1 = var_a3 + var_a0;
                if (var_a0 < 8) {
                    goto loop_6;
                }
                var_a0_2 = 0;
loop_8:
                temp_v1 = var_a3 + var_a0_2;
                temp_v0_2 = M2C_FIELD((var_t0 + var_a0_2), u8 *, 0x59);
                var_a0_2 += 1;
                M2C_FIELD(temp_v1, u8 *, 0x59) = temp_v0_2;
                if (var_a0_2 < 5) {
                    goto loop_8;
                }
                var_a3 += 0xE;
                var_t2 += 1;
                var_t1 += 1;
                var_t0 += 0xE;
            } while (var_t1 < (s32) M2C_FIELD(D_80085428, u8 *, 2));
            var_v0 = var_t2 * 8;
        }
    }
    temp_v0_3 = D_80085428 + ((var_v0 - var_t2) * 2);
    M2C_FIELD(temp_v0_3, s8 *, 0x50) = 0;
    var_a0_3 = 7;
    var_v0_2 = temp_v0_3 + 7;
    do {
        M2C_FIELD(var_v0_2, s8 *, 0x51) = 0;
        var_a0_3 -= 1;
        var_v0_2 -= 1;
    } while (var_a0_3 >= 0);
    var_a0_4 = 4;
    var_v0_3 = D_80085428 + (var_t2 * 0xE) + 4;
    do {
        M2C_FIELD(var_v0_3, s8 *, 0x59) = 0;
        var_a0_4 -= 1;
        var_v0_3 -= 1;
    } while (var_a0_4 >= 0);
    temp_v0_4 = M2C_FIELD(D_80085428, u8 *, 2) - 1;
    M2C_FIELD(D_80085428, u8 *, 2) = temp_v0_4;
    if (!(temp_v0_4 & 0xFF)) {
        (*D_800B3C20) = 0;
        return;
    }
    if ((*D_800B3C20) >= (s32) M2C_FIELD(D_80085428, u8 *, 2)) {
        (*D_800B3C20) = M2C_FIELD(D_80085428, u8 *, 2) - 1;
    }
}
