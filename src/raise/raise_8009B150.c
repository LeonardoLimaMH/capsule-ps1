#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B150);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B350);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B4DC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B800);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009BA00);

void func_8009BA40(void)
{
  extern M2C_UNK D_8008ED68[];
  if (D_8008ED68)
  {
    *((s8 *) (((s8 *) D_8008ED68) + 0x28)) = 0;
    *((s8 *) (0x29 + ((s8 *) D_8008ED68))) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2A)) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2B)) = 0;
    *((s32 *) (((s8 *) D_8008ED68) + 0x2C)) = 0;
  }
  else
  {
    *((s8 *) (((s8 *) D_8008ED68) + 0x28)) = 0;
    *((s8 *) (0x29 + ((s8 *) D_8008ED68))) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2A)) = 0;
    *((s8 *) (((s8 *) D_8008ED68) + 0x2B)) = 0;
    *((s32 *) (((s8 *) D_8008ED68) + 0x2C)) = 0;
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009BA60);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009BB30);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009BE98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009C4D4);
