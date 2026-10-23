#include "common.h"

s32 slpm_VSync(s32 arg0) {
    extern s32 * D_8013216C[];
    extern s32 * D_80132170[];
    extern s32 D_80132174[];
    extern s32 D_80132178[];
    extern s32 D_801332A4[];
    s32 sp10;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_v0;

    do {
        sp10 = *(*D_80132170);
    } while (sp10 != *(*D_80132170));
    temp_s1 = (sp10 - (*D_80132174)) & 0xFFFF;
    if (arg0 < 0) {
        return (*D_801332A4);
    }
    if (arg0 != 1) {
        if (arg0 > 0) {
            var_v0 = (*D_80132178) - 1 + arg0;
        } else {
            var_v0 = (*D_80132178);
        }
        var_a1 = 0;
        if (arg0 > 0) {
            var_a1 = arg0 - 1;
        }
        func_8011ADEC(var_v0, var_a1);
        temp_s0 = *(*D_8013216C);
        func_8011ADEC((*D_801332A4) + 1, 1);
        if ((temp_s0 & 0x400000) && ((temp_s0 ^ *(*D_8013216C)) >= 0)) {
            do {

            } while (!((temp_s0 ^ *(*D_8013216C)) & 0x80000000));
        }
        (*D_80132178) = (*D_801332A4);
        do {
            (*D_80132174) = *(*D_80132170);
        } while ((*D_80132174) != *(*D_80132170));
    }
    return temp_s1;
}
