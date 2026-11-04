#include "common.h"
#include "yuugi.h"

void CD_initintr(void) {
    extern s32 D_80073084[];
    extern s32 D_80073088[];
    extern s32 D_80073094[];
    extern s32 D_80073098[];
    extern void func_80047054(void);

    *D_80073088 = 0;
    *D_80073084 = 0;
    *D_80073098 = 0;
    *D_80073094 = 0;
    ResetCallback();
    InterruptCallback(2, func_80047054);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046AC8", CD_init);
