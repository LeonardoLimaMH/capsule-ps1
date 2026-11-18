#include "common.h"

#include "ghidra.h"
void func_800AB78C(void)
{
  u8 *new_var;
  extern u8 D_800859F8[];
  extern u8 D_8008ED68[];
  extern u8 D_800B3D24[];
  extern s32 D_800B3D34[];
  new_var = D_8008ED68;
  *D_800B3D34 = *((s32 *) (((s8 *) new_var) + 0x88));
  if (((*D_800859F8) == 2) && ((*D_800B3D24) != 0))
  {
    *D_800B3D34 = *((s32 *) (((s8 *) D_8008ED68) + 0x98));
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AB7D8);
