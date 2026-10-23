#include "common.h"

void func_800A2F1C(void *arg0) {
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B3B38[];
    if (((*D_8008EE44) == 6) && (M2C_FIELD((*D_800B3B38), s16 *, 0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD((*D_800B3B38), s16 *, 0xC) == 0) {
            M2C_FIELD(arg0, s16 *, 0x4A) = -0x18;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}
