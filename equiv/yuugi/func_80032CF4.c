#include "common.h"

void func_80032CF4(void *arg0) {
    extern u16 D_8008EE58[];
    extern s16 D_800922D0[];
    extern s16 D_800922D6[];
    extern s32 D_800922D8[];
    if ((((*D_8008EE58) == 7) && ((*D_800922D0) == 0)) || (((u32) ((*D_8008EE58) - 5) < 2U) && ((*D_800922D0) == 1))) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s16 *, 0x46) = (s16) (((*D_800922D6) << 6) - 0x30);
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8();
    }
}
