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

#include "common.h"

void func_800BC394(s32 arg0, s32 arg1) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    extern u8 D_800F0604[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x120) = func_800BC8FC(0x19, -0xF0, (s16) ((arg0 * 0x10) + 0x40), 4, M2C_FIELD(D_800EFF58, s32 *, 0x114) == arg0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x158), 1, 1, arg1, 2, 1, D_800F0604);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC438);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC50C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC5FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BC674);
