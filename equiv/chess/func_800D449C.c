#include "common.h"

#include "ghidra.h"
byte func_800D449C(int param_1,uint param_2,int param_3,char param_4)

{
    extern s32 D_80118C18[];
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  uint uStack_34;
  int iStack_30;
  
  bVar13 = 0;
  iVar11 = 0;
  uVar3 = (param_2 & 0xff) >> 7;
  pbVar4 = (byte *)(param_1 + uVar3 * 0x2a + (param_2 & 0x7f) * 7 + 9);
  bStack_36 = *pbVar4;
  iVar14 = 0;
  bStack_35 = pbVar4[1];
  uStack_34 = (uint)pbVar4[5];
  do {
    if (iVar11 == 1) {
      return bVar13;
    }
    bVar2 = uStack_34 < 4;
    bStack_38 = bStack_36;
    iVar12 = 0;
    bStack_37 = bStack_35;
    iVar9 = 0;
    while (iStack_30 = param_1,
          iVar11 = func_800D3A2C(param_2 & 0xff,iVar14 + iVar9 & 0xff,&bStack_38,&bStack_37),
          param_1 = iStack_30, iVar11 == 0) {
      uVar10 = (uint)bStack_37;
      iVar9 = (uint)bStack_38 * 0xd;
      uVar8 = *(uint *)(uVar10 * 4 + (uint)bStack_38 * 0x34 + (*D_80118C18));
      uVar7 = uVar8 >> 6 & 0x1fff;
      if ((((uVar7 == 0) || (uVar7 == 2)) || (2 < uVar7)) || ((uVar8 & 0x3f) < 2)) break;
      bVar1 = *(byte *)(iVar9 + iStack_30 + uVar10 + 100);
      if ((bVar1 != 0) && ((bVar1 >> 7 != uVar3 || ((bVar1 & 0x7f) == 6)))) break;
      if (param_4 == '\0') {
        if (iVar12 == 0) {
          pcVar5 = (char *)(param_3 + iVar9 + uVar10);
          cVar6 = '\x03';
        }
        else {
          pcVar5 = (char *)(param_3 + iVar9 + uVar10);
          cVar6 = '\x04';
        }
      }
      else {
        pcVar5 = (char *)(param_3 + (uint)bVar13);
        cVar6 = bStack_37 + (char)iVar9;
      }
      *pcVar5 = cVar6;
      bVar13 = bVar13 + 1;
      if (((iVar12 == 1) || (bVar2)) || (bVar1 != 0)) break;
      iVar12 = iVar12 + 1;
      iVar9 = iVar12 * 8;
      if (1 < iVar12) break;
    }
    iVar14 = iVar14 + 1;
    if (7 < iVar14) {
      return bVar13;
    }
  } while( true );
}
