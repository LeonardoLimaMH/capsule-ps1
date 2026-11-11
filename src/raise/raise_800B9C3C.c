#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9C3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9CEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9E34);

void raise_SpuInit(void) {
    func_800BA3A8(0);
}

void func_800B9F08(s32 arg0) {
    func_800BA534(0, arg0);
}

void func_800B9F2C(s32 arg0) {
    func_800BA744(0, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9F50);

void SpuInitHot(void) {
    func_800BA3A8(1);
}

void func_800BA190(s32 arg0) {
    func_800BA534(1, arg0);
}

void func_800BA1B4(s32 arg0) {
    func_800BA744(1, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA1D8);
