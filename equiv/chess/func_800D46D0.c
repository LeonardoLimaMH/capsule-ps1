#include "common.h"

#include "ghidra.h"
void func_800D46D0(int param_1,uint param_2,int *param_3)

{
    extern s32 D_80118C18[];
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iStack_30;
  byte bStack_2c;
  byte bStack_2b;
  char cStack_2a;
  undefined1 uStack_29;
  byte bStack_28;
  byte abStack_27 [7];
  
  uVar8 = param_2 & 0xff;
  bStack_28 = *(byte *)(param_3 + 1);
  abStack_27[0] = *(byte *)((int)param_3 + 5);
  iVar9 = param_1 + (uVar8 >> 7) * 0x2a + (param_2 & 0x7f) * 7 + 9;
  cVar1 = func_800D3A2C(uVar8,*(undefined1 *)((int)param_3 + 6),&bStack_28,abStack_27);
  if (cVar1 == '\0') {
    uVar3 = *(uint *)((uint)abStack_27[0] * 4 + (uint)bStack_28 * 0x34 + (*D_80118C18));
    uVar2 = uVar3 >> 6 & 0x1fff;
    if ((((uVar2 != 0) && (uVar2 != 2)) && (uVar2 < 3)) && (1 < (uVar3 & 0x3f))) {
      bVar7 = *(byte *)((uint)bStack_28 * 0xd + param_1 + (uint)abStack_27[0] + 100);
      uVar2 = (uint)bVar7;
      if (((uVar2 == 0) ||
          (((uVar2 != uVar8 && ((uint)(bVar7 >> 7) == uVar8 >> 7)) && ((uVar2 & 0x7f) != 6)))) &&
         ((iVar6 = (uVar3 >> 0x13 & 7) -
                   (*(uint *)((uint)*(byte *)((int)param_3 + 5) * 4 +
                             (uint)*(byte *)(param_3 + 1) * 0x34 + (*D_80118C18)) >> 0x13
                   & 7), iVar6 * 0x1000000 < 1 ||
          (uVar8 = (uint)*(byte *)((int)param_3 + 7) + iVar6,
          *(char *)((int)param_3 + 7) = (char)uVar8, (uVar8 & 0xff) < (uint)*(byte *)(iVar9 + 5)))))
      {
        bVar5 = *(char *)((int)param_3 + 7) + 1;
        *(byte *)((int)param_3 + 7) = bVar5;
        pbVar4 = (byte *)(*param_3 + (uint)bStack_28 * 0xd + (uint)abStack_27[0]);
        bVar7 = *pbVar4;
        if (((bVar7 == 0) || (bVar5 < bVar7)) &&
           ((*pbVar4 = bVar5, uVar2 == 0 &&
            (bVar7 = 0, *(byte *)((int)param_3 + 7) < *(byte *)(iVar9 + 5))))) {
          do {
            iStack_30 = *param_3;
            bStack_2c = bStack_28;
            bStack_2b = abStack_27[0];
            uStack_29 = *(undefined1 *)((int)param_3 + 7);
            bVar5 = *(char *)((int)param_3 + 6) + bVar7 + 3;
            cStack_2a = bVar5 - (bVar5 & 0xfc);
            func_800D46D0(param_1,param_2 & 0xff,&iStack_30);
            bVar7 = bVar7 + 1;
          } while (bVar7 < 3);
        }
      }
    }
  }
  return;
}
