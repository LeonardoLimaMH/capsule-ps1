#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AC34C);

/* Estado do modo raise em D_800EEB9C (layout parcial). */
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

void func_800AC9E8(s32 arg0) {
    extern s32 D_800EEBB4[];
    if ((*D_800EEBB4) != arg0) {
        func_800B7FA8();
    }
}

#include "common.h"

void func_800ACA14(s16 arg0) {
    extern s16 D_800EEA80[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F2DA8[];
    extern s16 D_800F2DAA[];
    if (M2C_GFIELD(D_800EEB9C, s32, 0x18) == 1) {
        if (M2C_GFIELD(D_800EEB9C, s32, 0x24) == 5) {
            if (arg0 < 2) {
                if (arg0 >= 0) {
                    func_800B4944(arg0, D_800EEB9C);
                }
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        if (M2C_GFIELD(D_800EEB9C, s32, 0x14) == 1) {
            (*D_800F2DAA) = 7;
            (*D_800F2DA8) = (u16) M2C_GFIELD(D_800EEB9C, s32, 0x24);
            func_800AEB5C(2, 0, D_800EEB9C);
            (*D_800F2DA8) = func_800AC1A4((s16) (*D_800F2DA8), (*D_800F2DAA), D_800EEA80[arg0]);
            func_800AEB5C(1, 0);
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACB08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACC64);

#include "common.h"

s32 func_800ACDE0(void)
{
  extern u8 D_80100F38[];
  int new_var;
  unsigned int temp_v1;
  s32 var_s0;
  s32 var_s1;
  void *temp_v0;
  var_s0 = 0;
  var_s1 = 1;
  do
  {
    temp_v1 = func_800B1260(var_s1) & 0xFFFF;
    if (temp_v1 != 0xFFFF)
    {
      new_var = temp_v1 * 0x79C;
      temp_v0 = new_var + D_80100F38;
      var_s0 = var_s0 | (*((s16 *) (((s8 *) temp_v0) + 0x228)));
      var_s0 = var_s0 | (((((u32) (*((u32 *) (((s8 *) temp_v0) + 0x798)))) >> 2) >> 3) & 1);
    }
    var_s1 -= 1;
  }
  while (var_s1 >= 0);
  return var_s0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACE80);

s32 func_800ACFFC(void) {
    extern volatile u16 D_8006AF80[];
    extern u32 D_8008EDF0[];
    extern s16 D_80078C28[];
    extern S_800EEB9C D_800EEB9C;
    S_800EEB9C *p;
    u32 *temp_a1;

    if (*D_8006AF80 != 0xFFFF) {
        if (func_800AEEDC(*D_8006AF80) != 0) {
            return 0;
        }
        if (func_800D1548() != 1 && (*D_8008EDF0 & 0x80)) {
            p = &D_800EEB9C;
            if (p->unk8 != 0) {
                return 0;
            }
            if (*D_80078C28 != 0) {
                return 0;
            }
            if (p->unk10 != 0) {
                p->unk24 = 5;
                if (p->unk18 != 1) {
                    func_80034AB0(0x48);
                    p->unk18 = 1;
                    temp_a1 = (u32 *)p->unk98[p->unk24];
                    temp_a1[0x38 / 4] &= ~1;
                    func_800B5BA0(1);
                    func_800B70A0(0);
                }
                return 1;
            }
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AD0FC);

void func_800AEA04(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEA0C);

#include "common.h"

void func_800AEB5C(s32 arg0)
{
  extern M2C_UNK D_800EEB9C[];
  struct 
  {
    u8 _p[0xD0];
    s32 v;
  } *new_var;
  u8 *new_var3;
  s32 new_var2;
  func_800B8184();
  new_var2 = (new_var = (struct 
  {
    u8 _p[0xD0];
    s32 v;
  } *) D_800EEB9C)->v;
  new_var3 = (((struct 
  {
    u8 _p[0x24];
    s32 v;
  } *) D_800EEB9C)->v * 4) + ((u8 *) D_800EEB9C);
  *((s32 *) (((s8 *) new_var3) + 0x7C)) = (s32) ((struct 
  {
    u8 _p[0xD0];
    s32 v;
  } *) D_800EEB9C)->v;
  func_800B81C4(arg0, new_var2);
}

s32 func_800AEBA8(s32 arg0, s32 arg1) {
    extern S_800EEB9C D_800EEB9C;
    s32 sum;
    s32 i;

    i = 0;
    sum = 0;
    while (i < arg0) {
        sum += D_800EEB9C.unk60[i];
        i++;
    }
    sum += arg1;
    return sum;
}

s32 func_800AEBDC(s32 arg0) {
    extern u8 D_800EEA00[];
    extern S_800EEB9C D_800EEB9C;
    S_800EEB9C *p;
    s32 i;

    i = 9;
    if (arg0 != 0xFF && D_800EEA00[arg0] == 1) {
        p = &D_800EEB9C;
        p->unk24 = arg0;
        p->unkD0 = p->unk7C[arg0];
        do {
            if (p->unk3C8[arg0][p->unkD0] == 1) {
                return 1;
            }
            i--;
            p->unkD0 = (p->unkD0 + 1) % p->unk60[arg0];
        } while (i != 0);
        return 0;
    }
    return 0;
}

s32 func_800AEC94(s32 arg0, s32 arg1) {
    extern S_800EEB9C D_800EEB9C;
    return D_800EEB9C.unk3C8[arg0][arg1] == 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AECC8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AED5C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEDC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEEDC);

#include "common.h"

s32 func_800AEF38(u32 arg0)
{
  extern s32 D_800EEA8C[];
  if (arg0 < 8U)
  {
    return func_800AF018();
  }
  if (((u32) (arg0 - 8)) < 7U)
  {
    return func_800AF148();
  }
  if (((u32) (arg0 - 0xF)) < 5U)
  {
    return func_800AF278();
  }
  if (((u32) (arg0 - 0x14)) < 2U)
  {
    return func_800AF280();
  }
  if (((u32) (arg0 - 0x16)) < 4U)
  {
    return func_800AF288();
  }
  if (arg0 == 0x1A)
  {
    return func_800AF290(0x1A);
  }
  if (((u32) (arg0 - 0x1B)) >= 2U)
  {
    return *D_800EEA8C;
  }
  if (arg0)
  {
    return func_800AF298();
  }
  else
  {
    return func_800AF298();
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF018);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF148);

s32 func_800AF278(void) {
    return 0;
}

s32 func_800AF280(void) {
    return 0;
}

s32 func_800AF288(void) {
    return 0;
}

s32 func_800AF290(void) {
    return 0;
}
