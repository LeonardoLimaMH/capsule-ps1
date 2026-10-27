#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
int func_800AFEA4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;

  iVar1 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  if (-1 < param_4) {
    if (param_5 < 0) {
      return 0;
    }
    if ((param_4 < 0xd) && (param_5 < 0xd)) {
      return (*(uint *)(param_5 * 4 + param_4 * 0x34 + iVar1) >> 0x13 & 7) -
             ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                              (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar1) >> 0x13 & 7) +
                   (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                             (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar1) >> 0x13 & 7)) >> 1);
    }
  }
  return 0;
}
