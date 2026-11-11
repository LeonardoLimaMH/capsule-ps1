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
static inline s32 verifica_indice_8009B150(s32 i) {
    extern u8 D_80091618[];
    extern u16 D_8006AF80[];
    u8 *p = D_80091618 + i * 0x1A8;
    if (*(u16 *)(p + 0x10) == 0xFFFF || i == *D_8006AF80) return 0;
    if (*(u16 *)(p + 0x8A) != 0xFFFF) return 0;
    return *(u16 *)(p + 0x84) < 3U;
}
