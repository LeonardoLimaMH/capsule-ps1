#include "common.h"

void func_800CAABC(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_a1;
    s32 temp_v0;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    u32 temp_v1;
    u32 var_a2;
    u32 var_v1;
    u32 var_v1_2;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_t0;
    void *var_a3;

    var_t2 = 1;
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_a1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_a1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
    var_t1 = 0;
    var_a3 = M2C_FIELD(arg0, void **, 0x7C);
    do {
        var_a2 = 0x4000;
        temp_t0 = M2C_FIELD(var_a3, u8 *, 0xE);
        temp_v1 = (temp_t0 << 0x10) | M2C_FIELD(D_80085428, u16 *, 0xCEC);
        if (var_t1 != 3) {
            var_a2 = M2C_FIELD(arg0, u32 *, 0x80);
        }
        temp_a1_2 = M2C_FIELD(var_a3, u8 *, 0x6B);
        temp_v0 = temp_a1_2 - temp_t0;
        if (temp_v0 > 0) {
            var_v1 = (u32) (temp_v1 + var_a2) >> 0x10;
            if (var_v1 >= temp_a1_2) {
                M2C_FIELD(var_a3, u8 *, 0xE) = temp_a1_2;
            } else {
                goto block_13;
            }
        } else if (temp_v0 < 0) {
            var_v1_2 = temp_v1 - var_a2;
            if (temp_v1 < var_a2) {
                var_v1_2 = 0;
            }
            temp_a1_3 = M2C_FIELD(var_a3, u8 *, 0x6B);
            var_v1 = var_v1_2 >> 0x10;
            if (temp_a1_3 < var_v1) {
block_13:
                M2C_FIELD(var_a3, u8 *, 0xE) = (u8) var_v1;
                var_t2 = 0;
            } else {
                M2C_FIELD(var_a3, u8 *, 0xE) = temp_a1_3;
            }
        }
        var_t1 += 1;
        var_a3 += 1;
    } while (var_t1 < 5);
    if (var_t2 != 0) {
        M2C_FIELD(D_80085428, s8 *, 0xCF0) = 1;
        func_800CBA04(D_80085428 + 0x5D0, M2C_FIELD(var_a3, u8 *, 0x6B), var_a2, var_a3);
        func_800185F8(arg0);
    }
}
