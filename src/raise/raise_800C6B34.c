#include "common.h"

typedef struct {
    u8 _p0[0x2BC];
    s32 f_2BC;
    u8 _p2C0[0x84];
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;
extern S_80100F38 D_80100F38[];
struct S_80091618;
extern struct S_80091618 D_80091618[];
extern u8 D_80063940[];
extern s16 D_800F0780[], D_800F0788[];
extern void func_80034AB0(s32), func_800C5670(s32);

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) (((u8 *)D_80100F38) + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0790[];
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

s32 func_800C6B34(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0790), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        P16(0x344) = 0;
        P32(0x798) &= ~0x20;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

struct S_80091618;
extern struct S_80091618 D_80091618[];
extern u8 D_80063940[];
extern s16 D_800F0780[], D_800F0788[];
extern void func_80034AB0(s32), func_800C5670(s32);

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) (((u8 *)D_80100F38) + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

s32 func_800C6C48(u8 *o, s32 a1)
{
  typedef struct {
    u16 f_0;
    u8 _p2[0x1A6];
  } S_91618_local;
  s32 k = func_800B1260(a1);
  u8 *new_var;
  S_80100F38 *p = &D_80100F38[(u16) k];
  S_91618_local *q;
  u8 *d;
  switch (p->f_344)
  {
    case 0:
      *((u16 *) (&p->f_344)) = 1;
      break;

    case 1:
      func_800CE4B8(a1, (s32) o, *D_800F0780, 1);
      *((u16 *) (&p->f_344)) = 2;

    case 2:
      if (func_80015E60((s32) o) == 1)
      {
        *((u16 *) (&p->f_344)) = 3;
        break;
      }
      q = (S_91618_local *)D_80091618;
      d = (new_var = D_80063940) + (q[(u16) k].f_0 * 60);
      if ((((*((u32 *) (d + 0x28))) >> 13) & 0x1F) == 1)
      {
        if ((*((u16 *) (o + 0x24))) != (*((s32 *) ((*((u8 **) ((*((u8 **) (o + 0x1C))) + 4))) + 4))))
        {
          break;
        }
        if ((*((s32 *) (o + 0x20))) != 0)
        {
          break;
        }
        func_80034AB0(0x79);
        func_800C5670(a1);
      }
      else
      {
        if ((*((u16 *) (o + 0x20))) != ((((*((u32 *) (d + 0x28))) >> 13) & 0x1F) - 2))
        {
          break;
        }
        if ((*((s16 *) (o + 0x24))) == 1)
        {
          func_800C5670(a1);
        }
        if (((*((u16 *) (o + 0x20))) == ((((*((u32 *) (d + 0x28))) >> 13) & 0x1F) - 2)) && ((*((s16 *) (o + 0x24))) == 0))
        {
          func_80034AB0(0x79);
        }
      }
      break;

    default:
      *((u16 *) (&p->f_344)) = 0;
      p->f_2BC += 1;
      break;
  }

  return p->f_2BC;
}

typedef struct S_80091618 {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618;
extern S_80091618 D_80091618[];
extern s16 D_800F0788[];
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);

extern s32 D_80103CE0[];
extern s32 func_800202A4(s32);
extern void func_800CB438(s32, s32, s32, s32);

typedef struct {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618_2;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);
s32 func_800C6E5C(u8 *o, s32 a1)
{
  s32 k = func_800B1260(a1);
  u8 *new_var;
  S_80100F38 *p = &D_80100F38[(u16) k];
  u8 *d;
  switch (p->f_344)
  {
    case 0:
      *((u16 *) (&p->f_344)) = 1;
      break;

    case 1:
      func_800CE4B8(a1, (s32) o, *D_800F0788, 1);
      *((u16 *) (&p->f_344)) = 2;

    case 2:
      if (func_80015E60((s32) o) == 1)
    {
      *((u16 *) (&p->f_344)) = 3;
      break;
    }
      d = (new_var = D_80063940) + (D_80091618[(u16) k].f_0 * 60);
      if ((((*((u32 *) (d + 0x28))) >> 18) & 0x1F) == 1)
    {
      if ((*((u16 *) (o + 0x24))) != (*((s32 *) ((*((u8 **) ((*((u8 **) (o + 0x1C))) + 4))) + 4))))
      {
        break;
      }
      if ((*((s32 *) (o + 0x20))) != 0)
      {
        break;
      }
      func_80034AB0(0x83);
      func_800C5670(a1);
    }
    else
    {
      if ((*((u16 *) (o + 0x20))) != ((((*((u32 *) (d + 0x28))) >> 18) & 0x1F) - 2))
      {
        break;
      }
      if ((*((s16 *) (o + 0x24))) == 1)
      {
        func_800C5670(a1);
      }
      if (((*((u16 *) (o + 0x20))) == ((((*((u32 *) (d + 0x28))) >> 18) & 0x1F) - 2)) && ((*((s16 *) (o + 0x24))) == 0))
      {
        func_80034AB0(0x83);
      }
    }
      break;

    default:
      *((u16 *) (&p->f_344)) = 0;
      p->f_2BC += 1;
      break;

  }

  return p->f_2BC;
}

struct S_80091618_2;
extern void func_80034AB0(s32), func_800C5670(s32);

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) (((u8 *)D_80100F38) + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

typedef struct S_80091618_3 {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618_3;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);

void func_800C7070(u8 *a0, s32 a1) {
    S_80100F38 *p = &D_80100F38[func_800B1260(a1) & 0xFFFF];
    if ((u32)(*(u16 *)((u8 *)p + 0x2BA) - 4) >= 2) {
        func_800C6C48(a0, a1);
    } else {
        func_800C6E5C(a0, a1);
    }
}

extern s32 func_800202A4(s32);
extern void func_800CB438(s32, s32, s32, s32);

struct S_80091618_3;
extern void func_80034AB0(s32), func_800C5670(s32);

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) (((u8 *)D_80100F38) + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

typedef struct S_80091618_4 {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618_4;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);

extern s32 func_800202A4(s32);
extern void func_800CB438(s32, s32, s32, s32);
s32 func_800C7104(s32 a0, s32 a1) {
    typedef struct {
        s32 unk0;
        s16 unk4;
        s16 unk6;
    } S_F0734;
    extern S_F0734 D_800F0734[];
    s32 k = func_800B1260(a1);
    S_80100F38 *p = &D_80100F38[(u16)k];

    switch (p->f_344) {
    case 0:
        p->f_344 = 1;
        break;
    case 1:
        D_80103CE0[1 - a1] = func_800202A4(2) ? 7 : 8;
        func_800CE4B8(a1, a0, D_800F0734[D_80103CE0[1 - a1]].unk4, 1);
        p->f_344 = 2;
    case 2:
        if (func_80015E60(a0) == 1) {
            p->f_344 = 3;
        } else {
            func_800CB438(*(s16 *)((u8 *)p + 0x372), a0, D_80091618[(u16)k].f_0, D_80103CE0[1 - a1] == 7 ? 0x57 : 0x58);
        }
        break;
    default:
        p->f_344 = 0;
        p->f_2BC += 1;
        break;
    }
    return p->f_2BC;
}

struct S_80091618_4;
extern void func_80034AB0(s32), func_800C5670(s32);

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) (((u8 *)D_80100F38) + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

typedef struct S_80091618_5 {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618_5;
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_80034AB0(s32), func_800C5670(s32);

extern s32 func_800202A4(s32);
extern void func_800CB438(s32, s32, s32, s32);

void func_800C72BC(s32 a0, s32 a1) {
    typedef struct {
        u8 _p0[0x6E0];
        s32 arr[1];
    } S_EEB9C;
    extern s32 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern u16 D_800F1A58[];
    extern void func_800C59F4(s32, s32, s32);
    extern void func_800CB2B4(s32, s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_800A7600(s32);
    extern void func_800E5C08(s32, s32);
    extern void func_800D4CC4(s32);

    S_80100F38 *q;
    u16 k;
    S_80100F38 *p;
    s32 arg1_val;
    s32 v;

    k = func_800B1260(a1);
    p = &D_80100F38[k];
    if ((u16)(*(u16 *)((u8 *)p + 0x2BA) - 4) < 2) {
        func_800C59F4(a1, 0, 8);
    }
    func_800CB2B4(a1, *(s16 *)((u8 *)p + 0x2BA));
    q = &D_80100F38[func_800B1260(a1) & 0xFFFF];
    arg1_val = D_800EE5D0[6] + ((S_EEB9C *)D_800EEB9C)->arr[*(s16 *)((u8 *)q + 0x2BA)];
    v = func_80019F30(D_800EE5D0[0] | 0x60000, arg1_val);
    *(s32 *)(*(u8 **)((u8 *)q + 0x230 + *(s16 *)((u8 *)q + 0x2BA) * 4) + 0x18) = v;
    *(u16 *)((u8 *)q + 0x37A) = 0;
    func_800A7600(k);
    func_800E5C08(k, *(u16 *)((u8 *)p + 0x2BA));
    D_800F1A58[k] = 0;
    func_800D4CC4(a1);
    p->f_2BC += 1;
}

s32 func_800C7428(s32 arg0, M2C_UNK arg1) {
    extern s16 D_800F0760[];
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + ((u8 *)D_80100F38);
    func_800D8E90(arg1);
    func_800B0A94(temp_s1, 1);
    func_800D1CC4(temp_s1, 4, 1, 0);
    func_800CE4B8(arg1, arg0, (*D_800F0760), 0);
    M2C_FIELD(temp_s0, s16 *, 0x364) = func_800B5034(arg1, temp_s1, 7);
    M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
    func_800E134C(0);
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
