#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009ECF8(void *arg0)
{
  s32 var_a1;
  void *var_v1;
  s8 *new_var;
  *((s8 *) (((s8 *) arg0) + 0x624)) = 7;
  var_a1 = 0;
  var_v1 = arg0;
  do
  {
    new_var = var_v1;
    var_a1 += 1;
    *((s32 *) (((s8 *) var_v1) + 0x77C)) = (s32) (*((s32 *) (((s8 *) new_var) + 0x798)));
    var_v1 += 4;
  }
  while (var_a1 < 3);
  new_var = ((s8 *) arg0) + ((short) 0x62A);
  *((s8 *) new_var) = 1;
}
