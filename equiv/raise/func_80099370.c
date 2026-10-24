#include "common.h"

void func_80099370(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s8 temp_v1_2;
    u32 temp_v1;
    u32 temp_v1_4;
    u32 var_v0;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp_v1 < 2U) {
        M2C_FIELD(arg0, s8 *, 0x5A) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x59) = 0xFF;
        M2C_FIELD(arg0, s8 *, 0x58) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (((M2C_FIELD(arg0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
    } else if (temp_v1 < 0xAU) {
        temp_v1_2 = 0xFF - (temp_v1 * 0x19);
        M2C_FIELD(arg0, s8 *, 0x5A) = temp_v1_2;
        M2C_FIELD(arg0, s8 *, 0x59) = temp_v1_2;
        M2C_FIELD(arg0, s8 *, 0x58) = temp_v1_2;
    } else {
        func_800185F8(arg0);
    }
    temp_v1_3 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x46);
    M2C_FIELD(arg0, u16 *, 0x4A) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x4A);
    M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_v1_3, u16 *, 0x4E) - 1);
    M2C_FIELD(arg0, u16 *, 0x50) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x50);
    M2C_FIELD(arg0, u16 *, 0x52) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x52);
    temp_v1_4 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1_4 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1_4 + 1;
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = var_v0;
}
