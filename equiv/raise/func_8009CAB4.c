#include "common.h"

void func_8009CAB4(void *arg0) {
    extern s16 D_8006B00C[];
    extern M2C_UNK D_8008ED68[];
    s16 temp_a0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 var_v0_2;
    u32 temp_v1;
    u32 var_v0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x80);
    if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) == 0) {
        temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1 + 1;
        }
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x7A);
        M2C_FIELD(arg0, u32 *, 0x3C) = var_v0;
        switch (temp_v1_2) {
        case 1:
            if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) >= 0x78U) || !(func_800337EC(D_8008ED68) & 1)) {
                func_80034AB0(0x801E);
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
block_17:
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
            break;
        case 2:
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - 4 + func_80020304(8));
            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) + 2);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) >= 0x1DU) {
            case 0:
block_16:
                goto block_17;
            }
            break;
        case 3:
            temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x46) - 6 + func_80020304(0xC);
            M2C_FIELD(arg0, u16 *, 0x46) = temp_v1_3;
            if ((s16) temp_v1_3 >= 0x65) {
                var_v0_2 = 0x64;
                goto block_14;
            }
            var_v0_2 = -0x64U;
            if ((s16) temp_v1_3 < -0x64) {
block_14:
                M2C_FIELD(arg0, u16 *, 0x46) = var_v0_2;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) >= 0xA0U) {
                goto block_16;
            }
            break;
        case 4:
            temp_a0 = (s16) M2C_FIELD(arg0, u16 *, 0x46);
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
            var_v1 = -0xC0;
            if (temp_a0 > 0) {
                var_v1 = 0xC0;
            }
            M2C_FIELD(arg0, s16 *, 0x6A) = (s16) ((s32) (var_v1 - temp_a0) / (s32) (0x13D - M2C_FIELD(arg0, u32 *, 0x3C)));
            break;
        }
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (M2C_FIELD(arg0, s32 *, 0x7C) + 1);
            func_80015CD0(arg0 + 0x14, func_80019F30(0x7000E, (temp_s1 * 2) + 0xA8), 1);
            var_a1 = 0x246;
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            if (temp_s1 != 0) {
                var_a1 = 0x250;
            }
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000E, var_a1);
        }
        if (M2C_FIELD(arg0, u32 *, 0x3C) == 0x13C) {
            func_800185F8(arg0);
            (*D_8006B00C) = 0;
        }
    }
}
