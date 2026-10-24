#include "common.h"

#include "ghidra.h"
int ReadTMD(int param_1)

{
    extern s32 D_800965C4;
    extern s32 D_800965C8;
    extern s32 D_800965CC;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = func_8004CDD4(D_800965CC,param_1);
  iVar2 = D_800965C8;
  iVar1 = D_800965C4;
  iVar5 = 0;
  if (-1 < iVar3) {
    puVar4 = (undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + D_800965C8);
    *(int *)(param_1 + 0x60) = D_800965C4;
    *(int *)(param_1 + 100) = iVar2;
    *(undefined2 *)(param_1 + 0x40) = *puVar4;
    *(undefined2 *)(param_1 + 0x42) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x44) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x4a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x4c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x52) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x54) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2 + 4);
    D_800965CC = D_800965CC + iVar3;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x5a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x5c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x22) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x24) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x2a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x2c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x32) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x34) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x3a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x3c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1 + 4);
    iVar5 = param_1;
  }
  return iVar5;
}
