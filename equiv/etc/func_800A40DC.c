#include "common.h"

void func_800A40DC(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    extern M2C_UNK D_800B3B90[];
    extern M2C_UNK D_800B3C08[];
    s16 temp_v1_2;
    s16 var_v0;
    s32 temp_a0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_a1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    temp_a1 = M2C_FIELD(arg0, u16 *, 0x84);
    if ((*D_8008EE44) == 0x18) {
        var_v0 = 0x50;
        if (M2C_FIELD(D_80085428, u8 *, 0x5D0) == 2) {
            var_v0 = 0x60;
            if (temp_a1 == 0) {
                var_v0 = -0x30;
            }
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_v0;
        var_s2 = (M2C_FIELD((((s16) temp_a1 * 2) + D_800B3B38), s16 *, 8) + M2C_FIELD(arg0, s32 *, 0x80)) - 1;
        temp_v0 = D_80085428 + (s16) temp_a1;
        if (var_s2 < 0) {
            var_s2 = M2C_FIELD(temp_v0, u8 *, 2) - 1;
        } else {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 2);
            if (var_s2 >= (s32) temp_v1) {
                var_s2 -= temp_v1;
            }
        }
        temp_v1_2 = *(((s16) temp_a1 * 2) + D_800B3B38);
        switch (temp_v1_2) {                        /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            temp_s0 = D_80085428 + ((var_s2 * 0xE) + ((s16) temp_a1 * 0x2BC));
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, M2C_FIELD(temp_s0, u8 *, 0x50) + 0x6F, D_80085428);
            M2C_FIELD(arg0, s16 *, 0x2E) = (s16) (((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x50) * 0x3C) + D_80063940), u32 *, 0x14) >> 1) & 0xE);
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) ((M2C_FIELD(arg0, s32 *, 0x80) << 6) - 0x80);
            if (*(((s16) temp_a1 * 0x32) + D_800B3B90 + var_s2) != 0) {
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 0x40;
            } else {
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~0x40;
            }
            goto block_28;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            var_v0_3 = (M2C_FIELD(arg0, s32 *, 0x80) << 6) - *(((s16) temp_a1 * 4) + D_800B3C08);
block_26:
            M2C_FIELD(arg0, s16 *, 0x46) = (s16) (var_v0_3 - 0x80);
            return;
        case 4:
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x80);
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (temp_a0 == 3) {
                var_s2_2 = var_s2 - 3;
                if (var_s2_2 < 0) {
                    var_s2_2 += M2C_FIELD((D_80085428 + (s16) temp_a1), u8 *, 2);
                }
                temp_s0_2 = D_80085428 + ((var_s2_2 * 0xE) + ((s16) temp_a1 * 0x2BC));
                M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, M2C_FIELD(temp_s0_2, u8 *, 0x50) + 0x6F, D_80085428);
                M2C_FIELD(arg0, s16 *, 0x46) = (s16) (*(((s16) temp_a1 * 4) + D_800B3C08) - 0xC0);
                M2C_FIELD(arg0, s16 *, 0x2E) = (s16) (((u32) M2C_FIELD(((M2C_FIELD(temp_s0_2, u8 *, 0x50) * 0x3C) + D_80063940), u32 *, 0x14) >> 1) & 0xE);
                if (*(((s16) temp_a1 * 0x32) + D_800B3B90 + var_s2_2) != 0) {
                    var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 0x40;
                } else {
                    var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~0x40;
                }
                goto block_28;
            }
            var_v0_3 = *(((s16) temp_a1 * 4) + D_800B3C08) + (temp_a0 << 6);
            goto block_26;
        }
    } else {
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_28:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0_2;
    }
}
