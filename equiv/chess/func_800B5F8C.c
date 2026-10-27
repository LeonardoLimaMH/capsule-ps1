#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800B74BC ((s32 (*)())0x800B74BC)
#define func_800B75C4 ((s32 (*)())0x800B75C4)
#define func_800B7630 ((s32 (*)())0x800B7630)
void func_800B5F8C(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  u8 cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar9 = param_1 + 0x6e0;
  uVar5 = (uint)*(byte *)(param_2 + 0x15);
  bVar1 = *(byte *)(param_2 + 0x16);
  bVar2 = *(byte *)(param_2 + 0x11);
  iVar12 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  cVar3 = func_800B7630(param_1,param_3,uVar5,(uint)bVar1);
  iVar10 = 0;
  if (cVar3 == '\0') {
    do {
      iVar11 = 0;
      *(undefined1 *)(param_1 + 0x706) = 0;
      if (bVar2 != 0) {
        iVar8 = uVar5 * 0x34 + iVar12;
        uVar6 = uVar5;
        uVar7 = (uint)bVar1;
        do {
          if (iVar10 == 1) {
            uVar7 = uVar7 + 1;
LAB_800b6098:
            iVar8 = iVar8 + 0x34;
            uVar6 = uVar6 + 1;
          }
          else if (iVar10 < 2) {
            if (iVar10 == 0) {
              uVar7 = uVar7 + 1;
LAB_800b60a8:
              iVar8 = iVar8 + -0x34;
              uVar6 = uVar6 - 1;
            }
          }
          else {
            if (iVar10 == 2) {
              uVar7 = uVar7 - 1;
              goto LAB_800b6098;
            }
            if (iVar10 == 3) {
              uVar7 = uVar7 - 1;
              goto LAB_800b60a8;
            }
          }
          iVar4 = func_800B74BC(iVar9,iVar12,uVar7,uVar6,param_3 & 0xff,1);
          if (iVar4 == 0) break;
          if ((*(uint *)(uVar7 * 4 + iVar8) >> 6 & 0x1fff) == 2) {
            if ((*(byte *)(param_1 + 0x6e2) == uVar6) && (*(byte *)(param_1 + 0x6e3) == uVar7))
            break;
            *(u8 *)(iVar9 + (uint)*(byte *)(param_1 + 0x706) * 2 + 8) = (u8)uVar6;
            *(u8 *)(iVar9 + (uint)*(byte *)(param_1 + 0x706) * 2 + 9) = (u8)uVar7;
            *(u8 *)(param_1 + 0x706) = *(u8 *)(param_1 + 0x706) + '\x01';
          }
          else {
            iVar4 = func_800B75C4(iVar9,uVar7,uVar6,iVar11,1);
            if (iVar4 != 0) {
              return;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)bVar2);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
  }
  return;
}
