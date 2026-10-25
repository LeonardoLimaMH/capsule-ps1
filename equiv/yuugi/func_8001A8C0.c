#include "common.h"

#include "ghidra.h"
byte * func_8001A8C0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar5 = uVar5 >> 1;
    while( true ) {
      if ((uVar5 & 0x100) == 0) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = bVar1 | 0xff00;
      }
      bVar1 = *param_1;
      uVar4 = (uint)bVar1;
      if ((uVar5 & 1) == 0) break;
      if ((bVar1 & 0x80) == 0) {
        pbVar3 = param_1 + 1;
        param_1 = param_1 + 2;
        iVar2 = (bVar1 >> 2) + 2;
        uVar4 = (uint)*pbVar3 | (uVar4 & 3) << 8;
L8001A944:
        do {
          iVar2 = iVar2 + -1;
          *param_2 = param_2[-uVar4];
          param_2 = param_2 + 1;
        } while (-1 < iVar2);
        uVar5 = uVar5 >> 1;
      }
      else {
        param_1 = param_1 + 1;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = (uVar4 & 0xf) + 1;
          iVar2 = (bVar1 >> 4) - 7;
          goto L8001A944;
        }
        iVar2 = uVar4 - 0xb9;
        pbVar3 = param_2;
        if (uVar4 == 0xff) {
          return param_2;
        }
        do {
          bVar1 = *param_1;
          param_1 = param_1 + 1;
          param_2 = pbVar3 + 1;
          iVar2 = iVar2 + -1;
          *pbVar3 = bVar1;
          pbVar3 = param_2;
        } while (-1 < iVar2);
        uVar5 = uVar5 >> 1;
      }
    }
    *param_2 = bVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while( true );
}
