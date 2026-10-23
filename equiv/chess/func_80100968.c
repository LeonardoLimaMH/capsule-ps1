#include "common.h"

void func_80100968(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s16 temp_v0_2;
    s16 var_a0;
    u16 temp_v1_2;
    u8 temp_v0;
    u8 temp_v1;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 4) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) { /* irregular */
        case 0:
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x58);
            temp_v0 = temp_v1 + 1;
            if ((u32) (temp_v1 & 0xFF) >= 0x80U) {
                func_800220B8(D_80085428, arg0);
                M2C_FIELD(D_80085428, s8 *, 0x5E5) = 6;
                M2C_FIELD(D_80085428, s32 *, 0x14) = func_8001F8B0(0x1D, 0);
                func_80012578();
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
            return;
        case 2:
            M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) + M2C_FIELD(arg0, u16 *, 0x6E));
            if ((M2C_FIELD(D_8008ED68, u32 *, 0x18) == ((M2C_FIELD(D_8008ED68, u32 *, 0x18) / 28) * 0x1C)) && ((s16) M2C_FIELD(arg0, u16 *, 0x6E) <= 0)) {
                M2C_FIELD(arg0, u16 *, 0x6E) = (u16) (M2C_FIELD(arg0, u16 *, 0x6E) + 1);
            }
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74);
            M2C_FIELD(arg0, u16 *, 0x50) = temp_v1_2;
            if (temp_v1_2 & 0x8000) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                M2C_FIELD(arg0, u16 *, 0x50) = 0U;
            } else {
                M2C_FIELD(arg0, u16 *, 0x52) = temp_v1_2;
            }
            temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x54) + 0x50;
            var_a0 = temp_v0_2;
            M2C_FIELD(arg0, u16 *, 0x54) = (u16) temp_v0_2;
            if (temp_v0_2 < 0) {
                var_a0 = temp_v0_2 + 0xFFF;
            }
            M2C_FIELD(arg0, u16 *, 0x54) = (u16) (temp_v0_2 - ((var_a0 >> 0xC) << 0xC));
            return;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
