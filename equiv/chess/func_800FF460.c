#include "common.h"

#include "ghidra.h"
void func_800FF460(int param_1,int param_2,int param_3,int param_4,undefined2 *param_5)

{
    extern s32 D_80118C18[];
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_3 - param_4;
  bVar1 = *(byte *)(param_1 + 0x16);
  uVar3 = *(undefined4 *)
           ((uint)bVar1 * 4 + (uint)*(byte *)(param_1 + 0x15) * 0x34 + (*D_80118C18));
  bVar2 = *(byte *)(param_2 + 0x16);
  uVar4 = *(undefined4 *)
           ((uint)bVar2 * 4 + (uint)*(byte *)(param_2 + 0x15) * 0x34 + (*D_80118C18));
  *param_5 = (short)((((int)(((uint)*(byte *)(param_1 + 0x15) * 100 + -0x226) * 0x10000) >> 0x10) *
                      iVar5 + ((int)(((uint)*(byte *)(param_2 + 0x15) * 100 + -0x226) * 0x10000) >>
                              0x10) * param_4) / param_3);
  param_5[1] = (short)(((short)(((ushort)((uint)uVar3 >> 0x13) & 7) * -0x32) * iVar5 +
                       (short)(((ushort)((uint)uVar4 >> 0x13) & 7) * -0x32) * param_4) / param_3);
  param_5[2] = (short)(((short)(((ushort)bVar1 * 0x10 + (ushort)bVar1 * 8) * 4 + (ushort)bVar1 * 4 +
                               -0x226) * iVar5 +
                       (short)(((ushort)bVar2 * 0x10 + (ushort)bVar2 * 8) * 4 + (ushort)bVar2 * 4 +
                              -0x226) * param_4) / param_3);
  return;
}
