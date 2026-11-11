#include "common.h"

void func_800A3814(u8 *arg0)
{
  extern u8 D_800859F8[];
  extern u16 D_8008EE44[];
  extern u16 D_800B2C9C[];
  extern u16 D_800B2CB0[];
  extern u16 D_800B2CB4[];
  extern u16 D_800B2CC8[];
  extern u16 D_800B2CCC[];
  extern u16 D_800B2CE4[];
  extern s16 D_800B3B40[];
  u8 *p = D_800859F8;
  short i = p[9];
  s32 a1;
  s32 f;
  s16 v;
  if ((*D_8008EE44) != 0x12)
  {
    *((s32 *) (arg0 + 0x38)) |= 1;
  }
  else
  {
    *((s32 *) (arg0 + 0x38)) &= ~1;
    a1 = 0x4B;
    if (p[0xA] == 0)
    {
      a1 = p[0x11] + 0x4C;
    }
    *((s32 *) (arg0 + 0x18)) = func_80019F30(0x60010, a1);
    if ((*D_800B3B40) != 0)
    {
      if (i == 0xA)
      {
        if ((p[0xA] == 0) && (p[0x11] == 1))
        {
          *((s16 *) (arg0 + 0x46)) = (*D_800B2CC8) - 0x20;
        }
        else
        {
          *((s16 *) (arg0 + 0x46)) = D_800B2CB4[i] - 8;
        }
      }
      else
      {
        *((s16 *) (arg0 + 0x46)) = D_800B2CB4[i] + 0x20;
      }
      f = (*((s32 *) (arg0 + 0x30))) & (~0x1C0);
      v = D_800B2CE4[i];
      *((s32 *) (arg0 + 0x30)) = f | 0x40;
      *((s16 *) (arg0 + 0x4A)) = v - 0x20;
    }
    else
    {
      if (i == 0xA)
      {
        *((s16 *) (arg0 + 0x46)) = (*D_800B2CB0) - 8;
      }
      else
      {
        *((s16 *) (arg0 + 0x46)) = D_800B2C9C[i] - 0x30;
      }
      *((s16 *) (arg0 + 0x4A)) = D_800B2CCC[i] + 0x10;
      *((s32 *) (arg0 + 0x30)) &= ~0x1C0;
    }
  }
}

extern u8 D_80085428[];
extern u16 D_8008EE44[];

extern u8 D_8008ED68[];
extern void (*D_800B2E5C[])(void);
