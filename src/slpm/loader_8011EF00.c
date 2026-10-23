#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fr_);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_t);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fw);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fr);

#include "ghidra.h"
void slpm__spu_FsetRXX(int param_1, uint param_2, int param_3)
{
  extern s32 D_801333D4[];
  extern s32 D_801333FC[];
  if (param_3 == 0)
  {
    *((short *) ((param_1 * 2) + (*D_801333D4))) = (short) param_2;
  }
  else
  {
    *((short *) ((param_1 * 2) + (*D_801333D4))) = (short) (param_2 >> (*D_801333FC));
  }
  return;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FgetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_FsetPCR);

void func_8011F48C(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x20000000;
}

void func_8011F4B4(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x22000000;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011EF00", slpm__spu_Fw1ts);
