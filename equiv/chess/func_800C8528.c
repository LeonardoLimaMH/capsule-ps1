#include "common.h"

#include "ghidra.h"
undefined4 func_800C8528(int param_1,int param_2,int param_3,int param_4)

{
    extern u16 D_8008EE54[];
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = param_2 + param_3 * 0x2e8 + 0x18 + param_4 * 0x7c;
  uVar5 = *(undefined4 *)(iVar4 + 0x70);
  if ((*D_8008EE54) == 0) {
    func_800CAA44(param_1,iVar4);
    func_800CA7B0(param_1,iVar4,3,4,0xfffffffd);
    bVar1 = *(byte *)(iVar4 + 0x6e);
    bVar2 = *(byte *)(iVar4 + 0x11);
    *(undefined1 *)(param_2 + 0x715) = 3;
    *(undefined1 *)(param_2 + 0x70e) = 0;
    *(undefined1 *)(param_2 + 0x70d) = 0;
    *(ushort *)(param_2 + 0x710) = (ushort)bVar1 - (ushort)bVar2;
    func_800C44BC(param_1,uVar5,param_3,param_4,2);
    *(undefined2 *)(param_1 + 0xc) = 0;
    func_80012668();
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if ((*D_8008EE54) == 1) {
      uVar3 = *(short *)(param_1 + 0xc) + 1;
      *(ushort *)(param_1 + 0xc) = uVar3;
      uVar5 = 0;
      if (0x3c < uVar3) {
        *(undefined1 *)(param_2 + 0x70d) = 1;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}
