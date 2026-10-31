#include "common.h"

/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

s32 func_800C3334(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_8008ED80[];
extern s32 func_800D06D4(s32, s32);
extern void func_800CE164(s32), func_800CE204(s32, s32);

s32 func_800C3448(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        break;
    case 1:
        P16(0x324) = P16(0x326);
        P16(0x326) = 7;
        P16(0x328) = func_800D06D4(PS16(0x324), 7);
        P16(0x344) = 2;
        break;
    case 2:
        if (((*D_8008ED80) & 3) == 3) {
            if (PS16(0x328) == 0) {
                P16(0x344) = 3;
            } else {
                func_800CE164(a1);
                func_800CE204(a1, a0);
            }
        }
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0740[];
extern s32 func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32);

s32 func_800C3580(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    switch (PS16(0x344)) {
    case 0:
        if (PS16(0x326) == 7) P16(0x344) = 1;
        else P16(0x344) = 3;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0740), 1);
        P16(0x344) = 2;
        break;
    case 2:
        if (func_80015E60(a0) == 1) P16(0x344) = 3;
        break;
    default:
        P16(0x344) = 0;
        P32(0x2BC) += 1;
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C3334", func_800C3694);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C3334", func_800C3F78);

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[];
extern s16 D_800F0768[];
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CB438(s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C439C(s32 a0, s32 a1)
{
  s32 k = func_800B1260(a1);
  u8 *p = D_80100F38 + (((u16) k) * 0x79C);
  u8 *new_var;
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      break;

    case 1:
      func_800CE4B8(a1, a0, *D_800F0768, 1);
      *((u16 *) (p + 0x344)) = 2;

    case 2:
      if (func_80015E60(a0) == 1)
    {
      *((u16 *) (p + 0x344)) = 3;
    }
    else
    {
      new_var = D_80091618;
      func_800CB438(*((s16 *) (p + 0x372)), a0, *((u16 *) (new_var + (((u16) k) * 0x1A8))), 0x56);
    }
      break;

    default:
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[];
extern s16 D_800F0770[];
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CB438(s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C44EC(s32 a0, s32 a1)
{
  s32 k = func_800B1260(a1);
  u8 *p = D_80100F38 + (((u16) k) * 0x79C);
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      break;

    case 1:
      func_800CE4B8(a1, a0, *D_800F0770, 1);
      *((u16 *) (p + 0x344)) = 2;

    case 2:
      if (func_80015E60(a0) == 1)
    {
      *((u16 *) (p + 0x344)) = 3;
    }
    else
    {
      if (!D_80091618)
      {
      }
      func_800CB438(*((s16 *) (p + 0x372)), a0, *((u16 *) (D_80091618 + (((u16) k) * 0x1A8))), 0x57);
    }
      break;

    default:
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[];
extern s16 D_800F0778[];
extern s32 func_800B1260(s32), func_80015E60(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800CB438(s32, s32, s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C463C(s32 a0, s32 a1)
{
  s32 k = func_800B1260(a1);
  u8 *p = D_80100F38 + (((u16) k) * 0x79C);
  u8 *new_var;
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      break;

    case 1:
      func_800CE4B8(a1, a0, *D_800F0778, 1);
      *((u16 *) (p + 0x344)) = 2;

    case 2:
      if (func_80015E60(a0) == 1)
    {
      *((u16 *) (p + 0x344)) = 3;
    }
    else
    {
      new_var = D_80091618;
      func_800CB438(*((s16 *) (p + 0x372)), a0, *((u16 *) (new_var + (((u16) k) * 0x1A8))), 0x58);
    }
      break;

    default:
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C3334", func_800C478C);
