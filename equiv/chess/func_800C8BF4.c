#include "common.h"

#include "ghidra.h"
void func_800C8BF4(int param_1)

{
    extern M2C_UNK D_801010B0[];
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1 + 0x5d0;
  iVar10 = 0;
  if (*(char *)(param_1 + 0xd48) != '\0') {
    iVar5 = 0x730;
    pbVar4 = (byte *)(param_1 + 0xd00);
    do {
      bVar1 = pbVar4[3];
      pbVar4[3] = bVar1 - 1;
      if ((byte)(bVar1 - 1) == 0) {
        if (pbVar4[2] == 1) {
          func_800C87C0(param_1,iVar9,pbVar4);
        }
        else if (pbVar4[2] == 2) {
          iVar6 = *(int *)((*D_801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
          pbVar4[2] = 0;
          puVar3 = (uint *)((uint)pbVar4[1] * 4 + (uint)*pbVar4 * 0x34 + iVar6);
          *puVar3 = *puVar3 & 0xfff8003f | (*(ushort *)(pbVar4 + 6) & 0x1fff) << 6;
          func_80013928(*(undefined4 *)(pbVar4 + 8));
        }
      }
      iVar5 = iVar5 + 0xc;
      iVar10 = iVar10 + 1;
      pbVar4 = (byte *)(iVar9 + iVar5);
    } while (iVar10 < (int)(uint)*(byte *)(param_1 + 0xd48));
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xd48);
  iVar10 = 0;
  if (uVar2 != 0) {
    iVar5 = 0x730;
    do {
      if (*(char *)(iVar9 + iVar5 + 2) == '\0') {
        iVar6 = iVar10 + 1;
        if (iVar6 < (int)uVar2) {
          iVar8 = iVar6 * 0xc + 0x730;
          iVar7 = iVar6 * 0xc + 0x724;
          do {
            func_8001AA70(iVar9 + iVar7,iVar9 + iVar8,0xc);
            iVar8 = iVar8 + 0xc;
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0xd48));
        }
        iVar5 = iVar5 + -0xc;
        iVar10 = iVar10 + -1;
        *(char *)(param_1 + 0xd48) = *(char *)(param_1 + 0xd48) + -1;
      }
      uVar2 = (uint)*(byte *)(param_1 + 0xd48);
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar10 < (int)uVar2);
  }
  return;
}
