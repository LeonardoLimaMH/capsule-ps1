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

s32 func_800D324C(s32 arg0, u32 arg1)
{
  extern s32 func_800B1260(s32);
  extern s32 func_800D341C(s32, s32, s32);
  register s32 r = 0xFF;
  u8 *p = (u8 *) (&D_80100F38[(u16) func_800B1260(arg0)]);
  switch (arg1)
  {
    case 0:
      if ((*((s16 *) (p + 0x332))) != 8)
    {
      r = func_800D341C(arg0, 1, 0);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 1:
      if (((*((s16 *) (p + 0x332))) != 8) && ((*((s16 *) (p + 0x334))) != 1))
    {
      if (p)
      {
        r = func_800D341C(arg0, 1, -1);
      }
      else
      {
        r = func_800D341C(arg0, 1, -1);
      }
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 2:
      if ((*((s16 *) (p + 0x334))) != 1)
    {
      r = func_800D341C(arg0, 0, -1);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 3:
      if (((*((s16 *) (p + 0x332))) != 1) && ((*((s16 *) (p + 0x334))) != 1))
    {
      r = func_800D341C(arg0, -1, -1);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 4:
      if ((*((s16 *) (p + 0x332))) != 1)
    {
      r = func_800D341C(arg0, -1, 0);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 5:
      if (((*((s16 *) (p + 0x332))) != 1) && ((*((s16 *) (p + 0x334))) != 8))
    {
      r = func_800D341C(arg0, -1, 1);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 6:
      if ((*((s16 *) (p + 0x334))) != 8)
    {
      r = func_800D341C(arg0, 0, 1);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

    case 7:
      if (((*((s16 *) (p + 0x332))) != 8) && ((*((s16 *) (p + 0x334))) != 8))
    {
      r = func_800D341C(arg0, 1, 1);
      if (((s16) r) < 0)
      {
        break;
      }
    }
      r = 0xFF;
      break;

  }

  return (s16) r;
}
