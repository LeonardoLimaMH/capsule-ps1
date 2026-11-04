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

void func_800ACB08(s16 arg0) {
    extern struct {
        u8 _p0[0xA4];
        s32 unkA4[1];
    } D_8008ED68;
    void *ed = &D_8008ED68;
    extern M2C_UNK D_800EEB9C[];
    void *p = D_800EEB9C;
    extern s16 D_800EEA78[];
    extern s16 D_800EEA80[];
    extern u16 D_800F2DAC[];
    extern s16 D_800F2DAE[];
    s32 temp_v0;

    if (M2C_GFIELD(p, s32, 0x18) == 1) {
        if (M2C_GFIELD(p, s32, 0x24) == 5) {
            temp_v0 = ((typeof(D_8008ED68) *)ed)->unkA4[D_800EEA78[arg0]];
            if (temp_v0 != 7 && (temp_v0 & 7) == 7 && arg0 < 2 && arg0 >= 0) {
                func_800B4944(arg0, p);
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        if (M2C_GFIELD(D_800EEB9C, s32, 0x14) == 1) {
            s32 temp_v1 = (u16)arg0 << 16;
            void *t = D_800EEA78;
            s32 s2 = temp_v1 >> 15;
            temp_v0 = ((typeof(D_8008ED68) *)ed)->unkA4[*(s16 *)((u8 *)t + s2)];
            if (temp_v0 != 7 && (temp_v0 = temp_v0 & 7) == 7) {
                *D_800F2DAE = temp_v0;
                *D_800F2DAC = (u16) M2C_GFIELD(D_800EEB9C, s32, 0x24);
                func_800AEB5C(2, 0);
                *D_800F2DAC = func_800AC1A4((s16)*D_800F2DAC, *D_800F2DAE, *(s16 *)((u8 *)D_800EEA80 + s2));
                func_800AEB5C(1, 0);
            }
        }
    }
}

void func_800ACC64(s16 arg0) {
    extern S_800EEB9C D_800EEB9C;
    extern s32 D_800EEC6C[];
    S_800EEB9C *p;
    S_800EEB9C *q;
    s32 temp_s3;
    s32 var_s1;
    s32 a1;
    s32 v0;

    p = &D_800EEB9C;
    temp_s3 = p->unkD0;
    var_s1 = 9;

    if (p->unk24 == 5) {
        if (p->unk18 == 1 && arg0 < 2 && arg0 >= 0) {
            func_800B4944(arg0);
        }
    } else if (arg0 >= 2) {
        func_800AEB5C(2, 0);
        q = p;
        if (arg0 == 3) {
            var_s1--;
            do {
                if (q->unkD0 < q->unk60[q->unk24] - 1) {
                    a1 = q->unkD0 + 1;
                } else {
                    a1 = 0;
                }
                q->unkD0 = a1;
                if (func_800AEC94(q->unk24, a1) != 0) {
                    goto done;
                }
            } while (var_s1--);
            q->unkD0 = temp_s3;
        } else {
            do {
                v0 = q->unkD0;
                var_s1--;
                if (v0 <= 0) {
                    v0 = q->unk60[q->unk24];
                }
                a1 = v0 - 1;
                q->unkD0 = a1;
                if (func_800AEC94(q->unk24, a1) != 0) {
                    goto done;
                }
            } while (var_s1 != 0);
            q->unkD0 = temp_s3;
        }
done:
        func_800AEB5C(1, 0);
        if (temp_s3 != *D_800EEC6C) {
            func_80034AB0(0x84);
        }
    }
}

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

s32 func_800AEA0C(void) {
    typedef struct {
        u8 _p00[0x1C];
        s32 unk1C;
        u8 _p20[0x8];
        s32 unk28[7];
        u8 _p44[0x1C];
        s32 unk60[7];
        s32 unk7C[7];
        s32 unk98[7];
        u8 _pB4[0x20];
        s32 unkD4[7][9];
        u8 _p1D0[0x2F4];
        s32 unk4C4[7][9];
        u8 _p5C0[0x18C];
        s32 unk74C;
        u8 _p750[0x4];
        s32 unk754;
        u8 _p758[0x4];
        s32 unk75C;
        u8 _p760[0x10];
        s32 unk770;
        u8 _p774[0x4];
        s32 unk778;
    } S_AEA0C;
    extern u8 D_800EEB9C[];
    extern u16 D_800ED88C[];
    S_AEA0C *q;
    s32 i;
    s32 j;
    s32 temp;

    func_8001611C(0x1000);
    func_800B472C();
    ((S_AEA0C *)D_800EEB9C)->unk1C = func_800B4790();
    for (i = 0; i < 7; i++) {
        S_AEA0C *p = (S_AEA0C *)D_800EEB9C;
        p->unk28[i] = func_800B47F0(i);
        p->unk98[i] = func_800B5CF4(i);
        for (j = 0; j < p->unk60[i]; j++) {
            p->unk7C[i] = 0;
            p->unkD4[i][j] = func_800B5DE8(i, j);
            if (i < 2) {
                p->unk4C4[i][j] = func_800B5F44(i, j);
            }
        }
    }
    temp = func_800B60F8();
    q = (S_AEA0C *)D_800EEB9C;
    q->unk74C = temp;
    q->unk754 = func_800B617C();
    q->unk75C = func_800B61E4();
    func_800B6014();
    q->unk770 = func_800B6248();
    q->unk778 = func_800B62AC();
    D_800ED88C[0] = 0;
    return func_800B7264(1);
}

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

s32 func_800AEDC4(void) {
    typedef struct {
        u16 unk0;
        u8 _p02[0x88];
        u16 unk8A;
        u8 _p8C[0x2];
        s16 unk8E;
        u8 _p90[0x118];
    } Entry_80091618;
    typedef struct {
        u8 _p00[0x8];
        u32 unk8;
        u8 _p0C[0x30];
    } Entry_80063940;
    extern u16 D_8006AF80[];
    extern Entry_80091618 D_80091618[];
    extern Entry_80063940 D_80063940[];
    extern void func_800A89E0(s32, s32);

    register u16 *p_af asm("a0") = D_8006AF80;
    u16 j = D_80091618[*p_af].unk8A;
    u16 a = *p_af;
    Entry_80091618 *e = &D_80091618[a];
    Entry_80063940 *pe = &D_80063940[e->unk0];
    Entry_80091618 *f = &D_80091618[j];
    s32 v = (((D_80063940[f->unk0].unk8 ^ pe->unk8) >> 12) & 3) != 0;
    s32 v2 = v * 2;
    s16 s = v2;

    e->unk8E = v2;
    f->unk8E = v2;
    func_800A89E0(a, s);
    func_800A89E0(j, s);
    return s;
}

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
