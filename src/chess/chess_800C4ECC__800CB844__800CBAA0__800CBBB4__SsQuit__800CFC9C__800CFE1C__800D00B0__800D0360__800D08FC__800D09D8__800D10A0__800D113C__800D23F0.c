#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


s16 func_800D23F0(u32 arg0, u32 arg1, u32 arg2)
{
  extern u16 D_800859F4[];
  s32 v = (((((s32) (arg1 & 0xFF)) - ((s32) (arg2 & 0xFF))) + 0x28) / 2) + 10;
  u32 m;
  s32 r;
  arg0 &= 0xFF;
  if (((D_800859F4[0] & 0x7000) >> 12) == 0)
  {
    if (arg0 == 0)
    {
      v = v + (v / 5);
    }
    else
    {
      v = v - (v / 5);
    }
  }
  else
    if (((D_800859F4[0] & 0x7000) >> 12) == 2)
  {
    if (arg0 == 1)
    {
      v = v + (v / 5);
    }
    else
    {
      v = v - (v / 5);
    }
  }
  r = 1;
  if (v > 0)
  {
    r = 0xFF;
    if (v < 0x100)
    {
      r = v;
    }
  }
  return r;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

