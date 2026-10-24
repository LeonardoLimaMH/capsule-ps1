#include "common.h"

void func_800A83CC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    s16 var_v1;

    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 6) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_a1 = 0x21;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
            var_a1 = 0x1A;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, var_a1);
        var_v1 = -0xA0;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
            var_v1 = -0x90;
        }
        M2C_FIELD(arg0, s16 *, 0x46) = var_v1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}
