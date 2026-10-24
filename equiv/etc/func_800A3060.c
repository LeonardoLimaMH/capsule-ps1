#include "common.h"

void func_800A3060(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_800B3B60[];
    extern u16 D_800B3B62[];
    s32 var_v1;
    u16 var_v0;

    if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) != 7) || ((u32) M2C_FIELD(D_8008ED68, u32 *, 0xA20) >= 2U)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_FIELD(arg0, s16 *, 0x4A) == -0x60) {
        var_v0 = (*D_800B3B60);
        var_v1 = 0;
    } else {
        var_v0 = (*D_800B3B62);
        var_v1 = 0;
    }
    do {
        if ((s16) var_v0 == M2C_FIELD(arg0, s32 *, 0x80)) {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x80;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x80;
        } else {
            M2C_FIELD(arg0, s8 *, 0x5A) = 0x30;
            M2C_FIELD(arg0, s8 *, 0x59) = 0x30;
            M2C_FIELD(arg0, s8 *, 0x58) = 0x30;
        }
        var_v1 += 1;
    } while (var_v1 < 8);
}
