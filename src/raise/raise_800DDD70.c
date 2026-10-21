#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DDD70);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DDE88);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DDFE8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE10C);

void func_800DE304(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3) {
    *arg2 = -(((arg0 - 4) * 0x64) + 0x32);
    *arg3 = ((arg1 - 4) * 0x64) + 0x32;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE35C);

void func_800DE420(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3) {
    *arg2 = ((-arg0 - 0x32) / 100) + 5;
    *arg3 = ((arg1 - 0x32) / 100) + 5;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE480);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE770);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE938);
