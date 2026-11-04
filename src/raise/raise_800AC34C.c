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

/* Estado do modo raise em D_800EEB9C (layout parcial). */

s32 func_800ACE80(void) {
    typedef struct {
        u8 _p00[0x8A];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_80091618;
    typedef struct {
        u8 _p00[0x228];
        s16 unk228;
        u8 _p22A[0x56E];
        u32 unk798;
    } S_80100F38;
    typedef struct {
        u8 _p00[0x14];
        s32 unk14;
        s32 unk18;
    } S_800EEB9C_local;
    extern u16 D_8006AF80[];
    extern S_80091618 D_80091618[];
    extern u32 D_8008EDF0[];
    extern s16 D_80078C28[];
    extern S_800EEB9C_local D_800EEB9C;
    extern S_80100F38 D_80100F38[];
    s32 s0;
    s32 s1;
    s32 arg;
    u32 temp_v1;

    if (*D_8006AF80 == 0xFFFF) {
        return 0;
    }
    if (D_80091618[*D_8006AF80].unk8A == 0xFFFF) {
        return 0;
    }
    if (func_800D1548() == 1 || !(*D_8008EDF0 & 3)) {
        return 0;
    }
    if (*D_80078C28 != 0 || D_800EEB9C.unk14 == 1) {
        return 0;
    }
    if (D_800EEB9C.unk18 == 1) {
        return 0;
    }

    s1 = 0;
    s0 = 1;
    do {
        temp_v1 = func_800B1260(s0) & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            s1 |= D_80100F38[temp_v1].unk228;
            s1 |= (D_80100F38[temp_v1].unk798 >> 5) & 1;
        }
        s0--;
    } while (s0 >= 0);

    if (s1 != 1) {
        arg = 1;
        if (*D_8008EDF0 & 2) {
            arg = -1;
        }
        func_800B8AD0(arg);
        return 1;
    }

    return 0;
}

/* Estado do modo raise em D_800EEB9C (layout parcial). */

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEBDC);

s32 func_800AEC94(s32 arg0, s32 arg1) {
    extern S_800EEB9C D_800EEB9C;
    return D_800EEB9C.unk3C8[arg0][arg1] == 1;
}

/* Estado do modo raise em D_800EEB9C (layout parcial). */

s32 func_800AECC8(u16 arg0) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];

    if (D_80091618[arg0].unk10 == 0xFFFF) {
        return -1;
    }
    if (arg0 != *D_8006AF80) {
        return (arg0 != D_80091618[*D_8006AF80].unk8A) * 2;
    }
    return 1;
}

/* Estado do modo raise em D_800EEB9C (layout parcial). */

void func_800AED5C(s32 arg0, s32 arg1) {
    extern s16 D_800EEAE4[];
    extern u16 D_800EEB14[];
    extern u8 D_80069AD4[];
    u8 *p = D_80069AD4;
    s32 v = D_800EEB14[arg0] + (arg1 * D_800EEAE4[arg0]) / 1200;

    *(s16 *)(p + 0x7C) = v;
    *(s16 *)(p + 0x76) = v;
    *(s16 *)(p + 0x70) = v;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEDC4);

/* Estado do modo raise em D_800EEB9C (layout parcial). */

s32 func_800AEEDC(s32 idx) {
    extern u8 D_80091618[];
    u8 *base = D_80091618;
    u8 *rec = base + (idx & 0xFFFF) * 0x1A8;
    if (*(u16 *)(rec + 0x10) == 0xFFFF) {
        return 1;
    }
    return *(u16 *)rec == 0xFFFF;
}

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

/* Estado do modo raise em D_800EEB9C (layout parcial). */

s32 func_800AF018(u16 param_1) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    typedef struct {
        u8 _p000[0x378];
        u16 unk378;
        u8 _p37A[0x422];
    } S_100F38;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern S_100F38 D_80100F38[];
    S_91618 *p1;
    s32 i;

    i = 0;
    p1 = D_80091618;
    for (; i < 6; i++) {
        u16 a0 = i;
        s32 v1;

        if (p1[a0].unk10 == 0xFFFF) {
            v1 = -1;
        } else if (a0 == *D_8006AF80) {
            v1 = 1;
        } else {
            v1 = (a0 != p1[*D_8006AF80].unk8A) * 2;
        }

        if (v1 != -1 && v1 != 2) {
            if (func_800E14C4((u16)i) != 1) {
                D_80100F38[i].unk378 = (func_800E680C((u16)i, param_1) != 2);
            }
        }
    }
    return 0;
}

/* Estado do modo raise em D_800EEB9C (layout parcial). */

s32 func_800AF148(u16 param_1) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    typedef struct {
        u8 _p000[0x378];
        u16 unk378;
        u8 _p37A[0x422];
    } S_100F38;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern S_100F38 D_80100F38[];
    extern s16 func_800E6BD8(u16, u16);
    S_91618 *p1;
    s32 i;

    i = 0;
    p1 = D_80091618;
    for (; i < 6; i++) {
        u16 a0 = i;
        s32 v1;

        if (p1[a0].unk10 == 0xFFFF) {
            v1 = -1;
        } else if (a0 == *D_8006AF80) {
            v1 = 1;
        } else {
            v1 = (a0 != p1[*D_8006AF80].unk8A) * 2;
        }

        if (v1 != -1 && v1 != 2) {
            if (func_800E14C4((u16)i) != 1) {
                D_80100F38[i].unk378 = (func_800E6BD8((u16)i, param_1) == 0);
            }
        }
    }
    return 0;
}

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
