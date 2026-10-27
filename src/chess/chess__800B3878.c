#include "common.h"
#include "ghidra.h"

void func_800B3878(void *arg0)
{
  extern M2C_UNK D_80069AD4[];
  s32 temp_v0;
  s32 var_a1;
  void *var_a0;
  var_a0 = arg0;
  *((s8 *) (((s8 *) var_a0) + 0x7A4)) = 0x10;
  var_a1 = 0;
  arg0 = D_80069AD4;
  do
  {
    temp_v0 = *((s32 *) (((s8 *) arg0) + 0x44));
    arg0 += 4;
    var_a1 += 1;
    *((s32 *) (((s8 *) var_a0) + 0x77C)) = temp_v0;
    var_a0 += 4;
  }
  while (var_a1 < 3);
}
