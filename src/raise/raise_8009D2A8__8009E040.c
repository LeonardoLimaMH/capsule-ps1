#include "common.h"

void func_8009E040(void) {

}

void func_8009E048(void) {
    func_8009E23C();
}

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
/* rand-mem: 0x800EFF74 4 8 */
extern u8 D_80091618[], D_800EFF58[], D_800EC084[];
extern u16 D_8006AF80[];
extern s32 func_800A8CD0(s32, void *);
extern void func_800BAD64(s32);
extern s32 func_800E1B30(void);

s32 func_8009E068(void)
{
  s32 v;
  u8 (*new_var)[];
  new_var = &D_80091618;
  *((u16 *) (((*new_var) + ((*D_8006AF80) * 0x1A8)) + 0x10)) = ((struct 
  {
    u8 _p[0x1C];
    u16 v;
  } *) D_800EFF58)->v;
  v = func_800A8CD0(6, D_800EC084 + (((struct 
  {
    u8 _p[0x1C];
    s32 v;
  } *) D_800EFF58)->v * 12));
  *((u16 *) (((*new_var) + ((*D_8006AF80) * 0x1A8)) + 0x92)) = v;
  func_800BAD64(2);
  return func_800E1B30();
}

extern s16 D_800ED880[];
extern void func_800E2AA0(s32, s32, s32);
s32 func_8009E12C(void)
{
  if (*D_800ED880 > 0)
  {
    if (*D_800ED880 == 8)
    {
      u8 (*new_var)[];
      new_var = &D_80091618;
      func_800E2AA0(*((u16 *) (((*new_var) + (*D_8006AF80) * 0x1A8) + 0x10)), 1, 0);
    }
    *D_800ED880 = *D_800ED880 - 1;
    return 0;
  }
  *D_800ED880 = 0x10;
  return 1;
}

s32 func_8009E1C4(void) {
    extern s16 D_800ED88C[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    s32 temp_v0;

    temp_v0 = func_8009DFAC();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800BCF98(1);
        (*D_800F0550) = (*D_800F0578);
    }
    return temp_v0;
}

void func_8009E21C(void) {
    func_8009DFAC();
}

s32 func_8009E23C(void) {
    extern u8 D_80103EDC[];
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern s16 D_800ED87A[];
    extern void func_800D1598(void *);
    extern void func_80034AB0(s32);
    extern void func_8009DC78(s32);
    extern void func_800BAD64(s32);
    extern void func_8009E3A8(s32);
    extern void func_8009E508(s32);

    typedef struct {
        u8 pad0[0x88];
        s32 unk88;
        u8 pad8C[0x1C];
        s32 unkA8;
        s32 padAC;
        s32 unkB0;
    } Work_8ED68;

    typedef struct {
        u8 pad0[8];
        s32 unk8;
        u8 padC[0x10];
        u16 unk1C;
    } Work_EFF58;

    Work_8ED68 *s0 = (Work_8ED68 *)D_8008ED68;
    Work_EFF58 *s1;
    s32 flags;
    u8 (*new_var)[];

    func_800D1598(D_80103EDC);
    s1 = (Work_EFF58 *)D_800EFF58;
    if (s1->unk8 == 1 && *D_800ED87A != s1->unk8) {
        flags = s0->unk88;
        if (flags & 0x20) {
            func_80034AB0(0x48);
            new_var = &D_80091618;
            *((u16 *) (((*new_var) + ((*D_8006AF80) * 0x1A8)) + 0x10)) = s1->unk1C;
            func_8009DC78(0);
            return -1;
        }
        if (flags & 0x40) {
            func_80034AB0(0x5D);
            func_8009DC78(0);
            func_800BAD64(2);
            return -2;
        }
        if (flags & 0x8000) {
            func_8009E3A8(1);
        } else if (s0->unkB0 != 0) {
            func_8009E508(1);
        }
        if (*D_8008EDF0 & 0x2000) {
            func_8009E3A8(0);
            return 0;
        }
        if (s0->unkA8 != 0) {
            func_8009E508(0);
        }
    }
    return 0;
}

void func_8009E3A8(s32 a0) {
    extern s16 D_800ED878[];
    extern s16 D_800ED87A[];
    extern s16 D_800ED87C[];
    extern s16 D_800ED87E[];
    extern void func_800BB310(s32, s32);
    extern void func_80034AB0(s32);
    typedef struct {
        u8 _p[0x1C];
        s32 v;
    } Work;
    s32 mode = a0;
    s32 i;

    switch (mode) {
    case 0:
        *D_800ED878 = 1;
        *D_800ED87A = 1;
        *D_800ED87C = 12;
        *D_800ED87E = 8;
        ((Work *)D_800EFF58)->v = (((Work *)D_800EFF58)->v + 1) % 7;
        for (i = 0; i < 7; i++) {
            func_800BB310(i, 0);
        }
        break;
    case 1:
        *D_800ED878 = -1;
        *D_800ED87A = mode;
        *D_800ED87C = 12;
        *D_800ED87E = 8;
        ((Work *)D_800EFF58)->v = (((Work *)D_800EFF58)->v + 6) % 7;
        for (i = 0; i < 7; i++) {
            func_800BB310(-i, 0);
        }
        break;
    }
    func_80034AB0(0x84);
}

