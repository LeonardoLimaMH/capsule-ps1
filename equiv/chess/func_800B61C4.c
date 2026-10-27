#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800B74BC ((s32 (*)())0x800B74BC)
#define func_800B75C4 ((s32 (*)())0x800B75C4)
#define func_800B7630 ((s32 (*)())0x800B7630)
void func_800B61C4(int param_1,int param_2,uint param_3)

{
  u8 cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;

  uVar6 = (uint)*(byte *)(param_2 + 0x15);
  uVar7 = (uint)*(byte *)(param_2 + 0x16);
  uVar12 = (uint)*(byte *)(param_2 + 0x11);
  iVar13 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  cVar1 = func_800B7630(param_1,param_3,uVar6,uVar7);
  iVar10 = 0;
  if (cVar1 == '\0') {
    do {
      iVar4 = uVar6 * 0x34 + iVar13;
      uVar2 = *(uint *)(uVar7 * 4 + iVar4);
      iVar9 = 0;
      *(undefined1 *)(param_1 + 0x706) = 0;
      uVar11 = uVar2 >> 0x13 & 7;
      uVar2 = uVar6;
      uVar8 = uVar7;
      if (uVar12 != 0) {
        do {
          if (iVar10 == 1) {
            uVar8 = uVar8 + 1;
LAB_800b62e8:
            iVar4 = iVar4 + 0x34;
            uVar2 = uVar2 + 1;
          }
          else if (iVar10 < 2) {
            if (iVar10 == 0) {
              uVar8 = uVar8 + 1;
LAB_800b62f8:
              iVar4 = iVar4 + -0x34;
              uVar2 = uVar2 - 1;
            }
          }
          else {
            if (iVar10 == 2) {
              uVar8 = uVar8 - 1;
              goto LAB_800b62e8;
            }
            if (iVar10 == 3) {
              uVar8 = uVar8 - 1;
              goto LAB_800b62f8;
            }
          }
          iVar3 = func_800B74BC(param_1 + 0x6e0,iVar13,uVar8,uVar2,param_3 & 0xff,0);
          if (iVar3 == 0) break;
          uVar5 = *(uint *)(uVar8 * 4 + iVar4) >> 0x13 & 7;
          iVar3 = uVar5 - uVar11;
          if ((0 < iVar3) && (iVar9 = iVar9 + iVar3, (int)uVar12 <= iVar9)) break;
          iVar3 = func_800B75C4(param_1 + 0x6e0,uVar8,uVar2,iVar9,1);
          iVar9 = iVar9 + 1;
          if (iVar3 != 0) {
            return;
          }
          uVar11 = uVar5;
        } while (iVar9 < (int)uVar12);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
  }
  return;
}
