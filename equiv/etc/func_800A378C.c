#include "common.h"

void func_800A378C(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B40[];
    if ((*D_8008EE44) != 0x12) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6001D, (M2C_FIELD((*D_80085428), u8 *, 0x5D9) * 2) + ((*D_800B3B40) + 0xB));
}
