#include "common.h"

#include "ghidra.h"
undefined1 func_800D3274(undefined1 param_1,byte *param_2,byte *param_3)

{
    extern s32 D_80118C18[];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_1) {
  case 0:
    *param_2 = *param_2 + 1;
    break;
  case 1:
    bVar1 = *param_2 + 1;
    goto L800D32D0;
  case 2:
    goto L800D32D4;
  case 3:
    bVar1 = *param_2 - 1;
L800D32D0:
    *param_2 = bVar1;
L800D32D4:
    bVar1 = *param_3 + 1;
L800D331C:
    *param_3 = bVar1;
    break;
  case 4:
    *param_2 = *param_2 - 1;
    break;
  case 5:
    bVar1 = *param_2 - 1;
    goto L800D330C;
  case 6:
    goto L800D3310;
  case 7:
    bVar1 = *param_2 + 1;
L800D330C:
    *param_2 = bVar1;
L800D3310:
    bVar1 = *param_3 - 1;
    goto L800D331C;
  default:
    goto L800D338C;
  }
  if (*param_2 < 0xd) {
    if (*param_3 < 0xd) {
      uVar3 = *(uint *)((uint)*param_3 * 4 + (uint)*param_2 * 0x34 + (*D_80118C18));
      uVar2 = uVar3 >> 6 & 0x1fff;
      if (uVar2 != 0) {
        if (uVar2 < 3) {
          return (uVar3 & 0x3f) < 2;
        }
        return true;
      }
    }
L800D338C:
  }
  return 2;
}
