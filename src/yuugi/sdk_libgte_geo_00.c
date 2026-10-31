#include "common.h"
#include "yuugi.h"

s32 rsin(s32 arg0)
{
  if (arg0 >= 0)
  {
    return sin_1(arg0 & 0xFFF);
  }
  if (arg0)
  {
    return -sin_1((-arg0) & 0xFFF);
  }
  else
  {
    return -sin_1((-arg0) & 0xFFF);
  }
}

#include "common.h"

extern s16 D_800733FC[];
extern s16 D_800723FC[];

s32 sin_1(s32 a)
{
  if (a <= 0x800)
  {
    if (a <= 0x400)
    {
      return D_800733FC[a];
    }
    return D_800733FC[0x800 - a];
  }
  if (a > 0xC00)
  {
    return -D_800733FC[0x1000 - a];
  }
  if (D_800733FC)
  {
    return -D_800723FC[a];
  }
  else
  {
    return -D_800723FC[a];
  }
}
