#include "common.h"

#include "ghidra.h"
undefined4 func_800D34D4(int param_1,undefined1 *param_2,byte param_3,byte param_4)

{
    extern s32 D_80118C18[];
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  
  if ((byte)param_2[10] < 4) {
    do {
      bVar1 = param_2[10];
      bVar7 = param_3;
      if (bVar1 == 1) {
        bVar8 = param_4 + 1;
      }
      else {
        bVar8 = param_4;
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            bVar7 = param_3 - 1;
          }
          else {
            bVar8 = 0;
            bVar7 = 0;
          }
        }
        else if (bVar1 == 2) {
          bVar7 = param_3 + 1;
        }
        else if (bVar1 == 3) {
          bVar8 = param_4 - 1;
        }
        else {
          bVar8 = 0;
          bVar7 = 0;
        }
      }
      uVar5 = (uint)bVar7;
      uVar6 = (uint)bVar8;
      if ((uVar5 < 0xd) && (uVar6 < 0xd)) {
        bVar1 = *(byte *)(uVar5 * 0xd + param_1 + uVar6 + 100);
        uVar5 = *(uint *)(uVar6 * 4 + uVar5 * 0x34 + (*D_80118C18)) >> 0x13 & 7;
        uVar6 = *(uint *)((uint)param_4 * 4 + (uint)param_3 * 0x34 + (*D_80118C18)) >>
                0x13 & 7;
        iVar4 = uVar5 - uVar6;
        if (iVar4 < 0) {
          iVar4 = uVar6 - uVar5;
        }
        if (((iVar4 < 3) && (bVar1 != 0)) && (bVar1 >> 7 != *(byte *)(param_1 + 8))) {
          uVar2 = *(undefined1 *)(param_1 + 9);
          param_2[3] = bVar8 + bVar7 * '\r';
          param_2[1] = 2;
          param_2[2] = param_4 + param_3 * '\r';
          *param_2 = uVar2;
          param_2[4] = param_2[4] + '\x01';
          param_2[10] = param_2[10] + '\x01';
          return 1;
        }
      }
      cVar3 = param_2[10];
      param_2[10] = cVar3 + 1U;
    } while ((byte)(cVar3 + 1U) < 4);
  }
  return 0;
}
