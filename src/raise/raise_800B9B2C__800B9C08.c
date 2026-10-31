#include "common.h"

s32 func_800B9C08(void) {
    return 1;
}

#include "common.h"

s32 func_800B9C10(void)
{
  extern s16 D_800EFA4E[];
  int new_var;
  if ((*D_800EFA4E) != 0)
  {
    *D_800EFA4E = ((u16) (*D_800EFA4E)) - 1;
    return 0;
  }
  new_var = 1;
  if (new_var)
  {
    return new_var;
  }
}
