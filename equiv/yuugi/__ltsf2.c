#include "common.h"

#include "ghidra.h"
undefined4 __ltsf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != param_2) && (((param_1 & 0x7fffffff) != 0 || ((param_2 & 0x7fffffff) != 0)))) {
    uVar3 = param_1 & 0x80000000;
    if (uVar3 != (param_2 & 0x80000000)) {
      if (uVar3 != 0) {
        return 0xffffffff;
      }
      return 0;
    }
    uVar2 = (int)param_1 >> 0x17 & 0xff;
    uVar1 = (int)param_2 >> 0x17 & 0xff;
    if ((uVar2 < uVar1) ||
       ((uVar2 == uVar1 && ((param_1 & 0x7fffff | 0x800000) < (param_2 & 0x7fffff | 0x800000))))) {
      if (uVar3 != 0) {
        return 0;
      }
      return 0xffffffff;
    }
    if ((int)param_1 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}
