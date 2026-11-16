#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

s32 func_800DC750(s32 arg0)
{
  extern u8 D_80118C18[];
  extern u8 D_80119660[];
  extern u8 D_8011970A[];
  u32 s1;
  char new_var3;
  u8 *base;
  unsigned int new_var2;
  s32 s0;
  s32 a0;
  u8 *p;
  int new_var;
  new_var2 = 1;
  base = D_80118C18;
  s1 = arg0 & 0xFF;
  s0 = (5 - base[(s1 >> 7) + 0x3A0]) & 0xFF;
  new_var = 0xFF;
  new_var3 = s0;
  if (new_var3 != 0)
  {
    if (func_800202A4(0x64) < ((new_var3 * 10) * 2))
    {
      a0 = func_800D7328(s1, D_80119660) & new_var;
      if (a0 != 0)
      {
        register s0 = func_800202A4(a0);
        func_800D90C0(s1);
        p = D_80119660 + (s0 & new_var);
        *((u16 *) (base + 0x5B4)) += 0x12C;
        D_8011970A[0] = (*p) / 13;
        *(D_8011970A + new_var2) = (*p) % 13;
        return new_var2;
      }
    }
  }
  return 0;
}

