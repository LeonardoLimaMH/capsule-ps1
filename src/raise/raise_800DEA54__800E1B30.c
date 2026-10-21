#include "common.h"

void func_800E1B30(void) {
    extern s16 D_80078C20[];
    (*D_80078C20) = (*D_80078C20) == 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E1B30", func_800E1B48);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E1B30", func_800E1C14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E1B30", func_800E1DAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E1B30", func_800E1E50);
