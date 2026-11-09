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

#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44[];
extern void (*D_800B2C2C[])(u8 *);

void func_8009C970(void)
{
  u8 (*new_var)[];
  new_var = &D_80085428;
  rand();
  D_800B2C2C[*D_8008EE44](*new_var);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C9C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009CB84);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009D918);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DB30);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DFCC);

void func_8009E6AC(void *arg0) {
    extern int func_80012508();
    func_8001A464(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, 0x801C16EC);
    func_80019F30(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, func_80012508);
    func_80012508();
}

void func_8009E700(void) {
    extern u16 D_8008EE48[];
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        func_8001A49C(0x801C16EC);
        func_80012578();
        return;
    case 1:
        func_80012508();
        return;
    }
}

extern void func_800A4964();
void func_8009E75C(u8 *p) {
    s32 i;
    u8 *q;
    for (i = 0; i < 4; i++) {
        func_80012A20(func_80019F30((p[0x5d4] + 0x15) | 0x20000, i), 1, 0, 0);
    }
    func_80012A20(func_80019F30((p[0x5d4] + 0x15) | 0x50000, 0), 1, 0, 0);
    q = (u8 *)func_80032DB0(0, 0x78, 5, p[0x5d4] + 0x15, 0, func_800A4964);
    q[0x5a] = 0;
    q[0x59] = 0;
    q[0x58] = 0;
    i = 0;
    do {
        func_800992CC(p, i);
        i++;
    } while (i < 2);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E854);

#include "common.h"

void func_8009EBD8(void *arg0)
{
  extern u16 D_8008EE48[];
  extern s16 D_800B3B64[];
  M2C_UNK var_a0;
  s32 var_a1;
  s32 var_s0;
  s32 var_v0;
  u8 temp_a0;
  var_s0 = 0;
  var_v0 = 0 < 3;
  do
  {
    var_v0 = var_s0 < 3;
    if (var_v0 != 0)
    {
      var_a0 = 0x20013;
      var_a1 = var_s0 + 0x10;
    }
    else
    {
      var_a0 = 0x20014;
      var_a1 = var_s0 + 0x18;
    }
    var_s0 += 1;
    func_80012A20(func_80019F30(var_a0, var_a1), 1, 0, 0);
  }
  while (var_s0 < 8);
  func_80012A20(func_80019F30(0x50014, 5), 1, 0, 0);
  if ((*D_8008EE48) == 0)
  {
    temp_a0 = *((u8 *) (((s8 *) arg0) + 0x5D0));
    if ((temp_a0 == 2) || ((*((u8 *) (((s8 *) arg0) + 0x5DA))) == 1))
    {
      func_80012544(0x12);
      goto block_11;
    }
    if (temp_a0 == 1)
    {
      func_80012544(0x11);
      if ((*D_800B3B64) == 0)
      {
        block_11:
        func_800125AC(2);

      }
    }
    else
    {
      goto block_12;
    }
  }
  else
  {
    block_12:
    func_80012544(0xC);

  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009ECF4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F384);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F9DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FBDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FF08);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A03D4);

void func_800A0668(void) {
    extern u16 D_8008EE48[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20010, var_s0 + 0xB), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80012A20(func_80019F30(0x50010, 1), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012508();
        func_800125AC(1);
        return;
    }
    func_80012508();
}

void func_800A0718(void) {
    extern u16 D_8008EE48[];
    func_80012A20(func_80019F30(0x20014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 3), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012544(0x15);
        func_800125AC(1);
        return;
    }
    func_80012508();
}
