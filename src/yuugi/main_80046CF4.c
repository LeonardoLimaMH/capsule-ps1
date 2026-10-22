#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046CF4", CD_datasync);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046CF4", CD_getsector);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046CF4", CD_getsector2);

extern s32 D_80073330;

void CD_set_test_parmnum(s32 arg0) {
    D_80073330 = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80046CF4", func_80047054);
