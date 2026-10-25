#include "common.h"

void func_800FE98C(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    extern u8 D_80119710[];
    extern u8 D_8011974C[];
    s16 var_a1;
    s16 var_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_t3 = 0;
    if ((*D_8011974C) != 0) {
        if ((*D_8011974C) == 1) {
            var_t1 = 4;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_t1 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 4;
            }
            var_t0 = 4;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_t0 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 4;
            }
            var_a3 = 8;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_a3 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 8;
            }
            var_t2 = M2C_FIELD(D_80069AD4, s16 *, 0xE8) - M2C_FIELD(D_80119710, s16 *, 0x34);
            var_a1 = M2C_FIELD(D_80119710, s16 *, 0x36);
            var_v1 = M2C_FIELD(D_80119710, s16 *, 0x38);
        } else {
            var_t1 = 0x20;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_t1 = M2C_FIELD(D_8008ED68, u8 *, 0x103) << 5;
            }
            var_t0 = 0x20;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_t0 = M2C_FIELD(D_8008ED68, u8 *, 0x103) << 5;
            }
            var_a3 = 0x40;
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_a3 = M2C_FIELD(D_8008ED68, u8 *, 0x103) << 6;
            }
            var_t2 = M2C_FIELD(D_80069AD4, s16 *, 0xE8) - M2C_FIELD(D_80119710, s16 *, 0x2C);
            var_a1 = M2C_FIELD(D_80119710, s16 *, 0x2E);
            var_v1 = M2C_FIELD(D_80119710, s16 *, 0x30);
        }
        var_a0 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) - var_v1;
        var_v1_2 = var_t2;
        if (var_t2 < 0) {
            var_v1_2 = -var_v1_2;
        }
        var_a2 = M2C_FIELD(D_80069AD4, s16 *, 0xEA) - var_a1;
        if (var_v1_2 < var_t1) {
            var_t1 = var_v1_2;
        }
        if (var_t2 < 0) {
            var_t1 = -var_t1;
        }
        var_v1_3 = var_a2;
        if (var_a2 < 0) {
            var_v1_3 = -var_v1_3;
        }
        if (var_v1_3 < var_t0) {
            var_t0 = var_v1_3;
        }
        if ((u32) var_a2 >= 0x800U) {
            var_t0 = -var_t0;
        }
        var_v1_4 = var_a0;
        if (var_a0 < 0) {
            var_v1_4 = -var_v1_4;
        }
        if (var_v1_4 < var_a3) {
            var_a3 = var_v1_4;
        }
        if (var_a0 < 0) {
            var_a3 = -var_a3;
        }
        if (var_t2 != 0) {
            var_t3 = 1;
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) - var_t1);
        }
        if (var_a2 != 0) {
            var_t3 += 1;
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) - var_t0);
        }
        if (var_a0 != 0) {
            var_t3 += 1;
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - var_a3);
        }
        if (var_t3 == 0) {
            (*D_8011974C) = 0;
        }
    }
    func_8002CC74(var_a0, var_a1, var_a2, var_a3);
    func_8002CD50();
}
