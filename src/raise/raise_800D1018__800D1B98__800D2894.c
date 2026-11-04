#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;
extern S_80100F38 D_80100F38[];


typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

void func_800D2894(s32 unused, s32 player) {
    u32 offset = (player) * 0x79C;
    u32 base = (u32)D_80100F38;
    Record_800D2894 *record = (Record_800D2894 *)(base + offset);
    record->field--;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D28D0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D297C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2A10);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2AA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2B34);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2BB8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2D6C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2E90);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D2FB0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D30B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D324C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D341C);

s32 func_800D3940(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3948);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3BD8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3CB0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3DC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D3F88);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4258);

s32 func_800D43FC(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4404);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D46A4);

s32 func_800D4858(void) {
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4860);

void func_800D4B7C(s32 unused_arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_s0;

    temp_a1 = arg1 & 0xFFFF;
    temp_s0 = (temp_a1 * 0x79C) + (u8 *)D_80100F38;
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x180);
    if (temp_a0 != 0) {
        func_80013928(temp_a0, temp_a1);
        M2C_FIELD(temp_s0, s32 *, 0x180) = 0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4BE4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4CC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D4EC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D533C);

s32 func_800D5530(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5538);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5658);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D577C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5A94);

u8 *func_800D5C10(s32 idx) {
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x396) = 0;
    return rec;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5C44);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D5C80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D613C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D6848);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D68D4);

void func_800D6960(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = 0x38;
}
extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

s32 func_800D6978(s32 a0, s32 a1, s32 a2) {
    s16 b[4];
    u16 k = a0;
    u8 *p = (u8 *)D_80100F38 + k * 0x79C;
    func_800D0730(b, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    return func_800D6A2C(k, b[0], b[2], 3, (u8)a1, (u16)a2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D6A2C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D827C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8440);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8558);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D865C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8774);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D87E8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8A20);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8AF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8BF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8CCC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8E90);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D8FB0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D9030);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D926C);

#include "common.h"
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1DA4[];
extern u8 *D_800F1DA8[];
extern u8 *func_800D9030(void);

s32 func_800D9888(s32 a0, s32 a1)
{
  int new_var;
  u8 *p = (u8 *)D_80100F38 + ((func_800B1260(a1) & 0xFFFF) * 0x79C);
  new_var = ~1;
  if (a1 == 1)
  {
    u8 *o;
    *D_800F1DA4 = 0;
    o = func_800D9030();
    *D_800F1DA8 = o;
    *((s32 *) (o + 0x38)) &= new_var;
    *((s32 *) (o + 0x34)) |= 0x200;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* rand-u16: 0x8006AF90 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF90[];
extern s32 D_800EEB64[];
extern s32 func_800B1260(s32);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800D9930(s32 a0, s32 a1)
{
  s16 *new_var3;
  s16 *new_var2;
  s32 k = func_800B1260(a1);
  u8 *new_var;
  u8 *p = (u8 *)D_80100F38 + ((487 * ((u16) k)) * 4);
  if (a1 == 1)
  {
    *D_800EEB64 = a1;
    new_var3 = (s16 *) D_8006AF90;
    if (((s16 *) D_8006AF90)[10] == 0)
    {
      new_var2 = new_var3;
      func_800D1CC4(D_8006AF90[new_var2[0]], 0x26, 4, 1);
    }
  }
  new_var = D_80091618;
  *((u16 *) ((new_var + (((u16) k) * 0x1A8)) + 0x64)) = 0;
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

extern u8 D_80091618[];
extern s32 D_800EEB6C[];
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800D0CFC(s32);

s32 func_800D9A20(s32 a0, s32 a1)
{
  u8 *new_var;
  u16 k = func_800B1260(a1);
  u8 *p;
  new_var = D_80091618;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x66)) = 0;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x68)) = 0;
  p = (u8 *)D_80100F38 + (k * 0x79C);
  func_800D4B7C(a1, k);
  if (func_800D0CFC(a1) == 0)
  {
    func_800D1CC4(k, 0x1D, 0, 0);
    *D_800EEB6C = 1;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) (D_80100F38[func_800B12D8(a) & 0xFFFF].f_798.w)

s32 func_800D9B00(s32 a0, s32 a1)
{
  u8 *p = (u8 *) (&D_80100F38[func_800B1260(a1) & 0xFFFF]);
  S_80100F38 *new_var;
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      *((s32 *) (p + 0x798)) &= ~0x3000;
      break;

    case 1:
      func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(*((s16 *) (p + 0x326))), 0);
      *((u16 *) (p + 0x344)) = 2;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x1000;
      break;

    case 2:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) != 0)
    {
      *((u16 *) (p + 0x344)) = 3;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x2000;
    }
      break;

    default:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) == 2)
    {
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
    }
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.w)

s32 func_800D9CC8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0x300;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0x300) | 0x100;
        break;
    case 2:
        if (((Q798(a1) >> 8) & 3) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0x300) | 0x200;
        }
        break;
    default:
        if (((Q798(a1) >> 8) & 3) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800D9E94);

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.b)

s32 func_800DA154(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0xC0;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0xC0) | 0x40;
        break;
    case 2:
        if ((Q798(a1) >> 6) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0xC0) | 0x80;
        }
        break;
    default:
        if ((Q798(a1) >> 6) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA318);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA500);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA5FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA7C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DA9D0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DAC08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DAE14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB074);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB2C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB530);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DB798);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DBAA8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DBB3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894", func_800DBC98);
