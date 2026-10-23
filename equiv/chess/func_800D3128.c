#include "common.h"

#include "ghidra.h"
undefined1 func_800D3128(undefined4 param_1,int param_2,uint *param_3,int *param_4)

{
    extern s32 D_80118C18[];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1) {
  case 0:
    goto L800D31D8;
  case 1:
    uVar1 = *param_3 - param_2;
    goto L800D31D4;
  case 2:
    *param_3 = *param_3 - param_2;
    goto L800D31E8;
  case 3:
    *param_3 = *param_3 - param_2;
    param_2 = *param_4 + param_2;
    break;
  case 4:
    param_2 = *param_4 + param_2;
    break;
  case 5:
    *param_3 = *param_3 + param_2;
    param_2 = *param_4 + param_2;
    break;
  case 6:
    *param_3 = *param_3 + param_2;
    goto L800D31E8;
  case 7:
    uVar1 = *param_3 + param_2;
L800D31D4:
    *param_3 = uVar1;
L800D31D8:
    param_2 = *param_4 - param_2;
    break;
  default:
    goto L800D31E8;
  }
  *param_4 = param_2;
L800D31E8:
  if (*param_3 < 0xd) {
    iVar2 = *param_4;
    if ((-1 < iVar2) && (iVar2 < 0xd)) {
      uVar3 = *(uint *)(iVar2 * 4 + *param_3 * 0x34 + (*D_80118C18));
      uVar1 = uVar3 >> 6 & 0x1fff;
      if (uVar1 == 0) {
        return 2;
      }
      if (1 < (uVar3 & 0x3f)) {
        return 2 < uVar1;
      }
    }
  }
  return 2;
}
