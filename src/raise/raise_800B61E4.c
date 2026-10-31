#include "common.h"

void func_800B61E4(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF2FC[];
    func_800B6D98(0x1A, 0x1E4, 0x35, 3, 0, D_800EE5D0, (*D_800EF2FC), 1, 0, 0, 2, 1);
}

void func_800B6248(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF318[];
    func_800B6D98(1, 0x178, 0xC8, 9, 0, D_800EE5D0, (*D_800EF318), 1, 0, 1, 2, 1);
}

void func_800B62AC(void) {
    extern u8 D_800EE5D0[];
    extern s32 D_800EF318[];
    func_800B6D98(1, -0xBC, 0xC8, 9, 0, D_800EE5D0, (*D_800EF318), 1, 0, 1, 2, 1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6310);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6624);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6C48);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6D98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6FA0);

#include "common.h"

void func_800B70A0(s32 arg0)
{
  extern u8 D_800859F2[];
  void **new_var;
  int new_var2;
  extern M2C_UNK D_800EEB9C[];
  s32 temp_a0;
  s32 temp_v1;
  s32 temp_v1_2;
  new_var2 = 0x74C;
  temp_a0 = arg0 << 0x10;
  if (temp_a0 == 0)
  {
    if (func_800D1548() == 0)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38))) | 1);
      new_var = (void **) (((s8 *) D_800EEB9C) + 0x754);
      if ((*D_800859F2) & 8)
      {
        *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*new_var)) + 0x38))) | 1);
        *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38))) | 1);
      }
      if (((struct 
      {
        u8 _p[0x76C];
        s32 v;
      } *) D_800EEB9C)->v == 1)
      {
        temp_v1 = *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38));
        if ((temp_v1 & 1) != ((struct 
        {
          u8 _p[0x76C];
          s32 v;
        } *) D_800EEB9C)->v)
        {
          *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38)) = (s32) (temp_v1 | 1);
        }
      }
      if (((struct 
      {
        u8 _p[0x774];
        s32 v;
      } *) D_800EEB9C)->v == 1)
      {
        temp_v1_2 = *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38));
        if ((temp_v1_2 & 1) != ((struct 
        {
          u8 _p[0x774];
          s32 v;
        } *) D_800EEB9C)->v)
        {
          *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38)) = (s32) (temp_v1_2 | 1);
        }
      }
    }
  }
  else
    if (func_800D1548(temp_a0) == 0)
  {
    *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + new_var2)))) + 0x38))) & (~1));
    if ((*D_800859F2) & 8)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x754)))) + 0x38))) & (~1));
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x75C)))) + 0x38))) & (~1));
    }
    if (((struct 
    {
      u8 _p[0x76C];
      s32 v;
    } *) D_800EEB9C)->v == 1)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x770)))) + 0x38))) & (~1));
    }
    if (((struct 
    {
      u8 _p[0x774];
      s32 v;
    } *) D_800EEB9C)->v == 1)
    {
      *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x778)))) + 0x38))) & (~1));
    }
  }
}

#include "common.h"

void func_800B7264(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_FIELD(D_800EEB9C, s32 *, 0) = arg0;
    M2C_FIELD(D_800EEB9C, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EEB9C, s32 *, 0x740) = 0;
    func_800B6FA0();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7298);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B74A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B768C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B77AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B786C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B78C4);

s32 func_800B7A5C(void) {
    return 0;
}

s32 func_800B7A64(void) {
    return 0;
}

s32 func_800B7A6C(void) {
    return 4;
}

void func_800B7A74(void) {

}

s32 func_800B7A7C(void) {
    return 4;
}

void func_800B7A84(void) {

}

void func_800B7A8C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7A94);

void func_800B7E68(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7E70);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7ED8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7F40);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7F74);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7FA8);
