#include "common.h"

s32 func_800BED10(void) {
    extern M2C_UNK D_800EE630[];
    extern M2C_UNK D_800EEB9C[];
    extern s16 D_800F0654[];
    extern s16 D_800F0656[];
    s32 temp_s1;

    temp_s1 = M2C_FIELD(D_800EE630, s32 *, 0x18) + 0xF;
    func_80015CD0(M2C_FIELD(D_800EEB9C, void **, 0x764) + 0x14, func_80019F30(M2C_FIELD(D_800EE630, s32 *, 0) | 0x70000, temp_s1), 1);
    (*D_800F0654) = 0;
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x7C) = temp_s1;
    (*D_800F0656) = 0;
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), s32 *, 0x38) & ~0x40);
    return 0;
}
