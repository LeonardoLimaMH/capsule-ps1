#include "common.h"

s32 slpm_MoveImage2(void *arg0, s32 arg1, s32 arg2) {
    extern void * D_80131B2C[];
    extern u8 D_80131BD4[];
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    extern int func_80116850();
    s32 temp_a1;
    s32 var_v0;
    s32 var_v0_2;

    func_80113C78("MoveImage", arg0);
    (*D_80131C70) = slpm_VSync(-1) + 0xF0;
    (*D_80131C74) = 0;
    var_v0_2 = *(*D_80131C48);
loop_3:
    if (!(var_v0_2 & 0x01000000) && (*(*D_80131C3C) & 0x04000000)) {
        slpm_DMACallback(2, &func_80116850);
        var_v0 = -1;
        if (M2C_FIELD(arg0, s16 *, 4) != 0) {
            if (M2C_FIELD(arg0, s16 *, 6) == 0) {
                return -1;
            }
            temp_a1 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(D_80131BD4, s32 *, 4) = (s32) ((arg2 << 0x10) | (arg1 & 0xFFFF));
            M2C_FIELD(D_80131BD4, s32 *, 0) = temp_a1;
            M2C_FIELD(D_80131BD4, s32 *, 8) = (s32) M2C_FIELD(arg0, s16 *, 4);
            M2C_FIELD((*D_80131B2C), M2C_UNK (**)(void *, s32), 0x18)(D_80131BD4 - 8, temp_a1);
            var_v0 = 0;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = -1;
    if (func_80116254() == 0) {
        var_v0_2 = *(*D_80131C48);
        goto loop_3;
    }
    return var_v0;
}
