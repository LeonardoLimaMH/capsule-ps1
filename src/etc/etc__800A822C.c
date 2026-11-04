#include "common.h"

void func_800A822C(void *arg0)
{
  int new_var2;
  extern u16 D_8008EE44[];
  s32 new_var;
  s32 var_v0;
  if (((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x80)))) || ((*D_8008EE44) == (*((s32 *) (((s8 *) arg0) + 0x84)))))
  {
    if (arg0)
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
    else
    {
      new_var2 = ~1;
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
    }
  }
  else
  {
    new_var = *((s32 *) (((s8 *) arg0) + 0x38));
    var_v0 = new_var | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8278);

#include "common.h"

void func_800A8350(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 4U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, M2C_GFIELD(D_8008ED68, u16, 0xDC) - 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

#include "common.h"

void func_800A83CC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1;
    s16 var_v1;

    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        var_a1 = 0x21;
        if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
            var_a1 = 0x1A;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x6000C, var_a1);
        var_v1 = -0xA0;
        if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
            var_v1 = -0x90;
        }
        M2C_FIELD(arg0, s16 *, 0x46) = var_v1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A847C);

#include "common.h"

void func_800A8534(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_800B3C29[];
    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 6) < 2U) {
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x50) > 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) - M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) - M2C_FIELD(arg0, u16 *, 0x76));
                if (M2C_FIELD(arg0, s16 *, 0x50) <= 0) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0;
                }
            } else {
                goto block_6;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
block_6:
                (*D_800B3C29) = 1;
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
            M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
            if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x52) = 0U;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8638);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A86A4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8758);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8810);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A88DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8988);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8B74);

#include "ghidra.h"
void func_800A8CAC(void)

{
    extern u16 D_8008EE44[];
    extern u8 D_800B399C[];
    extern s16 D_800B3D0C[];
  int iVar1;
  
  if ((((3 < (*D_8008EE44)) && ((*D_8008EE44) != 8)) && (iVar1 = func_800202A4(0x20), iVar1 == 0)) &&
     ((*D_800B3D0C) < 3)) {
    (*D_800B3D0C) = (*D_800B3D0C) + 1;
    func_800A9EC8();
  }
  (**(code **)(D_800B399C + (uint)(*D_8008EE44) * 4))();
  return;
}

void func_800A8D38(void) {
    extern int func_80012508();
    func_80019F30(0xB, func_80012508);
    func_80012508();
}

void func_800A8D68(void) {
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800859F0[];
    extern s32 D_800B3D08[], D_800B3C48[];
    u8 *p = (u8 *)D_8008ED68;
    if (*(u16 *)(p + 0xDC) == 6) {
        D_800B3D08[0]++;
        func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
    }
    switch ((s32)*(u16 *)(p + 0xE0)) {
    case 0:
        D_800B3C48[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        if (*(u16 *)(p + 0xDC) == 2) func_800338DC(0x7021);
        else func_800338DC(0x8000);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (*(u16 *)(p + 0xDC) == 2) {
                if (func_800337EC() & 0x80) func_80012508();
            } else {
                if (func_800337EC() & 4) func_80012508();
            }
        } else {
            func_80012508();
        }
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A8EC8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A90DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A92D4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9650);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A98FC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9ABC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800A9C0C);

#include "common.h"

void func_800A9EC8(void)
{
  extern u8 D_80018600[];
  extern u16 D_8008EE44[];
  extern int func_800A9C0C();
  s32 temp_s1;
  s16 var_v0;
  void *temp_s2;
  void *temp_v0;
  temp_s2 = func_80015B3C(&func_800A9C0C, D_80018600, 1);
  temp_s1 = func_800202A4(4);
  temp_v0 = func_80015B3C(D_80018600, D_80018600, 5);
  func_80015EF8(temp_v0);
  *((s32 *) (((s8 *) temp_v0) + 0x18)) = func_80019F30(0x6000B, 0x2F);
  *((s32 *) (((s8 *) temp_v0) + 0x38)) = (s32) ((((*((s32 *) (((s8 *) temp_v0) + 0x38))) | 0x40) & (~0x30)) | 0x10);
  *((void **) (((s8 *) temp_s2) + 0x28)) = temp_v0;
  *((s16 *) (((s8 *) temp_s2) + 0x2C)) = (s16) (func_800202A4(0x65) - 0x32);
  *((s16 *) (((s8 *) temp_s2) + 0x2E)) = (s16) (-func_800202A4(0x64));
  *((s16 *) (((s8 *) temp_s2) + 0x30)) = 5;
  *((s8 *) (((s8 *) temp_s2) + 0x32)) = func_800202A4(5);
  if (temp_s1 == 0)
  {
    *((s8 *) (((s8 *) temp_s2) + 0x33)) = 6;
    *((s8 *) (((s8 *) temp_s2) + 0x34)) = 4;
    var_v0 = func_800202A4(0x190) - 0xC8;
  }
  else
  {
    *((s8 *) (((s8 *) temp_s2) + 0x33)) = 0x14;
    *((s8 *) (((s8 *) temp_s2) + 0x34)) = 1;
    var_v0 = func_800202A4(0x1000);
  }
 do { *((s16 *) (((s8 *) temp_s2) + 0x38)) = var_v0; } while (0);
  *((s16 *) (((s8 *) temp_s2) + 0x3A)) = (s16) (func_800202A4(0x32) + 0x32);
  *((s16 *) (((s8 *) temp_s2) + 0x3C)) = (s16) (func_800202A4(0x14) + 0x28);
  if ((*D_8008EE44) == 4)
  {
    func_80034AB0(0x40);
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA020);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A822C", func_800AA0A0);

#include "ghidra.h"
void func_800AA20C(undefined4 param_1)

{
    extern int func_80012508();
  func_80097E40(param_1,&func_80012508);
  func_80012508();
  return;
}
