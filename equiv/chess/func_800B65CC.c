#include "common.h"

#include "ghidra.h"
void func_800B65CC(int param_1,int param_2,undefined1 param_3)

{
    extern u8 D_801010B0[];
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;

  iVar9 = 0;
  bVar1 = *(byte *)(param_2 + 0x15);
  bVar2 = *(byte *)(param_2 + 0x16);
  uVar10 = *(undefined4 *)(D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  do {
    iVar6 = 0;
    *(undefined1 *)(param_1 + 0x706) = 0;
    uVar5 = (uint)bVar1;
    uVar4 = (uint)bVar2;
    iVar7 = iVar9;
    iVar8 = iVar6;
    do {
      switch(iVar7) {
      case 0:
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 - 2;
        break;
      case 1:
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 2;
        break;
      case 2:
        uVar4 = uVar4 + 2;
      case 8:
      case 9:
switchD_800b6674_caseD_8:
        uVar5 = uVar5 - 1;
        break;
      case 3:
        uVar4 = uVar4 + 2;
      case 0xc:
      case 0xd:
switchD_800b6674_caseD_c:
        uVar5 = uVar5 + 1;
        break;
      case 4:
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 2;
        break;
      case 5:
        uVar4 = uVar4 - 1;
        uVar5 = uVar5 + 2;
        break;
      case 6:
        uVar4 = uVar4 - 2;
        goto switchD_800b6674_caseD_c;
      case 7:
        uVar4 = uVar4 - 2;
        goto switchD_800b6674_caseD_8;
      case 10:
      case 0xb:
        uVar4 = uVar4 + 1;
        break;
      case 0xe:
      case 0xf:
        uVar4 = uVar4 - 1;
      }
      if (iVar8 == 0) {
        iVar6 = iVar6 + 3;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      iVar3 = func_800B74BC(param_1 + 0x6e0,uVar10,uVar4,uVar5,param_3,0);
      if ((iVar3 != 0) && (iVar3 = func_800B75C4(param_1 + 0x6e0,uVar4,uVar5,iVar6,0), iVar3 != 0))
      {
        return;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 8;
    } while (iVar8 < 2);
    iVar9 = iVar9 + 1;
    if (7 < iVar9) {
      return;
    }
  } while( true );
}
