#include "common.h"

void func_800A5C3C(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_v0;

    M2C_FIELD(arg0, s16 *, 0x60) = (s16) ((M2C_FIELD(arg0, s32 *, 0x3C) * 4) & 0xFF);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
    if ((M2C_FIELD(D_80085428, u8 *, 0xD78) != 0) && (M2C_FIELD(arg0, s16 *, 0x60) >= 0xF1)) {
        M2C_FIELD(D_80085428, s8 *, 0xD77) = 1;
        func_800185F8(D_8008ED68);
    }
}
