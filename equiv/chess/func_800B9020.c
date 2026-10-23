#include "common.h"

#include "ghidra.h"
int func_800B9020(undefined4 param_1,int param_2,int param_3)

{
    extern M2C_UNK D_80100FA8[];
    extern M2C_UNK D_801010B0[];
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = param_2 + param_3 * 2;
  pcVar4 = D_80100FA8;
  while( true ) {
    uVar1 = (uint)*(byte *)(iVar2 + 0x601) + (int)*pcVar4;
    iVar3 = (uint)*(byte *)(iVar2 + 0x602) + (int)pcVar4[1];
    if ((((uVar1 < 0xd) && (-1 < iVar3)) && (iVar3 < 0xd)) &&
       ((1 < (*(uint *)(iVar3 * 4 +
                       uVar1 * 0x34 + *(int *)((*D_801010B0) + (uint)*(byte *)(param_2 + 9) * 0x34)) &
             0x3f) && (*(char *)(uVar1 * 0xd + param_2 + iVar3 + 0x630) == '\x02')))) break;
    iVar5 = iVar5 + 1;
    pcVar4 = pcVar4 + 2;
    if (3 < iVar5) {
      return iVar5;
    }
  }
  *(char *)(iVar2 + 0x601) = (char)uVar1;
  *(char *)(iVar2 + 0x602) = (char)iVar3;
  return iVar5;
}
