#include "common.h"

#include "ghidra.h"
void func_800A33F8(int param_1)

{
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  switch((*D_8008EE4C)) {
  case 0:
    if (*(char *)(param_1 + 1) != '\0') {
      *(undefined1 *)(param_1 + 0xd77) = 6;
      func_800A5FEC(param_1);
      func_800125D8();
      goto L800A35D4;
    }
    switch((*D_8008EE50)) {
    case 0:
      iVar2 = func_800A04C8(param_1,0);
      if (iVar2 == 0) {
        func_8001264C(2);
        return;
      }
      break;
    case 1:
      uVar4 = 0;
      goto L800A3514;
    case 2:
      iVar2 = func_800A04C8(param_1,1);
      if (iVar2 == 0) {
        func_800220B8(4);
        return;
      }
      break;
    case 3:
      uVar4 = 1;
L800A3514:
      iVar2 = func_80012628(param_1,1,uVar4,0);
      if (iVar2 == 0) {
        return;
      }
      func_8001264C();
      return;
    case 4:
      func_800220D4(1);
    default:
      goto L800A35F8;
    }
    func_80012628(param_1);
    func_80012604();
    break;
  case 1:
    func_80033878(0x8005);
    *(undefined2 *)(param_1 + 0xc) = 0;
    func_800125D8();
    break;
  case 2:
    uVar1 = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(param_1 + 0xc) = uVar1;
    if ((199 < uVar1) || (uVar3 = func_800337EC(), (uVar3 & 1) == 0)) {
      func_800A3080(param_1);
      func_800125D8();
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0xd77) == '\x06') {
      func_800A5FEC(param_1);
      func_800125D8();
    }
    break;
  case 4:
L800A35D4:
    *(char *)(param_1 + 0xbca) = '\x01' - *(char *)(param_1 + 0x5da);
    func_800B0F1C(param_1 + 0x5d0);
    *(undefined4 *)(param_1 + 3000) = 0;
    SsQuit();
    func_800125AC(0xc);
  }
L800A35F8:
  return;
}
