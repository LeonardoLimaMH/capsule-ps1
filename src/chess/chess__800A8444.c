#include "ghidra.h"
#include "matching.h"
#include "common.h"

int func_800A8444(undefined4 param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  param_3 = param_3 - ((uint) (*((byte *) (param_2 + 0x15))));
  param_4 = param_4 - ((uint) (*((byte *) (param_2 + 0x16))));
  if (!(param_3 < 1))
  {
    iVar1 = 5;
    if ((param_4 < 1) && ((iVar1 = 6, param_4 < 0)))
    {
      iVar1 = 7;
    }
  }
  else
    if (param_3 < 0)
  {
    iVar1 = 3;
    if ((param_4 < 1) && ((iVar1 = 2, param_4 < 0)))
    {
      iVar1 = 1;
    }
  }
  else
  {
    iVar1 = ((uint) (0 < param_4)) << 2;
  }
  return iVar1;
}

#include "common.h"

#include "ghidra.h"
void func_800A84A0(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085428[];
  if (param_3 != 5) {
    switch(*param_1) {
    case 0x13:
    case 0x22:
    case 0x25:
    case 0x31:
    case 0x47:
    case 0x48:
    case 0x5c:
    case 0x5d:
      if (param_4 == 0) {
        if (param_1[0x27] == '\0') {
          param_1[0x27] = 1;
          func_8009C5C4(D_80085428,param_2,param_3,param_1);
        }
      }
      else if (param_1[0x27] != '\0') {
        param_1[0x27] = 0;
        func_8009C278(D_80085428);
      }
    }
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8548);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8710);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8770);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A87C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8830);

s16 func_800A88C4(s16 a) {
     return 0x4020 / a;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A88E8);

s32 func_800A8954(s32 arg0) {
    register s32 a asm("v0");
    register s32 b asm("v1");

    if (arg0 >= 10) {
        a = 0x80124000;
        arg0 -= 10;
        b = arg0 * 0xE000;
    } else {
        a = arg0 * 0xE000;
        b = 0x80140000;
    }
    return a + b;
}

s32 func_800A8994(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = (u8 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x5E8);
  return (*new_var) + 0x10D;
}

s32 func_800A89C8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  u8 temp_t0;
  unsigned int new_var;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));
  temp_t0 = *((u8 *) (((s8 *) new_var) + 0x5E8));
  var_a3 = 0;
  if (var_a1 != 0)
  {
    goto loop_2;
  }
  if (var_a2 == 0)
  {
    goto block_9;
  }
  loop_2:
  if (var_a2 == 0)
  {
    goto block_4;
  }

  block_3:
  var_a2 -= 1;

  goto block_5;
  block_4:
  var_a1 -= 1;

  var_a2 = 4;
  block_5:
  temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));

  if (temp_t0 != (*((u8 *) (((s8 *) temp_v1) + 0x5E8))))
  {
    goto block_7;
  }
  var_a3 = (*((u8 *) (((s8 *) temp_v1) + 0x612))) + 1;
  block_7:
  if (var_a1 != 0)
  {
    goto loop_2;
  }

  if (var_a2 != 0)
  {
    goto block_3;
  }
  block_9:
  return var_a3;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8A7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8B14);

s32 func_800A8D08(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  return (((u32) (*((u32 *) (((s8 *) new_var) + 0x30)))) >> 0x19) & 3;
}

s32 func_800A8D44(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x30);
  return (*new_var) & 0x08000000;
}

s32 func_800A8D7C(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = ((s8 *) (arg0 + ((arg2 * 0x7C) + ((long) (arg1 * 0x2E8))))) + 0x30;
  return (*((s32 *) new_var)) & 0x10000000;
}

s32 func_800A8DB4(s32 arg0, s32 arg1, s32 arg2)
{
  s32 p = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  u32 v = *((u32 *) (p + 0x30));
  if (v & 0x2000000) {
    return 0 < (v & 0x20000000);
  }
  return 1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8E08);

