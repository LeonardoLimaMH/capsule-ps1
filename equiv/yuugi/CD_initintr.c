#include "common.h"

extern s32 D_80073084;
extern s32 D_80073088;
extern s32 D_80073094;
extern s32 D_80073098;
extern void func_80047054();

s32 CD_initintr(void) {
    D_80073088 = 0;
    D_80073084 = 0;
    D_80073098 = 0;
    D_80073094 = 0;
    ResetCallback();
    return InterruptCallback(2, func_80047054);
}
