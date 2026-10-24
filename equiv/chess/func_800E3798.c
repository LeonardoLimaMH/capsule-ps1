#include "common.h"

void func_800E3798(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s16 temp_a1;
    s32 temp_a0;
    s32 temp_v1;

    M2C_FIELD(arg0, u16 *, 0x36) = (u16) (M2C_FIELD(arg0, u16 *, 0x36) + 6);
    temp_a1 = (s16) M2C_FIELD(arg0, u16 *, 0x36);
    M2C_FIELD(arg0, u16 *, 0x3E) = (u16) (M2C_FIELD(arg0, u16 *, 0x3E) + 4);
    M2C_FIELD(arg0, u16 *, 0x38) = (u16) (M2C_FIELD(arg0, u16 *, 0x38) + 6);
    temp_a0 = ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2) + 0x28;
    if ((temp_a0 < temp_a1) || (M2C_FIELD(D_8008ED68, s32 *, 0xA3C) == 1)) {
        func_80013920(arg0, temp_a1, arg0, D_8008ED68);
        return;
    }
    temp_v1 = temp_a0 - temp_a1;
    if (M2C_FIELD(arg0, s16 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s8 *, 0x2E) = (s8) ((s32) (temp_v1 * 0xFF) / temp_a0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x30) = (s8) ((s32) (temp_v1 * 0xFF) / temp_a0);
}
