#include "common.h"

void func_800B4860(s32 arg0, s32 arg1) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EE5D8[];
    extern s16 D_800EEB90[];
    extern s32 D_800EEC64[];
    extern u8 D_80100F38[];
    s32 temp_v0;
    s32 var_a3;
    void *temp_s0;

    temp_s0 = (arg1 * 0x79C) + D_80100F38;
    if ((*D_800EEB90) == arg0) {
        var_a3 = (*D_800EEC64);
    } else {
        var_a3 = (*D_800EE5D8) + (arg0 - 2);
    }
    temp_v0 = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, var_a3 + M2C_FIELD(D_800EE5D0, s32 *, 0xC), 0x60000, var_a3);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x190), s32 *, 0x1C) = 0;
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x190), s32 *, 0x18) = temp_v0;
}
