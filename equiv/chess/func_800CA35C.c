#include "common.h"

void func_800CA35C(void) {
    extern M2C_UNK D_8008ED68[];
    u8 var_v0;

    if ((M2C_FIELD(D_8008ED68, u8 *, 0x28) == 0) && (M2C_FIELD(D_8008ED68, s32 *, 0x20) != 0) && (M2C_FIELD(D_8008ED68, s32 *, 0x20) == ((M2C_FIELD(D_8008ED68, s32 *, 0x20) / 10800) * 0x2A30))) {
        var_v0 = 3;
        if (M2C_FIELD(D_8008ED68, u8 *, 0x27) == 0) {
            var_v0 = 1;
        }
        M2C_FIELD(D_8008ED68, u8 *, 0x28) = var_v0;
    }
}
