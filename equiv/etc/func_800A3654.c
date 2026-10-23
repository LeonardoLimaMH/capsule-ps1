#include "common.h"

void func_800A3654(void *arg0) {
    extern u8 D_80085A02[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    s32 var_a1;

    var_a1 = 0;
    if ((*D_8008EE44) == 0x11) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_a1 = M2C_FIELD(arg0, s32 *, 0x80) == (*D_800B3B40);
        goto block_6;
    }
    if ((*D_8008EE44) == 0x12) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if ((*D_80085A02) == M2C_FIELD(arg0, s32 *, 0x80)) {
            var_a1 = 1;
        }
block_6:
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, var_a1 | 0x16);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}
