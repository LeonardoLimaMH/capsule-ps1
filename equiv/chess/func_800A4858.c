#include "common.h"

#include "ghidra.h"
bool func_800A4858(undefined4 param_1,int param_2,int param_3,short *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2 * 100 + -600 <= (int)*param_4) &&
     (bVar1 = false, (int)*param_4 <= (param_2 + 1) * 100 + -600)) {
    if ((int)param_4[2] < param_3 * 100 + -600) {
      bVar1 = false;
    }
    else {
      bVar1 = (int)param_4[2] <= (param_3 + 1) * 100 + -600;
    }
  }
  return bVar1;
}
