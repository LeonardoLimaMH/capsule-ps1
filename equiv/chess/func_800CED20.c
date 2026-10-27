#include "common.h"

#include "ghidra.h"
#define D_800859F3 (*(u8 *)0x800859F3)
#define D_8008ED68 (*(s32 *)0x8008ED68)
#define cRam8008f7ce (*(u8 *)0x8008F7CE)
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 func_800248E8();
extern s32 func_8002AF9C();
extern s32 func_8002B4D0();
extern s32 func_8002CEC0();
extern s32 func_800CE73C();
extern s32 func_800CE9E4();
void func_800CED20(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x18);
  if (D_800859F3 == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x50) | 1;
L800CED80:
    *(uint *)(param_1 + 0x50) = uVar1;
  }
  else if (D_800859F3 == '\x03') {
    uVar1 = *(uint *)(param_1 + 0x50) & 0xfffffffe;
    goto L800CED80;
  }
  if ((*(uint *)(param_1 + 0x50) & 1) == 1) {
    return;
  }
  if ((*(short *)(param_1 + 0x4e) != 0) && (iVar2 = func_800248E8(param_1), iVar2 != 0)) {
    return;
  }
  if (cRam8008f7ce != '\0') {
    *(undefined2 *)(param_1 + 0x4e) = 1;
  }
  switch(*(undefined2 *)(param_1 + 0x4e)) {
  case 0:
    goto L800CEED4;
  case 1:
    PushMatrix();
    func_8002CEC0(iVar3);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 == 1) {
L800CEE9C:
      func_800CE73C(iVar3,&D_8008ED68);
    }
    else if (iVar2 < 2) {
L800CEE64:
      if (iVar2 == 0) {
        func_8002AF9C(iVar3,&D_8008ED68);
      }
    }
    else {
      if (iVar2 != 2) goto joined_r0x800cee7c;
L800CEEB0:
      func_800CE9E4(iVar3,&D_8008ED68);
    }
    break;
  case 2:
    PushMatrix();
    func_8002CEC0(iVar3);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 == 1) goto L800CEE9C;
    if (iVar2 < 2) goto L800CEE64;
    if (iVar2 == 2) goto L800CEEB0;
joined_r0x800cee7c:
    if (iVar2 == 3) {
      func_8002B4D0(iVar3,&D_8008ED68);
    }
    break;
  case 3:
    PushMatrix();
    func_8002CEC0(iVar3);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 == 1) {
      func_800CE73C(iVar3,&D_8008ED68);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        func_8002AF9C(iVar3,&D_8008ED68);
      }
    }
    else if (iVar2 == 2) {
      func_800CE9E4(iVar3,&D_8008ED68);
    }
    else if (iVar2 == 3) {
      func_8002B4D0(iVar3,&D_8008ED68);
    }
    PopMatrix();
    return;
  default:
    goto L800CEF80;
  }
  PopMatrix();
L800CEED4:
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 1;
L800CEF80:
  return;
}
