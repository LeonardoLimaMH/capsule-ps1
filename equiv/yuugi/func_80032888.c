#include "common.h"

void func_80032888(void *arg0) {
    extern M2C_UNK D_80065390[];
    extern M2C_UNK D_8008ED68[];
    extern s16 D_800922D0[];
    extern s32 D_800922D8[];
    if ((M2C_FIELD(D_8008ED68, u16 *, 0xF0) == 6) && ((*D_800922D0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if ((u32) M2C_FIELD(D_8008ED68, u32 *, 0xA20) >= 3U) {
            M2C_FIELD(arg0, s32 *, 0x18) = func_8001A434(M2C_FIELD(D_8008ED68, u32 *, 0xA20) + 0x1F, D_80065390);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
    if ((u32) ((*D_800922D8) - 3) < 2U) {
        func_800185F8(arg0);
    }
}
