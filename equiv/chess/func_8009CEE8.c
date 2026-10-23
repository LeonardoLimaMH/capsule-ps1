#include "common.h"

void func_8009CEE8(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u8 D_8008619F[];
    u16 temp_s0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    if (((*D_8008619F) == 1) && ((u16) M2C_FIELD(arg0, u16 *, 0x7A) < 2U)) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, u16 *, 0x7A) = 2U;
    }
    temp_s0 = M2C_FIELD(arg0, u16 *, 0x7A);
    switch (temp_s0) {                              /* irregular */
    case 0:
        if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) || (temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1, M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0, ((temp_v0 < (u32) (M2C_FIELD(arg0, s32 *, 0x84) * 4)) == 0))) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        }
    default:
    case 1:
block_17:
        if ((M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) && !(M2C_FIELD(arg0, s32 *, 0x38) & 1)) {
            if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
                func_800A9A78((*D_80085428), M2C_FIELD(arg0, s32 *, 0x7C), M2C_FIELD(arg0, s32 *, 0x80), M2C_FIELD(arg0, s16 *, 0x46), (s32) M2C_FIELD(arg0, s16 *, 0x4A));
                return;
            }
            func_800AAB8C((*D_80085428), M2C_FIELD(arg0, s32 *, 0x7C), M2C_FIELD(arg0, s16 *, 0x46), M2C_FIELD(arg0, s16 *, 0x4A));
        } else {
            return;
        }
        break;
    case 2:
        if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) {
            temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0_2;
            if (temp_v0_2 >= 0x14U) {
                func_800185F8(arg0);
                (*D_8008619F) = (u8) temp_s0;
                return;
            }
            goto block_17;
        }
        temp_v0_3 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
        M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0_3;
        if (temp_v0_3 >= (u32) ((5 - M2C_FIELD(arg0, s32 *, 0x84)) * 4)) {
            func_800185F8(arg0);
            return;
        }
        goto block_17;
    }
}
