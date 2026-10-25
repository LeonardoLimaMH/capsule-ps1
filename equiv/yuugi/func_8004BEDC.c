#include "common.h"

s32 func_8004BEDC(s32 arg0) {
    extern s32 * D_80078A24[];
    extern s32 * D_80078A30[];
    extern s32 * D_80078A40[];
    extern s32 D_80078A44[];
    extern s32 D_80078A48[];
    extern s32 D_80078A54[];
    extern M2C_UNK D_80094CB8[];
    extern M2C_UNK D_80094DC0[];
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = SetIntrMask(0);
    (*D_80078A48) = 0;
    (*D_80078A54) = temp_v0;
    (*D_80078A44) = (*D_80078A48);
    temp_v1 = arg0 & 7;
    switch (temp_v1) {                              /* irregular */
    case 5:
    case 0:
        *(*D_80078A30) = 0x401;
        *(*D_80078A40) |= 0x800;
        *(*D_80078A24) = 0;
        func_8004C7C0(D_80094CB8, 0, 0x100);
        func_8004C7C0(D_80094DC0, 0, 0x1800);
        break;
    case 1:
    case 3:
        *(*D_80078A30) = 0x401;
        *(*D_80078A40) |= 0x800;
        *(*D_80078A24) = 0x02000000;
        *(*D_80078A24) = 0x01000000;
        break;
    }
    SetIntrMask((*D_80078A54));
    var_v0 = 0;
    if (!(arg0 & 7)) {
        var_v0 = func_8004C2E0(arg0);
    }
    return var_v0;
}
