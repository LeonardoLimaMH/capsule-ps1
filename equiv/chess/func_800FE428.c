#include "common.h"

#include "ghidra.h"
void func_800FE428(int param_1,int param_2)

{
    extern s32 D_80118C18[];
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x16);
  iVar4 = ((int)(((uint)*(byte *)(param_1 + 0x15) * 100 + -0x226) * 0x10000) >> 0x10) -
          ((int)(((uint)*(byte *)(param_2 + 0x15) * 100 + -0x226) * 0x10000) >> 0x10);
  iVar2 = (int)(short)(((ushort)((uint)*(undefined4 *)
                                        ((uint)bVar1 * 4 +
                                        (uint)*(byte *)(param_1 + 0x15) * 0x34 +
                                        (*D_80118C18)) >> 0x13) & 7) * -0x32) -
          ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                           (uint)*(byte *)(param_2 + 0x15) * 0x34 + (*D_80118C18)) >>
                  0x13 & 7) * -0x320000) >> 0x10);
  iVar3 = (int)(short)(((ushort)bVar1 * 0x10 + (ushort)bVar1 * 8) * 4 + (ushort)bVar1 * 4 + -0x226)
          - ((int)(((uint)*(byte *)(param_2 + 0x16) * 100 + -0x226) * 0x10000) >> 0x10);
  SquareRoot0(iVar4 * iVar4 + iVar2 * iVar2 + iVar3 * iVar3);
  return;
}
