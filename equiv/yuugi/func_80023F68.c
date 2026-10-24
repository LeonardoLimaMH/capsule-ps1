#include "common.h"

void func_80023F68(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80069E4C[];
    s32 temp_a0;

    if (M2C_FIELD(D_80069E4C, s32 *, 0x6C) == 0) {
        M2C_FIELD(D_80069E4C, s32 *, 0x6C) = 1;
        M2C_FIELD(D_80069E4C, s32 *, 0x70) = 0x40;
        return;
    }
    temp_a0 = M2C_FIELD(D_80069E4C, s32 *, 0x70) - 1;
    M2C_FIELD(D_80069E4C, s32 *, 0x70) = temp_a0;
    M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + ((s32) (M2C_FIELD(D_80069E4C, s32 *, 0x68) - M2C_FIELD(D_80069E4C, s32 *, 0x64)) >> 6));
    if (temp_a0 == 0) {
        M2C_FIELD(D_80069E4C, s32 *, 0x6C) = 0;
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) M2C_FIELD(D_80069E4C, s32 *, 0x68);
        M2C_FIELD(D_80069AD4, s32 *, 0x54) = 0;
    }
}
