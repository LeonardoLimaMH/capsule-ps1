#include "common.h"

void func_800B0BB0(s32 arg0) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK *var_a2;
    s16 temp_v1_2;
    s16 var_a1;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_5;
    u32 temp_v1_3;
    u32 temp_v1_4;
    s32 var_v0_4;
    u8 temp_a3;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v1_5;

    temp_a0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x61A);
    temp_a3 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
    if (temp_v1 != 6) {
        if ((s32) temp_v1 >= 7) {
            if (temp_v1 != 7) {
                var_a2 = D_80069AD4;
            } else {
                if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) == M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
                    goto block_7;
                }
                var_v0 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0xFC0;
                goto block_9;
                goto block_10;
            }
        } else {
            goto block_11;
        }
    } else {
        if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) != M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
            var_v0 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0x40;
block_9:
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = var_v0;
        } else {
block_7:
            M2C_FIELD(temp_a0, u8 *, 0x61A) = 5U;
        }
block_10:
block_11:
        var_a2 = D_80069AD4;
    }
    temp_v1_2 = M2C_FIELD(var_a2, s16 *, 0xE8);
    var_v0_2 = temp_v1_2;
    if (temp_v1_2 < 0) {
        var_v0_2 = temp_v1_2 + 0xFFF;
    }
    var_a1 = M2C_FIELD(var_a2, s16 *, 0xEA);
    M2C_FIELD(var_a2, s16 *, 0xE8) = (s16) (temp_v1_2 - ((var_v0_2 >> 0xC) << 0xC));
    var_v0_3 = var_a1;
    if (var_a1 < 0) {
        var_v0_3 = var_a1 + 0xFFF;
    }
    temp_v1_3 = M2C_FIELD(var_a2, s32 *, 0xE0);
    M2C_FIELD(var_a2, s16 *, 0xEA) = (s16) (var_a1 - ((var_v0_3 >> 0xC) << 0xC));
    var_v0_4 = temp_v1_3;
    if (temp_v1_3 < 0) {
        var_v0_4 = temp_v1_3 + 0xFFF;
    }
    M2C_FIELD(var_a2, s32 *, 0xE0) = (s32) (temp_v1_3 - ((var_v0_4 >> 0xC) << 0xC));
    if (M2C_FIELD(temp_a0, u8 *, 0x61A) == 5) {
        temp_v1_4 = M2C_FIELD(((temp_a3 * 0x10) + D_8008ED68), s32 *, 0x88);
        var_a1 = (s16) (temp_a0 + temp_a3);
        if (temp_v1_4 & 8) {
            temp_v0 = M2C_FIELD(var_a1, u8 *, 0x605) + 1;
            M2C_FIELD(var_a1, u8 *, 0x605) = temp_v0;
            if ((temp_v0 & 0xFF) == 8) {
                M2C_FIELD(var_a1, u8 *, 0x605) = 0U;
            }
            M2C_FIELD(temp_a0, u8 *, 0x61A) = 6U;
            var_v0_5 = M2C_FIELD(var_a1, u8 *, 0x605) << 9;
            goto block_27;
        }
        temp_v1_5 = temp_a0 + temp_a3;
        if (temp_v1_4 & 4) {
            if (M2C_FIELD(temp_v1_5, u8 *, 0x605) == 0) {
                M2C_FIELD(temp_v1_5, u8 *, 0x605) = 8U;
            }
            M2C_FIELD(temp_v1_5, u8 *, 0x605) = (u8) (M2C_FIELD(temp_v1_5, u8 *, 0x605) - 1);
            M2C_FIELD(temp_a0, u8 *, 0x61A) = 7U;
            var_v0_5 = M2C_FIELD(temp_v1_5, u8 *, 0x605) << 9;
block_27:
            M2C_FIELD(var_a2, s16 *, 0x14A) = var_v0_5;
        }
    }
    func_8002CC74(temp_a0, (void *) var_a1, var_a2, temp_a3);
    func_8002CD50();
}
