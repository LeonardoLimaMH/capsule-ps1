#include "common.h"

void func_80044A0C(void) {
    extern s32 D_80072F24[];
    extern s32 D_80073084[];
    extern s32 D_80073088[];
    (*D_80072F24) = 0;
    CD_flush();
    (*D_80073084) = 0;
    (*D_80073088) = 0;
    VSyncCallbacks(0, 0);
}
