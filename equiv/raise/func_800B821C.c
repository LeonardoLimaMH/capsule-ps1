#include "common.h"

void func_800B821C(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_800EEA00[];
    extern u8 D_800EEB9C[];
    u8 *var_t1;
    u8 *var_t1_2;
    u8 *var_t2;
    u8 *var_t2_2;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_v1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1_2;
    s32 var_a1_4;
    s8 var_a1;
    s8 var_a1_3;
    u32 var_t0;
    void **var_a3;
    void **var_a3_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    if ((*D_8006AF80) != 0xFFFF) {
        var_t0 = 0;
        if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
            var_t0 = 0;
            if (func_800E158C(D_80091618, 0xFFFF) == 1) {
                var_t1 = D_800EEB9C;
                var_t2 = D_800EEB9C;
                do {
                    var_a1 = 0;
                    if ((var_t0 >= 2U) && (var_t0 != 3)) {
                        var_a1 = var_t0 != 4;
                    }
                    *(var_t0 + D_800EEA00) = var_a1;
                    temp_a0 = M2C_FIELD(var_t1, void **, 0x28);
                    M2C_FIELD(temp_a0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x38) & ~0x40) | ((var_a1 ^ 1) << 6));
                    if (var_t0 == M2C_FIELD(D_800EEB9C, s32 *, 0x24)) {
                        var_a1_2 = 0;
                        if (M2C_FIELD(var_t1, s32 *, 0x60) > 0) {
                            var_a3 = var_t2 + 0xD4;
                            var_a2 = var_t2 + 0x3C8;
                            do {
                                temp_a0_2 = *var_a3;
                                var_a3 += 4;
                                M2C_FIELD(temp_a0_2, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x38) & ~0x40) | ((*var_a2 != 1) << 6));
                                var_a1_2 += 1;
                                var_a2 += 4;
                            } while (var_a1_2 < M2C_FIELD(var_t1, s32 *, 0x60));
                        }
                    }
                    var_t1 += 4;
                    var_t0 += 1;
                    var_t2 += 0x24;
                } while ((s32) var_t0 < 7);
                return;
            }
        }
        goto block_14;
    }
    var_t0 = 0;
block_14:
    var_t1_2 = D_800EEB9C;
    var_t2_2 = D_800EEB9C;
    do {
        temp_v0 = M2C_FIELD(var_t1_2, s32 *, 0x60);
        var_a0 = 0;
        if (temp_v0 > 0) {
            var_a1_3 = 1;
            var_v1 = var_t2_2 + 0x3C8;
loop_17:
            var_a0 += 1;
            if (*var_v1 != 1) {
                var_v1 += 4;
                if (var_a0 >= temp_v0) {
                    goto block_19;
                }
                goto loop_17;
            }
        } else {
block_19:
            var_a1_3 = 0;
        }
        *(var_t0 + D_800EEA00) = var_a1_3;
        temp_a0_3 = M2C_FIELD(var_t1_2, void **, 0x28);
        M2C_FIELD(temp_a0_3, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_a0_3, s32 *, 0x38) & ~0x40) | ((var_a1_3 ^ 1) << 6));
        if (var_t0 == M2C_FIELD(D_800EEB9C, s32 *, 0x24)) {
            var_a1_4 = 0;
            if (M2C_FIELD(var_t1_2, s32 *, 0x60) > 0) {
                var_a3_2 = var_t2_2 + 0xD4;
                var_a2_2 = var_t2_2 + 0x3C8;
                do {
                    temp_a0_4 = *var_a3_2;
                    var_a3_2 += 4;
                    M2C_FIELD(temp_a0_4, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_a0_4, s32 *, 0x38) & ~0x40) | ((*var_a2_2 != 1) << 6));
                    var_a1_4 += 1;
                    var_a2_2 += 4;
                } while (var_a1_4 < M2C_FIELD(var_t1_2, s32 *, 0x60));
            }
        }
        var_t1_2 += 4;
        var_t0 += 1;
        var_t2_2 += 0x24;
    } while ((s32) var_t0 < 7);
}
