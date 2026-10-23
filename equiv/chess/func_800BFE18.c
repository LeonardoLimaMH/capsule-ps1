#include "common.h"

#include "ghidra.h"
void func_800BFE18(int param_1,int param_2)

{
    extern u16 D_8008EE50[];
    extern M2C_UNK D_80102018[];
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = param_1 + 0x5d0;
  bVar1 = *(byte *)(param_1 + 0xce2);
  pbVar4 = (byte *)(iVar3 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 + 0x18 +
                   (uint)*(byte *)(iVar3 + (uint)*(byte *)(param_1 + 0xbca) + 0x5fb) * 0x7c);
  bVar2 = *(byte *)(param_1 + 0xce3);
  if ((*D_8008EE50) == 0) {
    iVar3 = func_800DCF3C(pbVar4);
    if (iVar3 == 0) {
      return;
    }
    func_800DCE48();
    if (param_2 != 2) {
      func_80012628();
      return;
    }
  }
  else {
    if ((*D_8008EE50) != 1) {
      return;
    }
    func_800DCE78();
    if (param_2 == 1) {
      iVar3 = (*(code *)(D_80102018)[*pbVar4])
                        (param_1,iVar3,pbVar4,
                         iVar3 + (uint)bVar1 * 0x2e8 + 0x18 + (uint)bVar2 * 0x7c);
    }
    else {
      iVar3 = (*(code *)(D_80102018)[*pbVar4])(param_1,iVar3,pbVar4);
    }
    if (iVar3 == 0) {
      return;
    }
  }
  func_800125D8();
  return;
}
