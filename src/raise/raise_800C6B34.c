#include "common.h"

typedef struct {
    u8 _p0[0x2BC];
    s32 f_2BC;
    u8 _p2C0[0x84];
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;
extern S_80100F38 D_80100F38[];


#include "common.h"

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C6C48);

#include "common.h"
typedef struct {
    u16 f_0;
    u8 _p2[0x1A6];
} S_80091618;
extern S_80091618 D_80091618[];
extern u8 D_80063940[];
extern s16 D_800F0788[];
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C7070);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C7104);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C6B34", func_800C72BC);

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
