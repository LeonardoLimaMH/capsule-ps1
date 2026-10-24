#include "common.h"

s32 func_800BE61C(void) {
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F0610[];
    extern u16 D_80100D44[];
    extern s16 D_80100D46[];
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u16 *, 0x4A) + 0x20);
    (*D_80100D46) = 2;
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) & ~1);
    (*D_80100D44) = (*D_800F0610);
    return 0;
}
