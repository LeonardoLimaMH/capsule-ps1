#include "common.h"

void func_8009B624(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B3AF8[];
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a2;
    if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) && (*((M2C_FIELD(arg0, s32 *, 0x84) * 4) + D_800B3AF8) == 2) && ((u16) M2C_FIELD(D_8008ED68, u16 *, 0xE0) < 4U)) {
        temp_v1 = temp_a2 & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x40);
        if ((u16) M2C_FIELD(D_8008ED68, u16 *, 0xE0) < 2U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x48);
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x18) & 7)) {
                M2C_FIELD(arg0, u16 *, 0x6E) = (u16) (M2C_FIELD(arg0, u16 *, 0x6E) + 1);
            }
        }
    }
}
