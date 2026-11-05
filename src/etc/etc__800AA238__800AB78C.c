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

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AB8E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800ABBF8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800ABEA0);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AC20C);

void func_800AC4A4(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  extern u16 D_800B39C0[];
  s8 *p = arg0;
  u8 *d = D_8008ED68;
  s16 var_v1;
  s32 var_v0;
  if (*((u16 *) (d + 0xDC)) == 5)
  {
    *((s32 *) (p + 0x38)) = (*((s32 *) (p + 0x38))) & (~1);
    if (*((u16 *) (d + 0xE0)) == 1)
    {
      var_v1 = D_800B39C0[*((s32 *) (p + 0x80))];
      *((s32 *) (p + 0x38)) = (*((s32 *) (p + 0x38))) & (~8);
      *((s16 *) (p + 0x46)) = var_v1;
    }
    else if ((*((u16 *) (d + 0xE0)) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (p + 0x84))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (p + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (p + 0x38))) | 8;
      goto store;
    }
  }
  else if (*((u16 *) (d + 0xDC)) < 7U)
  {
    var_v0 = ((*((s32 *) (p + 0x38))) | 1) & (~8);
    store:
    *((s32 *) (p + 0x38)) = var_v0;
  }
}

void func_800AC570(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  u8 *d = D_8008ED68;
  s16 var_v1;
  s32 var_v0;
  if (*((u16 *) (d + 0xDC)) == 5)
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    if (*((u16 *) (d + 0xE0)) == 1)
    {
      *((s16 *) (((s8 *) arg0) + 0x52)) = *((u16 *) (((s8 *) arg0) + 0x52)) + *((u16 *) (((s8 *) arg0) + 0x76));
      if ((*((s16 *) (((s8 *) arg0) + 0x52))) >= 0x1000)
      {
        *((s16 *) (((s8 *) arg0) + 0x52)) = 0x1000;
        *((s16 *) (((s8 *) arg0) + 0x76)) = 0;
        *D_800B3D20 = 1;
      }
    }
    else if ((*((u16 *) (d + 0xE0)) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (((s8 *) arg0) + 0x84))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
      goto store;
    }
  }
  else
  {
    s32 m = ~8;
    if (*((u16 *) (d + 0xDC)) >= 7U)
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & m;
    }
    else
    {
      var_v0 = ((*((s32 *) (((s8 *) arg0) + 0x38))) | 1) & m;
    }
    store:
    *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AC650);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AC780);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800AC9EC);

void func_800ACC04(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  u8 *d = D_8008ED68;
  s16 var_v1;
  s32 temp_v1;
  s32 var_v0;
  if (*((u16 *) (d + 0xDC)) == 6)
  {
    temp_v1 = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    *((s32 *) (((s8 *) arg0) + 0x38)) = temp_v1;
    if (*((u16 *) (d + 0xE0)) == 0)
    {
      if ((*D_800B3D20) != 0)
      {
        return;
      }
      var_v1 = 2;
      if ((*((s32 *) (((s8 *) arg0) + 0x84))) != 0)
      {
        var_v1 = -2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
    }
    else
    {
      var_v0 = temp_v1 & (~8);
    }
  }
  else if (*((u16 *) (d + 0xDC)) == 8)
  {
    temp_v1 = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & temp_v1;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

void func_800ACCA8(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    u8 *d = D_8008ED68;
    s16 var_a2;
    register s32 var_v0 asm("v0");

    if (*(u16 *)(d + 0xDC) == 6 && *(u16 *)(d + 0xE0) != 0) {
        var_a2 = -0x90;
        *(s32 *)((s8 *)arg0 + 0x38) &= ~1;
        if (*(s32 *)((s8 *)arg0 + 0x84) != 0) {
            var_a2 = 0x10;
        }
        *(s16 *)((s8 *)arg0 + 0x4A) = 0x10;
        *(s16 *)((s8 *)arg0 + 0x46) = var_a2;
        *(s16 *)((s8 *)arg0 + 0x4E) = 3;
    } else {
        if (*D_8008EE44 == 8) {
            register s32 mask asm("v1") = -2;
            var_v0 = *(s32 *)((s8 *)arg0 + 0x38);
            var_v0 &= mask;
        } else {
            var_v0 = *(s32 *)((s8 *)arg0 + 0x38) | 1;
        }
        *(s32 *)((s8 *)arg0 + 0x38) = var_v0;
    }
}

void func_800ACD40(void *arg0)
{
  extern u8 D_8008ED68[];
  u8 *d = D_8008ED68;
  register s32 var_v0 asm("v0");
  if ((*((u16 *) (d + 0xDC)) == 6 && *((u16 *) (d + 0xE0)) != 0) || *((u16 *) (d + 0xDC)) == 8)
  {
    register s32 mask asm("v1") = -2;
    var_v0 = *((s32 *) (((s8 *) arg0) + 0x38));
    var_v0 &= mask;
  }
  else
  {
    var_v0 = *((s32 *) (((s8 *) arg0) + 0x38)) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800ACD98);

void func_800ACEDC(void *arg0)
{
  extern u8 D_8008ED68[];
  extern u8 D_800B3D20[];
  s16 var_v1;
  s32 temp_a1;
  s32 var_v0;
  s8 *new_var;
  new_var = (s8 *) D_8008ED68;
  if ((*((u16 *) (new_var + 0xDC))) == 5)
  {
    temp_a1 = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    *((s32 *) (((s8 *) arg0) + 0x38)) = temp_a1;
    if ((*((u16 *) (((s8 *) D_8008ED68) + 0xE0))) == 1)
    {
      var_v0 = temp_a1 & (~8);
      goto block_10;
    }
    if (((*((u16 *) (((s8 *) D_8008ED68) + 0xE0))) == 4) && ((*D_800B3D20) == 0))
    {
      var_v1 = -2;
      if ((*((s32 *) (((s8 *) arg0) + 0x7C))) != 0)
      {
        var_v1 = 2;
      }
      *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 8;
      goto block_10;
    }
  }
  else
    if (((u16) (*((u16 *) (((s8 *) D_8008ED68) + 0xDC)))) < 7U)
  {
    var_v0 = ((*((s32 *) (((s8 *) arg0) + 0x38))) | 1) & (~8);
    block_10:
    *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;

  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800AA238__800AB78C", func_800ACF80);
