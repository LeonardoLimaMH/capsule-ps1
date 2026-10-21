#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1018);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D10A8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1134);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D11CC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1214);

void func_800D13EC(void *arg0) {
    extern s32 D_8008F780[];
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
    (*D_8008F780) = 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1404);
