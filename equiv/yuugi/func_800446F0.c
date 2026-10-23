#include "common.h"

void func_800446F0(void) {
    extern s32 D_80094B6C[];
    extern s32 D_80094B70[];
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = func_80044AF8(0);
    if ((temp_v0 == 1) && ((*D_80094B70) > 0) && (func_80044AF8(0) == temp_v0)) {
        temp_v1 = ((*D_80094B6C) * 0x18) + ((*D_80094B70) - 0xC8);
        if (M2C_FIELD(temp_v1, s32 *, 0) != 0) {
            func_80044A4C(M2C_FIELD(temp_v1, u8 *, 4), M2C_FIELD(temp_v1, s32 *, 0xC));
        }
    }
}