void func_8009E508(s32 a)
{
  extern s16 D_800EEA78[];
  extern s32 D_8008ED68[];
  s32 *d = D_8008ED68;
  s32 v = d[D_800EEA78[a] + 0x29];
  if (v != 7 && (v & 7) == 7)
  {
    func_8009E3A8(a);
  }
}

void func_8009E568(void) {
    extern s16 D_800ED88C[];
    func_800BBF9C();
    (*D_800ED88C) = 0;
    func_800BBC28(1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E598);

void func_8009E72C(void) {
    func_8009F3D4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009E74C);

void func_8009ED34(void) {
    func_8009ED54();
}

s32 func_8009ED54(void)
{
  typedef struct {
    u8 pad[0x84];
    s32 f84;
    s32 f88;
  } T_ED54;
  T_ED54 *d = (T_ED54 *) D_800EFF58;
  if (d->f88 > 0)
  {
    d->f88 = d->f88 - 1;
    func_800BBC40(d->f84);
    return 0;
  }
  d->f84 = 0;
  return -1;
}

typedef struct {
    u8 pad0[0x38];
    u32 unk38;
} Obj_9EDA0;

typedef struct {
    u8 pad0[0x114];
    s32 unk114;
    u8 pad118[0x120 - 0x118];
    Obj_9EDA0 *unk120[14];
    u8 pad158[0x21C - 0x158];
    s32 unk21C[14];
    s32 unk254[14];
    s32 unk28C;
} Work_9EDA0;

static inline s32 step_9EDA0(Work_9EDA0 *w, s32 n, s32 s0, s32 *cnt, s32 check0) {
    w->unk114 = n;
    if (n == s0) {
        *cnt = 0;
        return 1;
    }
    (*cnt)++;
    if (!((w->unk120[n]->unk38 >> 6) & 1)) {
        if (w->unk21C[n] != -1) {
            w->unk28C = w->unk254[n];
        }
        return 1;
    }
    if (check0 && n == 0) {
        w->unk114 = s0;
        return 2;
    }
    return 0;
}
INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009EDA0);

s32 func_8009F00C(s32 arg0) {
    typedef struct {
        u8 _p00[0x38];
        u32 unk38;
    } Obj_EFF58;

    typedef struct {
        u8 _p000[0x114];
        s32 unk114;
        u8 _p118[0x21C - 0x118];
        s32 unk21C[14];
        s32 unk254[14];
        s32 unk28C;
        u8 _p290[0x2A0 - 0x290];
        Obj_EFF58 *unk2A0[14][3];
    } Work_8009F00C;

    s32 var_s1 = -1;
    s32 var_a0;

    func_800A0014(2, 0, 0);
    switch (arg0) {
    case 2:
        if (((Work_8009F00C *)D_800EFF58)->unk21C[((Work_8009F00C *)D_800EFF58)->unk114] != -1) {
            var_s1 = ((Work_8009F00C *)D_800EFF58)->unk28C;
            do {
                if (((Work_8009F00C *)D_800EFF58)->unk28C < ((Work_8009F00C *)D_800EFF58)->unk21C[((Work_8009F00C *)D_800EFF58)->unk114] - 1) {
                    var_a0 = ((Work_8009F00C *)D_800EFF58)->unk28C + 1;
                } else {
                    var_a0 = 0;
                }
                ((Work_8009F00C *)D_800EFF58)->unk28C = var_a0;
            } while ((((Work_8009F00C *)D_800EFF58)->unk2A0[((Work_8009F00C *)D_800EFF58)->unk114][var_a0]->unk38 >> 6) & 1);
        }
        break;
    case 3:
        if (((Work_8009F00C *)D_800EFF58)->unk21C[((Work_8009F00C *)D_800EFF58)->unk114] != -1) {
            var_s1 = ((Work_8009F00C *)D_800EFF58)->unk28C;
            do {
                if (((Work_8009F00C *)D_800EFF58)->unk28C > 0) {
                    var_a0 = ((Work_8009F00C *)D_800EFF58)->unk28C - 1;
                } else {
                    var_a0 = ((Work_8009F00C *)D_800EFF58)->unk21C[((Work_8009F00C *)D_800EFF58)->unk114] - 1;
                }
                ((Work_8009F00C *)D_800EFF58)->unk28C = var_a0;
            } while ((((Work_8009F00C *)D_800EFF58)->unk2A0[((Work_8009F00C *)D_800EFF58)->unk114][var_a0]->unk38 >> 6) & 1);
        }
        break;
    }
    func_800A0014(1, 0, 0);
    if (var_s1 != ((Work_8009F00C *)D_800EFF58)->unk28C) {
        func_80034AB0(0x84);
    }
    return 1;
}

