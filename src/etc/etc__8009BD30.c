#include "common.h"

void func_8009BD30(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 temp_v1;
  temp_v1 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  *((s32 *) (((s8 *) arg0) + 0x38)) = temp_v1;
  if (7U > ((u32) ((*D_8008EE44) - 4)))
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) (temp_v1 & (~1));
    *((s16 *) (((s8 *) arg0) + 0x6E)) = -1;
    *((s16 *) (((s8 *) arg0) + 0x68)) = (temp_v1 = -0x8000);
    *((s16 *) (((s8 *) arg0) + 0x6C)) = -0x8000;
    *((s16 *) (((s8 *) arg0) + 0x6A)) = 0;
    temp_v1 = 0x46;
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x30))) & (~0x30)) | 0x20);
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38))) | 8);
    if ((*((s16 *) (((s8 *) arg0) + temp_v1))) >= 0xA1)
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) - 0x200);
    }
    if (((*((s16 *) (((s8 *) arg0) + 0x4A))) + 0x80) < (-0x78))
    {
      *((s16 *) (((s8 *) arg0) + 0x4A)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x4A)))) + 0x180);
    }
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009BDD8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C324);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C970);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C9C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009CB84);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009D918);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DB30);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DFCC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E6AC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E700);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E75C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E854);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009EBD8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009ECF4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F384);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F9DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FBDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FF08);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A03D4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A0668);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A0718);
