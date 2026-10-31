#include "common.h"
#include "yuugi.h"

#include "common.h"

s32 func_8001E160(u32 arg0)
{
  if (arg0 < 0xAU)
  {
    arg0 = arg0 + 0x30;
  }
  else
  {
    arg0 = arg0 + 0x37;
  }
  return arg0;
}
