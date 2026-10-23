#include "common.h"
#include "yuugi.h"

s32 SpuGetReverb(void)
{
  extern void *D_80071598[];
  int new_var2;
  void *new_var;
  new_var = *D_80071598;
  return (new_var2 = (*((u16 *) (((s8 *) new_var) + 0x1AA))) & 0x80) != 0;
}
