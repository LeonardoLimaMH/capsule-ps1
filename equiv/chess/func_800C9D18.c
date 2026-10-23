#include "common.h"

void func_800C9D18(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern u32 D_80064410[];
    extern M2C_UNK D_8006B2A4[];
    extern M2C_UNK D_800859F8[];
    s16 var_v0;
    s16 var_v1;
    s16 var_v1_3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    u32 var_v1_2;
    u8 temp_a0;

    if (M2C_FIELD(D_800859F8, u8 *, 0x614) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(D_800859F8, u8 *, 0x614) == 1) {
            var_v1 = 0x48;
            if (M2C_FIELD(D_800859F8, u8 *, 0x5FA) != 0) {
                var_v1 = -0x4C;
            }
            M2C_FIELD(arg0, s16 *, 0x46) = var_v1;
            temp_a0 = M2C_FIELD((M2C_FIELD(D_800859F8, u8 *, 0x5FA) + D_800859F8), u8 *, 0x5FB);
            var_a2 = 0x48;
            if (M2C_FIELD(D_800859F8, u8 *, 0x5FA) != 0) {
                var_a2 = -0x4C;
            }
            if (temp_a0 != -1U) {
                var_v1_2 = (u32) M2C_FIELD(((*((M2C_FIELD(D_800859F8, u8 *, 0x5FA) * 0x2E8) + 0x18 + D_800859F8 + (temp_a0 * 0x7C)) * 0x3C) + D_80063940), u32 *, 8) >> 0x11;
            } else {
                goto block_15;
            }
            goto block_16;
        }
        if (M2C_FIELD(D_800859F8, u8 *, 0x614) == 2) {
            var_v1_3 = 0x48;
            if (M2C_FIELD(D_800859F8, u8 *, 0x5FA) != 1) {
                var_v1_3 = -0x4C;
            }
            M2C_FIELD(arg0, s16 *, 0x46) = var_v1_3;
            temp_v1 = 1 - M2C_FIELD(D_800859F8, u8 *, 0x5FA);
            var_a2 = 0x48;
            if (temp_v1 != 0) {
                var_a2 = -0x4C;
            }
            if (M2C_FIELD(D_800859F8, u8 *, 0x70C) != -1U) {
                var_v1_2 = (u32) M2C_FIELD(((*((temp_v1 * 0x2E8) + 0x18 + D_800859F8 + (M2C_FIELD(D_800859F8, u8 *, 0x70C) * 0x7C)) * 0x3C) + D_80063940), u32 *, 8) >> 0x11;
            } else {
block_15:
                var_v1_2 = (u32) (*D_80064410) >> 0x11;
            }
block_16:
            func_8001F1A8(var_a2 - 0x2E, -0x68, 0, 1, 0, ((var_v1_2 & 0x7F) * 0x58) + D_8006B2A4, 1, 8, 3);
            return;
        }
        var_v0 = 0x48;
        if (M2C_FIELD(D_800859F8, u8 *, 0x614) != 4) {
            var_v0 = -0x4C;
        }
        M2C_FIELD(arg0, s16 *, 0x46) = var_v0;
        var_a0 = 0x48;
        if (M2C_FIELD(D_800859F8, u8 *, 0x614) != 4) {
            var_a0 = -0x4C;
        }
        func_8001F1A8(var_a0 - 0x2E, -0x68, 0, 1, 0, ((((u32) (*D_80064410) >> 0x11) & 0x7F) * 0x58) + D_8006B2A4, 1, 8, 3);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}
