#include "common.h"

u8 func_800AFFA4(void *arg0) {
    extern u8 D_80069AD4[];
    extern s16 D_80069C1E[];
    extern u8 D_8008ED68[];
    extern u8 D_801010B0[];
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_6;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a1;
    u16 temp_v0;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_7;
    u8 var_v0;
    u8 var_v0_7;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a3;
    void *temp_v1_4;
    void *temp_v1_6;

    temp_a3 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a3, u8 *, 0x61A);
    temp_t2 = M2C_FIELD(temp_a3, u8 *, 0x5FA);
    temp_t1 = M2C_FIELD(temp_a3, u8 *, 9);
    switch (temp_v1) {
    case 1:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) != M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
            var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0x40;
block_20:
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = var_v0_2;
        } else {
block_11:
            M2C_FIELD(temp_a3, u8 *, 0x61A) = 0U;
        }
        break;
    case 2:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) != M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
            var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0xFC0;
            goto block_20;
        }
        goto block_11;
    case 3:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) != M2C_FIELD(D_80069AD4, s16 *, 0x148)) {
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0x90);
            temp_v0 = M2C_FIELD(((temp_t1 * 0x34) + D_801010B0), u16 *, 0x30);
            var_v1 = temp_v0 - 0x660;
            if (var_v1 < 0) {
                var_v1 = temp_v0 - 0x65D;
            }
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + (var_v1 >> 2));
        } else {
block_18:
            M2C_FIELD(temp_a3, u8 *, 0x61A) = 5U;
        }
        break;
    case 4:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) == M2C_FIELD(D_80069AD4, s16 *, 0x148)) {
            goto block_11;
        }
        M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) ((u16) M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xF70);
        temp_a1 = M2C_FIELD(((temp_t1 * 0x34) + D_801010B0), u16 *, 0x30);
        var_v1_2 = temp_a1 - 0x660;
        if (var_v1_2 < 0) {
            var_v1_2 = temp_a1 - 0x65D;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) ((M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0x1000) - (var_v1_2 >> 2));
        break;
    case 6:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) != M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
            var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0x40;
            goto block_20;
        }
        goto block_18;
    case 7:
        if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) == M2C_FIELD(D_80069AD4, s16 *, 0x14A)) {
            goto block_18;
        }
        var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0xFC0;
        goto block_20;
    }
    var_v0_3 = M2C_FIELD(D_80069AD4, s16 *, 0xE8);
    if (M2C_FIELD(D_80069AD4, s16 *, 0xE8) < 0) {
        var_v0_3 = M2C_FIELD(D_80069AD4, s16 *, 0xE8) + 0xFFF;
    }
    M2C_FIELD(D_80069AD4, s16 *, 0xE8) = (s16) (M2C_FIELD(D_80069AD4, s16 *, 0xE8) - ((var_v0_3 >> 0xC) << 0xC));
    var_v0_4 = M2C_FIELD(D_80069AD4, s16 *, 0xEA);
    if (M2C_FIELD(D_80069AD4, s16 *, 0xEA) < 0) {
        var_v0_4 = M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0xFFF;
    }
    M2C_FIELD(D_80069AD4, s16 *, 0xEA) = (s16) (M2C_FIELD(D_80069AD4, s16 *, 0xEA) - ((var_v0_4 >> 0xC) << 0xC));
    var_v0_5 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
    if (M2C_FIELD(D_80069AD4, s32 *, 0xE0) < 0) {
        var_v0_5 = M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0xFFF;
    }
    M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - ((var_v0_5 >> 0xC) << 0xC));
    temp_v1_2 = M2C_FIELD(temp_a3, u8 *, 0x61A);
    if (temp_v1_2 == 5) {
        temp_v1_3 = M2C_FIELD(((temp_t2 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (temp_v1_3 & 0x80) {
            M2C_FIELD(temp_a3, u8 *, 0x61A) = 4U;
            M2C_FIELD(D_80069AD4, s16 *, 0x148) = 0x1C0;
            M2C_FIELD(D_80069AD4, s32 *, 0x140) = 0x660;
        } else {
            temp_a0 = temp_a3 + temp_t2;
            if (temp_v1_3 & 8) {
                temp_v0_2 = M2C_FIELD(temp_a0, u8 *, 0x605) + 1;
                M2C_FIELD(temp_a0, u8 *, 0x605) = temp_v0_2;
                if ((temp_v0_2 & 0xFF) == 8) {
                    M2C_FIELD(temp_a0, u8 *, 0x605) = 0U;
                }
                M2C_FIELD(temp_a3, u8 *, 0x61A) = 6U;
                var_v0_6 = M2C_FIELD(temp_a0, u8 *, 0x605) << 9;
                goto block_38;
            }
            temp_v1_4 = temp_a3 + temp_t2;
            if (temp_v1_3 & 4) {
                if (M2C_FIELD(temp_v1_4, u8 *, 0x605) == 0) {
                    M2C_FIELD(temp_v1_4, u8 *, 0x605) = 8U;
                }
                M2C_FIELD(temp_v1_4, u8 *, 0x605) = (u8) (M2C_FIELD(temp_v1_4, u8 *, 0x605) - 1);
                M2C_FIELD(temp_a3, u8 *, 0x61A) = 7U;
                var_v0_6 = M2C_FIELD(temp_v1_4, u8 *, 0x605) << 9;
block_38:
                M2C_FIELD(D_80069AD4, s16 *, 0x14A) = var_v0_6;
            }
        }
    } else if (temp_v1_2 == 0) {
        if (M2C_FIELD(((temp_t2 * 0x10) + D_8008ED68), s32 *, 0x88) & 0x80) {
            if (M2C_FIELD(arg0, u8 *, 0xBE9) == 1) {
                M2C_FIELD(temp_a3, u8 *, 0x61A) = 3U;
                M2C_FIELD(D_80069AD4, s16 *, 0x148) = 0x400;
                M2C_FIELD(D_80069AD4, s32 *, 0x140) = (s32) M2C_FIELD(((temp_t1 * 0x34) + D_801010B0), u16 *, 0x30);
            } else {
                goto block_44;
            }
        } else {
block_44:
            temp_v1_5 = M2C_FIELD(((temp_t2 * 0x10) + D_8008ED68), s32 *, 0x88);
            temp_a0_2 = temp_a3 + temp_t2;
            if (temp_v1_5 & 8) {
                temp_v0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x605) + 1;
                M2C_FIELD(temp_a0_2, u8 *, 0x605) = temp_v0_3;
                if ((temp_v0_3 & 0xFF) == 8) {
                    M2C_FIELD(temp_a0_2, u8 *, 0x605) = 0U;
                }
                M2C_FIELD(temp_a3, u8 *, 0x61A) = 1U;
                var_v0_7 = M2C_FIELD(temp_a0_2, u8 *, 0x605);
                goto block_52;
            }
            temp_v1_6 = temp_a3 + temp_t2;
            if (temp_v1_5 & 4) {
                if (M2C_FIELD(temp_v1_6, u8 *, 0x605) == 0) {
                    M2C_FIELD(temp_v1_6, u8 *, 0x605) = 8U;
                }
                M2C_FIELD(temp_v1_6, u8 *, 0x605) = (u8) (M2C_FIELD(temp_v1_6, u8 *, 0x605) - 1);
                M2C_FIELD(temp_a3, u8 *, 0x61A) = 2U;
                var_v0_7 = M2C_FIELD(temp_v1_6, u8 *, 0x605);
block_52:
                (*D_80069C1E) = var_v0_7 << 9;
            }
        }
    }
    temp_v1_7 = M2C_FIELD(temp_a3, u8 *, 0x61A);
    var_v0 = temp_v1_7;
    if (temp_v1_7 == 5) {
        var_v0 = 0;
    }
    return var_v0;
}
