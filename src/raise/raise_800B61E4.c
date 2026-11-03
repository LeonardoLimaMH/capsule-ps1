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
typedef struct {
    u8 _p00[0x8];
    s32 unk8;
    u8 _p0C[0x4];
    s32 unk10;
    u8 _p14[0x4];
    s32 unk18;
    u8 _p1C[0x8];
    s32 unk24;
    u8 _p28[0x38];
    s32 unk60[7];
    s32 unk7C[7];
    s32 *unk98[14];
    s32 unkD0;
    u8 _pD4[0x2F4];
    s32 unk3C8[1][9];
} S_800EEB9C;


void func_800B7264(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_FIELD(D_800EEB9C, s32 *, 0) = arg0;
    M2C_FIELD(D_800EEB9C, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EEB9C, s32 *, 0x740) = 0;
    func_800B6FA0();
}

void func_800B7298(s32 arg0) {
    typedef struct {
        u8 _p00[0x46];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    } Obj;
    extern s16 D_800ED88C[];
    extern Obj *D_800EFF6C[];
    extern struct {
        u8 _p00[0x1C];
        Obj *unk1C;
        u8 _p20[0x8];
        Obj *unk28[7];
        u8 _p44[0x708];
        Obj *unk74C;
        u8 _p750[0x4];
        Obj *unk754;
        u8 _p758[0x4];
        Obj *unk75C;
        u8 _p760[0x10];
        Obj *unk770;
        u8 _p774[0x4];
        Obj *unk778;
    } D_800EEB9C[];
    s32 i;

    switch (arg0) {
    case 0:
        break;
    case 1:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A -= 2;
        }
        D_800EEB9C->unk1C->unk46 += 6;
        for (i = 0; i < 7; i++) {
            D_800EEB9C->unk28[i]->unk46 += 6;
        }
        D_800EEB9C->unk74C->unk46 -= 6;
        D_800EEB9C->unk754->unk46 -= 6;
        D_800EEB9C->unk75C->unk46 -= 6;
        D_800EEB9C->unk770->unk46 -= 6;
        D_800EEB9C->unk778->unk46 += 6;
        break;
    case 2:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A += 2;
        }
        D_800EEB9C->unk1C->unk46 -= 6;
        for (i = 0; i < 7; i++) {
            D_800EEB9C->unk28[i]->unk46 -= 6;
        }
        D_800EEB9C->unk74C->unk46 += 6;
        D_800EEB9C->unk754->unk46 += 6;
        D_800EEB9C->unk75C->unk46 += 6;
        D_800EEB9C->unk770->unk46 += 6;
        D_800EEB9C->unk778->unk46 -= 6;
        break;
    }
}

void func_800B74A4(void) {
    typedef struct {
        u8 _p00[0x46];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
    } Obj;
    typedef struct {
        u8 _p00[0xDC];
        u16 unkDC;
        u8 _pDE[0x8BC];
        u8 unk99A;
    } Sys;
    extern u16 D_8006AF80[];
    extern Sys D_8008ED68[];
    extern struct {
        u8 _p00[0x8A];
        u16 unk8A;
        u8 _p8C[0x11C];
    } D_80091618[];
    extern struct {
        u8 _p00[0x73C];
        s32 unk73C;
        u8 _p740[0xC];
        Obj *unk74C;
    } D_800EEB9C[];
    extern struct {
        u8 _p00[0x384];
        s16 unk384;
        s16 unk386;
        u8 _p388[0x414];
    } D_80100F38[];
    Sys *sys;
    s32 i;
    s32 sel;

    sys = D_8008ED68;
    i = 0;
    if ((u32)(sys->unkDC - 0xF) < 0x32) {
        do {
            if (i == D_800EEB9C->unk73C && i != *D_8006AF80) {
                sel = 1;
            } else {
                sel = i == D_80091618[*D_8006AF80].unk8A;
            }
            if (D_80100F38[i].unk384 == 1
                && (i == *D_8006AF80 || i == D_80091618[*D_8006AF80].unk8A)
                && sys->unk99A != D_80100F38[i].unk384
                && (s16)(D_80100F38[i].unk386 % 32) >= 0x10) {
            } else {
                func_8001F35C((s16)(D_800EEB9C->unk74C->unk46 + 0x32 + i * 0xD), (s16)(D_800EEB9C->unk74C->unk4A + 8), sel, 0, i != *D_8006AF80, i + 1, 1, 3);
            }
            i++;
        } while (i < 6);
    }
}

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

s32 func_800B7F74(s32 arg0, s32 arg1) {
    extern S_800EEB9C D_800EEB9C;
    return D_800EEB9C.unk3C8[arg0][arg1] == 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7FA8);
