#include "common.h"

extern s32 D_801208B4;

void slpm_SetInitPadFlag(s32 arg0) {
    D_801208B4 = arg0;
}

s32 slpm_ReadInitPadFlag(void) {
    extern s32 D_801208B4[];
    return (*D_801208B4);
}
