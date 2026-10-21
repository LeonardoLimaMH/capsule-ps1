#include "common.h"

void func_80116A08(void) {
    func_80116A84(0xF0000003, 0x20);
}

void func_80116A30(void) {
    func_80116A84(0xF0000003, 0x40);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116A08", func_80116A58);
