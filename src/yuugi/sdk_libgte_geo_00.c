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

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_geo_00", sin_1);
