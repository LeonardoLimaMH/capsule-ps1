#include "common.h"

#include "ghidra.h"
undefined4 func_800C64C8(undefined4 param_1,undefined4 param_2,char *param_3)

{
    extern u16 D_8008EE54[];
  if ((*D_8008EE54) == 0) {
    param_3[0x17] = -0x79;
    param_3[0x23] = '\x01';
    func_80012668();
    if (*param_3 != '&') {
      return 0;
    }
    func_800374E8(0x800a);
  }
  else {
    if ((*D_8008EE54) != 1) {
      return 0;
    }
    if (-1 < *(short *)(*(int *)(param_3 + 0x70) + 0x24)) {
      return 0;
    }
  }
  return 1;
}
