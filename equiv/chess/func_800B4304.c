#include "common.h"

void func_800B4304(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE4C[];
    s32 temp_v1;

    if ((u16) (*D_8008EE4C) >= 2U) {
        func_800185F8();
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
    if (temp_v1 != 0xA) {
        if (temp_v1 != M2C_FIELD((*D_80085428), s8 *, 0xBF5)) {
            M2C_FIELD(arg0, s16 *, 0x66) = 0;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x66) = 2;
    }
}
