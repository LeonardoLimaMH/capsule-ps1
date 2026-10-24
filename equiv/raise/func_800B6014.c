#include "common.h"

void func_800B6014(void) {
    extern u8 D_800859F2[];
    extern M2C_UNK D_800EE5D0[];
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EF2EC[];
    extern s32 D_800EFF70[];
    s32 var_a3;
    s32 var_v0;

    if ((*D_800859F2) & 8) {
        var_a3 = (*D_800EF2EC);
    } else {
        var_a3 = (*D_800EFF70);
    }
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, var_a3 + M2C_FIELD(D_800EE5D0, s32 *, 0x18), 0x60000, var_a3);
    if ((*D_800859F2) & 8) {
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) & ~1);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) & ~1;
    } else {
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) | 1);
        var_v0 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) | 1;
    }
    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) = var_v0;
}
