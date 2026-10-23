#include "common.h"

#include "ghidra.h"
undefined4 func_8001A1DC(undefined4 param_1,int param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    if (param_3[3] == 1) {
      func_80019D48(param_3[1],*param_3,param_3[2]);
    }
    else {
      func_800190F4(0xfe,param_3,0,0);
    }
    if (param_2 != 0) {
      func_800190F4(0xff,param_2,0,0);
    }
  }
  return 0;
}
