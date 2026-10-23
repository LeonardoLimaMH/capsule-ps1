#include "common.h"

#include "ghidra.h"
byte func_800D3F7C(int param_1,uint param_2,int param_3,char param_4)

{
    extern M2C_UNK D_80085428[];
    extern s32 D_80118C18[];
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte bStack_28;
  byte abStack_27 [7];
  
  uVar4 = (param_2 & 0xff) >> 7;
  pbVar8 = (byte *)(param_1 + uVar4 * 0x2a + (param_2 & 0x7f) * 7 + 9);
  bVar7 = 0;
  uVar6 = 0;
  bVar1 = *(byte *)(uVar4 + 0x80085a06);
  uVar4 = 0;
  do {
    bStack_28 = *pbVar8;
    abStack_27[0] = pbVar8[1];
    iVar2 = func_800D3274(uVar4,&bStack_28,abStack_27);
    if (iVar2 == 0) {
      uVar4 = (uint)abStack_27[0];
      iVar2 = (uint)bStack_28 * 0xd;
      if (*(char *)(iVar2 + param_1 + uVar4 + 100) == '\0') {
        uVar5 = *(uint *)(uVar4 * 4 + (uint)bStack_28 * 0x34 + (*D_80118C18));
        if ((((uVar5 >> 6 & 0x1fff) != 2) && (1 < (uVar5 & 0x3f))) &&
           ((uVar5 >> 0x16 & 3) == (uint)bVar1)) {
          uVar5 = (uint)bVar7;
          if (param_4 == '\0') {
            uVar5 = iVar2 + uVar4;
            cVar3 = '\x01';
          }
          else {
            cVar3 = abStack_27[0] + (char)iVar2;
          }
          *(char *)(param_3 + uVar5) = cVar3;
          bVar7 = bVar7 + 1;
        }
      }
    }
    uVar6 = uVar6 + 1;
    uVar4 = uVar6 & 0xff;
  } while ((int)uVar6 < 8);
  return bVar7;
}
