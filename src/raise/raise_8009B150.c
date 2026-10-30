#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B150);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B350);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B4DC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150", func_8009B800);

#include "common.h"

void func_8009BA00(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_GFIELD(D_8008ED68, s8, 0x28) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x29) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x2A) = 0;
    M2C_GFIELD(D_8008ED68, s8, 0x2B) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x2C) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x99C) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A0) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A4) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9A8) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9AC) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9B4) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9B8) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0x9BC) = 0;
}

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
