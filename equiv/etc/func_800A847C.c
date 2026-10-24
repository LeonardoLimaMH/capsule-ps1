#include "common.h"

void func_800A847C(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3C1C[];
    M2C_UNK var_a1;
    s8 var_v0;

    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 6) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
            var_a1 = 0x12;
            if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) {
                var_a1 = 0xF;
            }
            M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, var_a1, D_8008ED68);
        }
        var_v0 = 0x30;
        if (M2C_FIELD(arg0, s32 *, 0x84) == (*D_800B3C1C)) {
            var_v0 = 0x80;
        }
        M2C_FIELD(arg0, s8 *, 0x5A) = var_v0;
        M2C_FIELD(arg0, s8 *, 0x59) = var_v0;
        M2C_FIELD(arg0, s8 *, 0x58) = var_v0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}
