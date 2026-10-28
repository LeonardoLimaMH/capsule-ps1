#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800B74BC ((s32 (*)())0x800B74BC)
#define func_800B75C4 ((s32 (*)())0x800B75C4)
void func_800B698C(int param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;

  uVar11 = (uint)*(byte *)(param_2 + 0x11);
  bVar1 = *(byte *)(param_2 + 0x15);
  bVar2 = *(byte *)(param_2 + 0x16);
  iVar9 = 0;
  iVar12 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 9) * 0x34);
  do {
    iVar5 = (uint)bVar1 * 0x34 + iVar12;
    uVar3 = *(uint *)((uint)bVar2 * 4 + iVar5);
    iVar7 = 0;
    *(undefined1 *)(param_1 + 0x706) = 0;
    uVar10 = uVar3 >> 0x13 & 7;
    uVar3 = (uint)bVar1;
    uVar8 = (uint)bVar2;
    if (uVar11 != 0) {
      do {
        if (iVar9 == 1) {
          uVar8 = uVar8 + 1;
        }
        else if (iVar9 < 2) {
          if (iVar9 == 0) {
            iVar5 = iVar5 + -0x34;
            uVar3 = uVar3 - 1;
          }
        }
        else if (iVar9 == 2) {
          iVar5 = iVar5 + 0x34;
          uVar3 = uVar3 + 1;
        }
        else if (iVar9 == 3) {
          uVar8 = uVar8 - 1;
        }
        iVar4 = func_800B74BC(param_1 + 0x6e0,iVar12,uVar8,uVar3,param_3,0);
        if (iVar4 == 0) break;
        uVar6 = *(uint *)(uVar8 * 4 + iVar5) >> 0x13 & 7;
        iVar4 = uVar6 - uVar10;
        if ((0 < iVar4) && (iVar7 = iVar7 + iVar4, (int)uVar11 <= iVar7)) break;
        iVar4 = func_800B75C4(param_1 + 0x6e0,uVar8,uVar3,iVar7,1);
        iVar7 = iVar7 + 1;
        if (iVar4 != 0) {
          return;
        }
        uVar10 = uVar6;
      } while (iVar7 < (int)uVar11);
    }
    iVar9 = iVar9 + 1;
    if (3 < iVar9) {
      return;
    }
  } while( true );
}
