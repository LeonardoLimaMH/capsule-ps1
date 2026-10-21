#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80047E84", func_80047E84);

s32 ER_active(void) {
    extern s32 D_800733EC[];
    return (*D_800733EC);
}
