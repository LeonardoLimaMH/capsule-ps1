#include "common.h"

#include "ghidra.h"
void func_800AFACC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_1 + 0x5d0;
  uVar5 = 0;
  iVar8 = 0x18;
  iVar7 = 0;
  do {
    iVar2 = 0;
    if ((param_2 == 0) || ((*(byte *)(param_1 + 0xbe1) & 6) >> 1 == uVar5)) {
      iVar3 = iVar6 + iVar8;
      iVar4 = iVar7;
      do {
        if ((param_2 != 0) ||
           ((iVar1 = func_800A8E34(iVar6,uVar5,iVar2), iVar1 == 0 &&
            (*(char *)(iVar3 + 0x28) == '\0')))) {
          *(undefined1 *)(iVar6 + iVar4 + 0x3e) = 3;
          func_8009C4B0(param_1,uVar5,iVar2);
        }
        iVar4 = iVar4 + 0x7c;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x7c;
      } while (iVar2 < 5);
    }
    iVar8 = iVar8 + 0x2e8;
    uVar5 = uVar5 + 1;
    iVar7 = iVar7 + 0x2e8;
  } while ((int)uVar5 < 2);
  return;
}
