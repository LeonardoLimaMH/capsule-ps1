#include "common.h"

#include "common.h"

void func_800BAD64(s32 arg0) {
    extern M2C_UNK D_800EFF58[];
    M2C_FIELD(D_800EFF58, s32 *, 0) = arg0;
    M2C_FIELD(D_800EFF58, s32 *, 4) = 0x20;
    M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x7C), s32 *, 0x38) | 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BAD90);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BAF3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BAF7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB034);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB194);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB20C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB284);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB310);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB69C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB714);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB79C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BB814);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BAD64", func_800BBA38);
