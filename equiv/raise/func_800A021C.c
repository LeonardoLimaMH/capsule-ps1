#include "common.h"

s32 func_800A021C(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C22[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_80100F38[];
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t2;
    s16 var_t1_2;
    u32 temp_a0;
    u32 temp_a1_2;
    u32 temp_a3_2;
    u32 temp_hi;
    u32 temp_lo;
    u32 temp_t4;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_a1;
    void *temp_t3;
    void *temp_v0_4;

    temp_v0 = func_800A9658((*D_80078C22));
    var_t1 = 0;
    if ((temp_v0 << 0x10) > 0) {
        temp_t4 = (*D_80078C22) + 1;
        temp_t3 = ((*D_8006AF80) * 0x79C) + (*D_80100F38);
        temp_t2 = M2C_FIELD(temp_t3, s16 *, 0x338);
        var_v0_2 = 0 << 0x10;
loop_2:
        temp_v0_2 = var_v0_2 >> 0x10;
        temp_hi = temp_v0_2 % temp_t4;
        temp_lo = temp_v0_2 / temp_t4;
        temp_a3 = M2C_FIELD(temp_t3, s16 *, 0x336);
        var_v0 = 0;
        if (M2C_FIELD((((temp_a3 - ((s16) temp_lo + 1)) * 8) + (*D_800EFF58) + (temp_t2 - ((s16) temp_hi + 1))), u8 *, 0x94) == 0) {
            temp_a1 = ((*D_8006AF80) * 0x1A8) + (*D_80091618);
            var_v0_3 = var_t1 + 1;
            if (M2C_FIELD(temp_a1, u16 *, 0) != 0xFFFF) {
                var_v0_3 = var_t1 + 1;
                if (M2C_FIELD(temp_a1, s32 *, 0xA4) == (temp_a3 - (s16) temp_lo)) {
                    var_v0_3 = var_t1 + 1;
                    if (M2C_FIELD(temp_a1, s32 *, 0xA8) == (temp_t2 - (s16) temp_hi)) {
                        return 0;
                    }
                }
            }
            var_t1 = var_v0_3;
            var_v0_2 = var_t1 << 0x10;
            if ((var_v0_3 << 0x10) >= (temp_v0 << 0x10)) {
                goto block_8;
            }
            goto loop_2;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
block_8:
    temp_a3_2 = temp_v0 << 0x10;
    var_t1_2 = 0;
    if (temp_a3_2 > 0) {
        do {
            temp_v0_3 = (*D_80078C22) + 1;
            temp_a0 = var_t1_2 / temp_v0_3;
            temp_a1_2 = var_t1_2 % temp_v0_3;
            temp_a2 = var_t1_2 + 1;
            var_t1_2 = temp_a2;
            temp_v0_4 = ((*D_8006AF80) * 0x79C) + (*D_80100F38);
            M2C_FIELD((((M2C_FIELD(temp_v0_4, s16 *, 0x336) - ((s16) temp_a0 + 1)) * 8) + (*D_800EFF58) + (M2C_FIELD(temp_v0_4, s16 *, 0x338) - ((s16) temp_a1_2 + 1))), s8 *, 0x94) = 1;
        } while ((temp_a2 << 0x10) < temp_a3_2);
    }
    var_v0 = 1;
    return var_v0;
}
