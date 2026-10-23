#include "common.h"

#include "ghidra.h"
void func_800C3B54(int param_1)

{
    extern u16 D_8008EE50[];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  switch((*D_8008EE50)) {
  case 0:
    iVar3 = func_800C9414();
    if (iVar3 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0xbe5) = 0;
    func_800C3108(param_1);
    *(undefined2 *)(param_1 + 0xc) = 0;
    break;
  case 1:
    iVar3 = func_80019654();
    if (iVar3 == 0) {
      return;
    }
    iVar3 = func_800CA69C(param_1);
    if ((*(char *)(param_1 + 0x5d0) == '\x02') ||
       (uVar4 = 0x7005, *(char *)(param_1 + iVar3 + 0x5e0) == '\0')) {
      uVar4 = 0x7004;
    }
    func_800338DC(uVar4);
    *(undefined2 *)(param_1 + 0xc) = 0;
    break;
  case 2:
    uVar2 = func_800337EC();
    if (((uVar2 & 0x80) == 0) && ((*(byte *)(param_1 + 0x5c8) & 4) != 0)) {
      return;
    }
    break;
  case 3:
    iVar3 = func_800CA69C(param_1);
    if ((*(char *)(param_1 + 0x5d0) != '\x02') && (*(char *)(param_1 + iVar3 + 0x5e0) != '\0'))
    goto L800C3D20;
    func_80033878(0x8005);
    *(undefined2 *)(param_1 + 0xc) = 0;
    break;
  case 4:
    uVar1 = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(param_1 + 0xc) = uVar1;
    if ((uVar1 < 200) && (uVar2 = func_800337EC(), (uVar2 & 1) != 0)) {
      return;
    }
    iVar3 = func_800CA69C(param_1);
    if (*(char *)(param_1 + 0x5d0) == '\x02') {
      func_800C31E8(param_1);
      *(undefined1 *)(param_1 + 0xd77) = 0;
    }
    else if (*(char *)(param_1 + iVar3 + 0x5e0) == '\0') {
      func_800C349C(param_1);
      *(undefined1 *)(param_1 + 0xd77) = 0;
    }
    else {
      func_800C372C(param_1);
      *(undefined1 *)(param_1 + 0xd77) = 0;
    }
    *(undefined1 *)(param_1 + 0xd78) = 0;
    break;
  case 5:
    if (*(char *)(param_1 + 0xd77) != '\x04') {
      return;
    }
L800C3D20:
    *(undefined2 *)(param_1 + 0xc) = 0;
    break;
  case 6:
    uVar1 = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(param_1 + 0xc) = uVar1;
    if (uVar1 < 0x3d) {
      return;
    }
    if (*(char *)(param_1 + 0x5d0) != '\x02') goto L800C3D80;
    break;
  case 7:
    uVar1 = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(param_1 + 0xc) = uVar1;
    if (uVar1 < 0x79) {
      return;
    }
L800C3D80:
    func_80012628();
  default:
    goto L800C3D88;
  }
  func_800125D8();
L800C3D88:
  return;
}
