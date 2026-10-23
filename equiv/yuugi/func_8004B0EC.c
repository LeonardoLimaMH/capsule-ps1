#include "common.h"

#include "ghidra.h"
int func_8004B0EC(int param_1,int param_2)

{
    extern s32 * D_80078A34;
    extern s32 * D_80078A38;
    extern s32 * D_80078A3C;
    extern s32 * D_80078A40;
  uint uVar1;
  int iVar2;
  
  *D_80078A40 = *D_80078A40 | 0x8000000;
  *D_80078A3C = 0;
  *D_80078A34 = param_1 + param_2 * 4 + -4;
  *D_80078A38 = param_2;
  *D_80078A3C = 0x11000002;
  func_8004C168();
  uVar1 = *D_80078A3C;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = func_8004C19C();
    if (iVar2 != 0) break;
    uVar1 = *D_80078A3C;
  }
  return -1;
}
