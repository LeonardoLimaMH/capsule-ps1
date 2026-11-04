#include "common.h"
#include "yuugi.h"

void func_8004C168(void) {
    extern s32 D_80078A58[];
    extern s32 D_80078A5C[];
    (*D_80078A58) = VSync(-1) + 0xF0;
    (*D_80078A5C) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C168", func_8004C19C);

s32 func_8004C2E0(s32 arg0) {
    extern volatile u32 *D_80078A20;
    extern volatile u32 *D_80078A24;
    *D_80078A24 = 0x10000007;
    if ((*D_80078A20 & 0xFFFFFF) != 2) {
        *D_80078A20 = (*D_80078A24 & 0x3FFF) | 0xE1001000;
        (void)*D_80078A20;
        return 0;
    }
    if (arg0 & 8) {
        *D_80078A24 = 0x09000001;
        return 2;
    }
    return 1;
}
