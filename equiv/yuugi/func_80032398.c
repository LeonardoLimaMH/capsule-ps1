#include "common.h"

void func_80032398(void) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_800922D0[];
    M2C_UNK var_a0;
    u8 temp_v1;

    temp_v1 = (M2C_FIELD(D_80085428, u8 *, 0x5C8) & 8) | (M2C_FIELD(D_800922D0, u8 *, 0xE) * 2);
    M2C_FIELD(D_80085428, u8 *, 0x5C8) = temp_v1;
    if (M2C_FIELD(D_800922D0, s16 *, 0xC) != 2) {
        M2C_FIELD(D_80085428, u8 *, 0x5C8) = (u8) (temp_v1 | ((u8) M2C_FIELD(D_800922D0, s16 *, 0xC) + 4));
        var_a0 = 1;
        if (M2C_FIELD(D_800922D0, s16 *, 0xC) == 1) {
            var_a0 = 0;
        }
        func_80033764(var_a0, M2C_FIELD(D_800922D0, s16 *, 0xC));
    }
    M2C_FIELD(D_80085428, u8 *, 0x5C9) = (u8) M2C_FIELD(D_800922D0, u8 *, 0x10);
    M2C_FIELD(D_80085428, s8 *, 0x5CA) = (s8) ((M2C_FIELD(D_800922D0, u8 *, 0x12) * 8) | (M2C_FIELD(D_800922D0, u8 *, 0x14) * 0x10));
    M2C_FIELD(D_80085428, u16 *, 0x5CC) = (u16) (M2C_FIELD(D_800922D0, u16 *, 0x16) | (M2C_FIELD(D_80085428, u16 *, 0x5CC) & 0xFFC0) | (M2C_FIELD(D_800922D0, u16 *, 0x18) * 8));
    M2C_FIELD(D_80085428, u8 *, 0x5E2) = (u8) M2C_FIELD(D_800922D0, u16 *, 0x16);
    M2C_FIELD(D_80085428, u8 *, 0x5E3) = (u8) M2C_FIELD(D_800922D0, u16 *, 0x18);
}
