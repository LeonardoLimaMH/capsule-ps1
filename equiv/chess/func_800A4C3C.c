#include "common.h"

void func_800A4C3C(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    if (func_800C9414() == 0) {
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        if (M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x10) == 0) {
            func_800CFE1C();
            func_800125D8();
        }
        func_800125D8();
    }
}
