#include "common.h"

void func_800B4C40(s32 arg0) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_800EE5D0[];
    extern s32 D_800EE5D8[];
    extern s16 D_800EEB90[];
    extern s32 D_800EEC48[];
    extern s32 D_800EEC64[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;
    void *temp_s1;

    var_a1 = 0;
    if (arg0 != 0xFFFF) {
        var_v0 = arg0 * 0x10;
        if (arg0 == (*D_8006AF80)) {
            var_a1 = 1;
            (*D_800EEB90) = 1;
            (*D_800EEC48) = M2C_FIELD(((arg0 * 0x79C) + D_80100F38), s32 *, 0x190);
            var_v0 = arg0 * 0x10;
        }
        temp_s1 = ((((((var_v0 - arg0) * 4) + arg0) * 8) - arg0) * 4) + D_80100F38;
        if ((*D_800EEB90) == var_a1) {
            var_a3 = (*D_800EEC64);
        } else {
            var_a3 = (*D_800EE5D8) + (var_a1 - 2);
        }
        temp_v0 = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, var_a3 + M2C_FIELD(D_800EE5D0, s32 *, 0xC), 0x60000, var_a3);
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x190), s32 *, 0x1C) = 0;
        M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x190), s32 *, 0x18) = temp_v0;
        func_800B4AAC(arg0);
    }
}