void func_8009F1C4(s32 arg0) {
    struct S100F38 {
        u8 pad0[0x336];
        s16 unk336;
        s16 unk338;
        u8 pad33A[0x79C - 0x33A];
    };
    struct S91618 {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x1A8 - 0x12];
    };
    extern u16 D_8006AF80[];
    extern s16 D_80078C22[];
    extern u8 D_80091618[];
    extern u8 D_80100F38[];

    switch (arg0) {
    case 0: {
        u8 *base = D_80100F38;
        struct S100F38 *p = (struct S100F38 *)((*D_8006AF80) * 0x79C + base);
        if (*D_80078C22 + 1 < p->unk338) {
            p->unk338--;
        }
        break;
    }
    case 1: {
        u8 *base = D_80100F38;
        struct S100F38 *p = (struct S100F38 *)((*D_8006AF80) * 0x79C + base);
        if (p->unk338 < 8) {
            p->unk338++;
        }
        break;
    }
    case 2: {
        u8 *base = D_80100F38;
        struct S100F38 *p = (struct S100F38 *)((*D_8006AF80) * 0x79C + base);
        if (*D_80078C22 + 1 < p->unk336) {
            p->unk336--;
        }
        break;
    }
    case 3: {
        u8 *base = D_80100F38;
        struct S100F38 *p = (struct S100F38 *)((*D_8006AF80) * 0x79C + base);
        if (p->unk336 < 8) {
            p->unk336++;
        }
        break;
    }
    }
    {
        u8 *base = D_80100F38;
        u16 idx = *D_8006AF80;
        u8 *base2 = D_80091618;
        struct S100F38 *p = (struct S100F38 *)(idx * 0x79C + base);
        struct S91618 *q = (struct S91618 *)(idx * 0x1A8 + base2);
        func_800A99AC(p->unk336 - 1, p->unk338 - 1, q->unk10);
    }
    func_80034AB0(0x84);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_8009F3D4);

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
extern u8 D_800EFF58[], D_80091618[];
extern void func_800A0540(s32), func_800A04F4(void), func_800A0780(s32);
extern s32 func_800A0618(s32);

s32 func_800A0014(s32 a0, s32 a1, s32 a2)
{
  u8 *f = D_800EFF58;
  s32 n = *((s32 *) (f + 0x114));
  u8 *new_var;
  s32 m;
  s32 k;
  if (a2 != 0)
  {
    m = *((s32 *) (f + 0x32C));
    if (n < m)
    {
      k = 0;
    }
    else
      if ((*((s32 *) (f + 0x330))) < n)
    {
      k = 1;
    }
    else
    {
      new_var = D_80091618;
      if ((*((u16 *) ((new_var + ((*D_8006AF80) * 0x1A8)) + 0x10))) != 0)
      {
        goto done;
      }
      if (m != 1)
      {
        goto done;
      }
      k = -1;
    }
    func_800A0540(k);
  }
  func_800A04F4();
  done:
  func_800A0780(a0);

  return func_800A0618(a0);
}

extern s16 D_80078C22[];
extern u8 D_80091618[], D_800EF364[], D_80100F38[];
extern s32 func_800A9658(s32);
s32 func_800A00E4(void)
{
  s16 i;
  s32 cnt;

  cnt = func_800A9658(*D_80078C22);
  for (i = 0; i < (s16) cnt;) {
    s32 d = *D_80078C22 + 1;
    register s16 q asm("a0") = i / d;
    register s16 r asm("a1") = i % d;
    s32 q1 = q + 1;
    s32 r1;
    u8 (*e)[] = &D_80091618;
    register u8 *base asm("a2") = D_800EF364;
    register u8 (*pp)[] asm("v1");
    u8 *p;
    register u8 *ptr asm("v1");
    base += *(u16 *) (*e + *D_8006AF80 * 0x1A8 + 0x10) * 64;
    pp = (u8 (*)[] )&D_80100F38;
    p = *pp + *D_8006AF80 * 0x79C;
    ptr = (u8 *)((s32)(*(s16 *) (p + 0x336) - q1) * 8 + (u32)base);
    r1 = r + 1;
    if (ptr[*(s16 *) (p + 0x338) - r1] == 0xFF) {
      return 0;
    }
    i++;
  }
  return 1;
}

void func_800A0214(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009E040", func_800A021C);

void func_800A0424(void)
{
    struct Ent {
        u8 _0[0x12];
        u16 f12;
        u8 _14[0x1A8 - 0x14];
    };
    extern s32 D_800EE5F0[];
    extern u8 D_800EFF58[];
    extern u8 D_80091618[];
    extern u16 D_8006AF80[];

    s32 *f = D_800EE5F0;
    u8 *w = D_800EFF58;
    struct Ent *arr = (struct Ent *)D_80091618;
    s32 t = f[3] + *(s32 *)(w + 0x318) + 3;
    u16 val = arr[*D_8006AF80].f12;
    s32 r = func_80019F30(D_800EE5F0[0] | 0x60000, t - val);
    *(s32 *)(*(s32 *)(w + 0x314) + 0x18) = r;
}

void func_800A04B8(void) {
    func_80025CEC(1, 7, 7, 1);
    func_80025E54(1, 7, 7);
}
