#include "common.h"
#include "yuugi.h"

#include "common.h"

void AddPrim(s32 *arg0, s32 *arg1)
{
  s32 new_var2;
  int new_var;
  new_var2 = *arg0;
  new_var = new_var2;
  *arg1 = ((*arg1) & 0xFF000000) | (new_var & (new_var2 = 0xFFFFFF));
  *arg0 = ((*arg0) & 0xFF000000) | (((s32) arg1) & new_var2);
}
