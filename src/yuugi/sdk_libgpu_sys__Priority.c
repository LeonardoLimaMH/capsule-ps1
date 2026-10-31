#include "common.h"
#include "yuugi.h"

void SetPriority(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    M2C_FIELD(arg0, s8 *, 3) = 2;
    var_v1 = 0xE6000000;
    if (arg1 != 0) {
        var_v1 = 0xE6000002;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_v1 | (arg2 != 0));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

#include "common.h"

void SetDrawStp(void *arg0, s32 arg1)
{
  void *new_var;
  *((s8 *) (((s8 *) arg0) + 3)) = 2;
  new_var = arg0;
  if (arg1 != 0)
  {
    arg1 = 0xE6000001;
  }
  else
  {
    arg1 = 0xE6000000;
  }
  *((s32 *) (((s8 *) new_var) + 4)) = arg1;
  *((s32 *) (((s8 *) new_var) + 8)) = 0;
}
