#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800B74BC ((s32 (*)())0x800B74BC)
#define func_800B75C4 ((s32 (*)())0x800B75C4)
void func_800B5DA0(int param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;

  uVar12 = (uint)*(byte *)(param_2 + 0x11);
  bVar1 = *(byte *)(param_2 + 0x15);
  iVar10 = 0;
  bVar2 = *(byte *)(param_2 + 0x16);
  iVar3 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 9) * 0x34);
  do {
    iVar6 = (uint)bVar1 * 0x34 + iVar3;
    uVar4 = *(uint *)((uint)bVar2 * 4 + iVar6);
    iVar8 = 0;
    *(undefined1 *)(param_1 + 0x706) = 0;
    uVar11 = uVar4 >> 0x13 & 7;
    uVar4 = (uint)bVar1;
    uVar9 = (uint)bVar2;
    if (uVar12 != 0) {
      do {
        if (iVar10 == 1) {
          uVar9 = uVar9 + 1;
        }
        else if (iVar10 < 2) {
          if (iVar10 == 0) {
            iVar6 = iVar6 + -0x34;
            uVar4 = uVar4 - 1;
          }
        }
        else if (iVar10 == 2) {
          iVar6 = iVar6 + 0x34;
          uVar4 = uVar4 + 1;
        }
        else if (iVar10 == 3) {
          uVar9 = uVar9 - 1;
        }
        iVar5 = func_800B74BC(param_1 + 0x6e0,iVar3,uVar9,uVar4,param_3,1);
        if (iVar5 == 0) break;
        uVar7 = *(uint *)(uVar9 * 4 + iVar6) >> 0x13 & 7;
        iVar5 = uVar7 - uVar11;
        if ((0 < iVar5) && (iVar8 = iVar8 + iVar5, (int)uVar12 <= iVar8)) break;
        iVar5 = func_800B75C4(param_1 + 0x6e0,uVar9,uVar4,iVar8,1);
        iVar8 = iVar8 + 1;
        if (iVar5 != 0) {
          return;
        }
        uVar11 = uVar7;
      } while (iVar8 < (int)uVar12);
    }
    iVar10 = iVar10 + 1;
    if (3 < iVar10) {
      return;
    }
  } while( true );
}
