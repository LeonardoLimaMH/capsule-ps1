#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E16EC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E1720);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E1780);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E17F8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E1820);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E1848);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E186C);


extern u8 D_80105320[];

void func_800E194C(s32 unused, s32 idx, s16 x, s16 y, s32 value) {
    u8 *rec = D_80105320 + (idx & 0xFFFF) * 0x110;
    u8 *slot = rec + *(s16 *)(rec + 4) * 8;
    s32 next;

    *(s16 *)(slot + 0x10) = x;
    *(s16 *)(slot + 0x12) = y;
    *(s32 *)(slot + 0x14) = value;
    next = *(s16 *)(rec + 4) + 1;
    *(u16 *)(rec + 6) += 1;
    *(s16 *)(rec + 4) = next % 31;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC", func_800E19D0);
