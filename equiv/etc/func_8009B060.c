#include "common.h"

void func_8009B060(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v0;
    s32 var_v0;
    u16 temp_v0_2;

    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 8) < 3U) {
        M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
        M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        goto block_11;
    }
    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 7) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0x50) < 0x1000) {
                M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
                M2C_FIELD(arg0, u16 *, 0x74) = (u16) ((M2C_FIELD(arg0, s32 *, 0x3C) * 2) + 1);
                M2C_FIELD(arg0, u16 *, 0x76) = (u16) ((M2C_FIELD(arg0, s32 *, 0x3C) * 2) + 1);
                M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
                if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
                    M2C_FIELD(arg0, u16 *, 0x76) = 0U;
                    M2C_FIELD(arg0, u16 *, 0x74) = 0U;
                    func_80034AB0(0x1B);
                    M2C_FIELD(arg0, s32 *, 0x3C) = 0xA;
                }
            } else {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
                if (temp_v0 != 0) {
                    temp_v0_2 = (((temp_v0 & 1) ^ 1) << 8) + 0x1000;
                    M2C_FIELD(arg0, u16 *, 0x52) = temp_v0_2;
                    M2C_FIELD(arg0, s16 *, 0x50) = (s16) temp_v0_2;
                    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) - 1);
                    return;
                }
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        }
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_11:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}
