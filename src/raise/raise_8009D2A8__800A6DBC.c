#include "common.h"

void func_800A6DBC(void) {
    func_8001AD74(8);
}

s32 func_800A6DDC(void)
{
  extern s32 D_8008F7D0[];
  if ((*D_8008F7D0) == 0)
  {
    func_800E1B30();
    return 1;
  }
  if (D_8008F7D0)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6E14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6ED4);
