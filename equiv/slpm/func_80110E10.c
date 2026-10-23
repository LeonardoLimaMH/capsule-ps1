#include "common.h"

void func_80110E10(void) {
    extern s16 D_80133498;
    extern s16 D_8013349A;
    extern s16 D_8013349C;
    extern s16 D_8013349E;
    slpm_SetDispMask(0);
    D_80133498 = 0;
    D_8013349A = 0;
    D_8013349C = 0x280;
    D_8013349E = 0x1E0;
    slpm_ClearImage(&D_80133498, 0, 0, 0);
    slpm_DrawSync(0);
    slpm_SetDispMask(1);
}
