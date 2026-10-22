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

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A07AC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A0824);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A0944);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A09A4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A1250);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A1394);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A13E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A150C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A1798);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A225C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2588);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2678);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A29D4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2A80);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2B64);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2BB0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2CC8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2D84);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2DBC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2E00);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2F1C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A2F88);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3014);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3060);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3128);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3230);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A32F0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3388);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3410);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3570);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3718);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A378C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3814);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A39D8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3AB4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3BDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3C70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3D44);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A3F70);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4038);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A40DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4448);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4720);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4820);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4884);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4964);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4A28);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A4A8C);
