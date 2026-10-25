#include "common.h"

void slpm_CD_initintr(void) {
    extern s32 D_80131D1C[];
    extern s32 D_80131D20[];
    extern s32 D_80131D2C[];
    extern s32 D_80131D30[];
    extern int func_801188AC();
    (*D_80131D20) = 0;
    (*D_80131D1C) = 0;
    (*D_80131D30) = 0;
    (*D_80131D2C) = 0;
    slpm_ResetCallback();
    slpm_InterruptCallback(2, &func_801188AC);
}
