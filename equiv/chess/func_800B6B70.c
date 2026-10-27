#include "common.h"

#include "ghidra.h"
void func_800B6B70(int param_1,int param_2,undefined1 param_3)

{
    extern u8 D_801010B0[];
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  bVar1 = *(byte *)(param_2 + 0x11);
  bVar2 = *(byte *)(param_2 + 0x15);
  iVar9 = 0;
  bVar3 = *(byte *)(param_2 + 0x16);
  iVar10 = *(int *)(D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  do {
    iVar8 = 0;
    *(undefined1 *)(param_1 + 0x706) = 0;
    if (bVar1 != 0) {
      iVar7 = (uint)bVar2 * 0x34 + iVar10;
      uVar5 = (uint)bVar2;
      uVar6 = (uint)bVar3;
      do {
        if (iVar9 == 1) {
          uVar6 = uVar6 + 1;
        }
        else if (iVar9 < 2) {
          if (iVar9 == 0) {
            iVar7 = iVar7 + -0x34;
            uVar5 = uVar5 - 1;
          }
        }
        else if (iVar9 == 2) {
          iVar7 = iVar7 + 0x34;
          uVar5 = uVar5 + 1;
        }
        else if (iVar9 == 3) {
          uVar6 = uVar6 - 1;
        }
        iVar4 = func_800B74BC(param_1 + 0x6e0,iVar10,uVar6,uVar5,param_3,1);
        if (iVar4 == 0) break;
        if (((iVar8 != 0) && ((*(uint *)(uVar6 * 4 + iVar7) >> 6 & 0x1fff) != 2)) &&
           (iVar4 = func_800B75C4(param_1 + 0x6e0,uVar6,uVar5,iVar8,1), iVar4 != 0)) {
          return;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)bVar1);
    }
    iVar9 = iVar9 + 1;
    if (3 < iVar9) {
      return;
    }
  } while( true );
}
