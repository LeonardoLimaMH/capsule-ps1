#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A0448(u8 *arg0)
{
  extern s32 D_80065310[];
  s32 i = arg0[0xBCA];
  register u8 *p asm("a2") = arg0 + i;
  register u32 t asm("v1") = p[0x5E4];
  u32 u;
  s32 off;
  if (t != 0xFF)
  {
    u = t;
    if (u >= 8U)
    {
      off = 0;
    }
    else
    {
      off = (i * 0x980) - 0x5580;
    }
    *((s32 *) (arg0 + 0x14)) = (*((s32 *) (D_80065310[u] + off))) + off;
    return 1;
  }
  return 0;
}
