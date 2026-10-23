#include "common.h"

#include "ghidra.h"
undefined4 func_800B74BC(int param_1,int param_2,uint param_3,uint param_4,byte param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_3 < 0xd) && (-1 < (int)param_4)) && ((int)param_4 < 0xd)) {
    uVar4 = *(uint *)(param_3 * 4 + param_4 * 0x34 + param_2);
    uVar2 = uVar4 >> 6 & 0x1fff;
    if (((uVar2 != 0) && (uVar2 < 3)) && (1 < (uVar4 & 0x3f))) {
      if ((uVar2 == 2) && (param_6 == 0)) {
        return 0;
      }
      iVar3 = param_3 * 4 + param_4 * 0x34 + param_2;
      if (*(char *)(iVar3 + 3) == '\0') {
        return 1;
      }
      if (*(byte *)(param_1 + 2) == param_4) {
        if (*(byte *)(param_1 + 3) != param_3) {
          return 0;
        }
        bVar1 = *(byte *)(iVar3 + 3);
        if (bVar1 >> 7 == param_5) {
          if ((bVar1 & 0x7f) != 6) {
            return 1;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}
