#include "common.h"

#include "ghidra.h"
void func_800CA87C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_2c;
  
  iVar11 = 0;
  uStack_2c = 0x18;
  do {
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar2 = func_800A8E34(param_1 + 0x5d0,iVar11,iVar9);
      if (iVar2 == 0) {
        iVar8 = param_1 + 0x5d0 + uStack_2c + iVar10;
        iVar7 = 0;
        iVar2 = iVar8;
        if (*(char *)(iVar8 + 0x6a) != '\0') {
          do {
            cVar1 = *(char *)(iVar2 + 0x32) + -1;
            *(char *)(iVar2 + 0x32) = cVar1;
            if (cVar1 == '\0') {
              iVar4 = iVar8 + (uint)*(byte *)(iVar2 + 0x2e);
              *(char *)(iVar4 + 0xe) = *(char *)(iVar4 + 0xe) - *(char *)(iVar2 + 0x30);
              *(undefined2 *)(iVar2 + 0x30) = 0;
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + 6;
          } while (iVar7 < (int)(uint)*(byte *)(iVar8 + 0x6a));
        }
        uVar3 = (uint)*(byte *)(iVar8 + 0x6a);
        iVar7 = 0;
        iVar2 = iVar8;
        if (uVar3 != 0) {
          do {
            if (*(short *)(iVar2 + 0x30) == 0) {
              iVar4 = iVar7 + 1;
              if (iVar4 < (int)uVar3) {
                iVar6 = iVar4 * 6 + 0x2e;
                iVar5 = iVar4 * 6 + 0x28;
                do {
                  func_8001AA70(iVar8 + iVar5,iVar8 + iVar6,6);
                  iVar6 = iVar6 + 6;
                  iVar4 = iVar4 + 1;
                  iVar5 = iVar5 + 6;
                } while (iVar4 < (int)(uint)*(byte *)(iVar8 + 0x6a));
              }
              iVar2 = iVar2 + -6;
              iVar7 = iVar7 + -1;
              *(char *)(iVar8 + 0x6a) = *(char *)(iVar8 + 0x6a) + -1;
            }
            uVar3 = (uint)*(byte *)(iVar8 + 0x6a);
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + 6;
          } while (iVar7 < (int)uVar3);
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x7c;
    } while (iVar9 < 5);
    iVar11 = iVar11 + 1;
    uStack_2c = uStack_2c + 0x2e8;
  } while (iVar11 < 2);
  return;
}
