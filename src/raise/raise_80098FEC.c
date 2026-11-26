#include "common.h"

void func_80098FEC(u8 *o, s32 a1, s32 a2)
{
  typedef struct 
  {
    u8 pad[0xC];
    u32 unkC;
    u8 pad2[0x2C];
  } Entry60;
  extern M2C_UNK D_80091618[];
  extern Entry60 D_80063940[];
  extern u8 D_8006B1D4[];
  extern void func_80034AB0(s32);
  struct T3
  {
    s32 v[3];
  };
  extern struct T3 D_80097804;
  register u8 *s4;
  struct T3 t;
  u8 *base = (u8 *) D_80091618;
  u16 c;
  s32 i;
  s32 arg;
  u32 off;
  c = *((u16 *) (base + (((u16) a2) * 0x1A8)));
  t = D_80097804;
  switch (c)
  {
    case 19:
      t.v[0] = 6;
      break;

    case 25:
      t.v[0] = 3;
      break;

    case 28:
      t.v[0] = 8;
      break;

    case 33:
      t.v[0] = 3;
      break;

    case 36:
      t.v[0] = 8;
      break;

    case 54:
      t.v[0] = 0xD;
      break;

    case 58:
      if (c || o)
    {
      t.v[0] = 3;
      t.v[1] = 6;
      break;
    }
    else
    {
      t.v[0] = 3;
      t.v[1] = 6;
      break;
    }

    case 64:
      t.v[0] = 1;
      break;

    case 78:
      t.v[0] = 0xB;
      break;

    case 81:
      t.v[0] = 8;
      break;

    case 83:
      t.v[0] = 8;
      break;

    case 92:
      t.v[0] = 3;
      t.v[1] = 7;
      t.v[2] = 0xB;
      break;

    case 94:
      t.v[0] = 0xD;
      break;

    case 101:
      t.v[0] = 0xA;
      break;

    default:
      return;

  }

  i = 0;
  s4 = D_8006B1D4;
  for (; i < 3; i++)
  {
    if (t.v[i] == (-1))
    {
      return;
    }
    if (((*((u16 *) (o + 0x20))) == (t.v[i] - 2)) && ((*((s16 *) (o + 0x24))) == 0))
    {
      arg = 0x8A;
      if (c != 0x5C)
      {
        off = (D_80063940[c].unkC >> 3) & 6;
        off += (u32) s4;
        arg = *((u16 *) (off + 0x12));
      }
      func_80034AB0(arg);
    }
  }

}