s32 func_800A8E34(s32 arg0, s32 arg1, s32 arg2)
{
  s32 p = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  u32 v = *((u32 *) (p + 0x30));
  if (v & 0x100) {
    return 0 < (v & 0x200);
  }
  return 2;
}

extern u8 D_8006B2A4[];
u8 *func_800A8E84(s32 arg0)
{
  u8 a = *((u8 *) (arg0 + 0x5FA));
  s32 p = arg0 + ((*((u8 *) (arg0 + a + 0x5FB)) * 0x7C) + (a * 0x2E8));
  return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

u8 *func_800A8EE8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 p = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

u8 *func_800A8F3C(s32 arg0) {
    extern u8 D_8006B2A4[];
    s32 a = *(u8 *) (arg0 + 0x70C);
    s32 b = *(u8 *) (arg0 + 0x5FA);
    s32 p = arg0 + ((a * 0x7C) + ((1 - b) * 0x2E8));
    return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A8FA0);

void *func_800A8FFC(void *arg0)
{
  u8 temp_v0;
  s8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0x5FA));
  new_var = (s8 *) (arg0 + temp_v0);
  return (arg0 + ((temp_v0 * 0x2E8) + 0x18)) + ((*((u8 *) (new_var + 0x5FB))) * 0x7C);
}

void func_800A903C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 p;
    if (arg3 != 5) {
        func_80028200(*(u8 *) (arg0 + arg3 * 0x7C + arg2 * 0x2E8 + 0x5E8), 2);
    } else {
        func_80034AB0(0x48);
    }
    p = arg1 + arg3 * 0x7C + arg2 * 0x2E8;
    *(u32 *) (p + 0x30) |= 0x100;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A9100);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A924C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A93DC);

#include "common.h"

void func_800A954C(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 0) - ((s32) ((M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0)) * arg4) / arg3));
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 4) - ((s32) ((M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4)) * arg4) / arg3));
    if ((arg3 / 2) < arg4) {
        M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
        return;
    }
    M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A95F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A9810);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A9A78);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800A9C9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AA15C);

#include "common.h"

void func_800AAAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s16 D_80100F38[];
    extern s32 D_80100F3C[];
    s16 temp_s0;

    temp_s0 = arg3 + 0x1D;
    func_8001F35C((s16) (arg2 + 0x40), temp_s0, (*D_80100F38), 0, 0, 5 - M2C_FIELD((arg0 + arg1), u8 *, 0xBDA), 1, (*D_80100F3C));
    func_800188F0((s16) (arg2 + 0x2D), temp_s0, 3, 0, (*D_80100F3C));
    func_800A9810(arg0, arg1, arg2, arg3, 0);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AAB8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AACAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AADE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ABD9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ACD58);

void func_800ACF04(u8 *arg0) {
    extern u8 *func_80015B3C();
    extern s32 func_80019F30();
    extern void func_800ACD58();
    extern void func_800161C4();
    u32 i = arg0[0xBCA];
    u8 *o = func_80015B3C(func_800ACD58, func_800161C4, 5);
    u8 *q;
    s32 r;
    func_80015EF8(o);
    q = arg0 + i;
    if (q[0x5E0] == 0) {
        r = func_80019F30(0x60013, i + 6);
    } else {
        r = func_80019F30(0x60013, 0xB);
    }
    *(s32 *) (o + 0x18) = r;
    *(s16 *) (o + 0x50) = 0x1000;
    *(s16 *) (o + 0x4E) = 2;
    *(u32 *) (o + 0x7C) = i;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ACFA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AD06C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AD240);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AD408);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AD4D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AD7B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ADAA4);

s32 func_800ADBC4(s32 arg0) {
    return arg0 & 0x1F;
}

s32 func_800ADBCC(s32 arg0) {
    return (arg0 >> 5) & 7;
}

s32 func_800ADBD8(s32 arg0) {
    return (arg0 >> 8) & 0x1F;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ADBE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ADD70);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800ADF5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE03C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE35C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE504);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE728);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AE8AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AEA4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444", func_800AEBD0);
