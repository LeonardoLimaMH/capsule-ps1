#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0038", func_800C0038);

void func_800C0118(void) {
    extern s16 D_800F0670[];
    (*D_800F0670) = 0;
}
