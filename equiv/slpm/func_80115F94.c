#include "common.h"

s32 func_80115F94(s32 arg0) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 * D_80131C58[];
    extern s32 D_80131C5C[];
    extern s32 D_80131C60[];
    extern s32 D_80131C6C[];
    extern M2C_UNK D_80133588[];
    extern M2C_UNK D_80133690[];
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = slpm_SetIntrMask(0);
    (*D_80131C60) = 0;
    (*D_80131C6C) = temp_v0;
    (*D_80131C5C) = (*D_80131C60);
    temp_v1 = arg0 & 7;
    switch (temp_v1) {                              /* irregular */
    case 5:
    case 0:
        *(*D_80131C48) = 0x401;
        *(*D_80131C58) |= 0x800;
        *(*D_80131C3C) = 0;
        func_80116878(D_80133588, 0, 0x100);
        func_80116878(D_80133690, 0, 0x1800);
        break;
    case 1:
    case 3:
        *(*D_80131C48) = 0x401;
        *(*D_80131C58) |= 0x800;
        *(*D_80131C3C) = 0x02000000;
        *(*D_80131C3C) = 0x01000000;
        break;
    }
    slpm_SetIntrMask((*D_80131C6C));
    var_v0 = 0;
    if (!(arg0 & 7)) {
        var_v0 = func_80116398(arg0);
    }
    return var_v0;
}
