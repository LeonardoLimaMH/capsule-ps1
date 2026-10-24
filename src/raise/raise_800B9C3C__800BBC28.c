#include "common.h"

void func_800BBC28(s32 arg0)
{
  s8 *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = (s8 *) D_800EFF58;
  *((s32 *) (new_var + 0x84)) = arg0;
  *((s32 *) (new_var + 0x88)) = 0x20;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BBC40);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BBF3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BBF9C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC31C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC394);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC438);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC50C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC5FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC674);
