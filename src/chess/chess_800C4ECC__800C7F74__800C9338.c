#include "common.h"

int func_800C9338(s32 arg0, u8 *arg1)
{
  u8 *p;
  s32 r;
  if (arg1[1] >= 5)
  {
    if (arg1[0] != 0)
    {
      return 1;
    }
    arg1[0] = 1;
    arg1[1] = 0;
  }
  if (func_800A8E34(arg0, arg1[0], arg1[1]) != 0)
  {
    r = 0;
  }
  else
  {
    p = (u8 *) (arg0 + (arg1[1] * 0x7C + arg1[0] * 0x2E8));
    r = *(u8 *) (arg0 + p[0x2D] * 13 + p[0x2E] + 0x630) == 2;
  }
  return r;
}
