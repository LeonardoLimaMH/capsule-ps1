#include "common.h"

s32 slpm_DrawOTag2(s32 arg0) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36[];
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    extern int func_80116850();
    s32 var_v0;
    s32 var_v0_2;

    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30("DrawOTag(%08x)...\n", arg0);
    }
    (*D_80131C70) = slpm_VSync(-1) + 0xF0;
    (*D_80131C74) = 0;
    var_v0_2 = *(*D_80131C48);
loop_5:
    if (!(var_v0_2 & 0x01000000) && (*(*D_80131C3C) & 0x04000000)) {
        slpm_DMACallback(2, &func_80116850);
        M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32), 0x18)(arg0);
        var_v0 = 0;
    } else {
        var_v0 = -1;
        if (func_80116254() == 0) {
            var_v0_2 = *(*D_80131C48);
            goto loop_5;
        }
    }
    return var_v0;
}
