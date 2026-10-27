#include "common.h"

#include "ghidra.h"
#define D_800859F3 (*(u8 *)0x800859F3)
#define D_8008ED68 (*(s32 *)0x8008ED68)
#define cRam8008f7ce (*(u8 *)0x8008F7CE)
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 func_800248C8();
extern s32 func_8002AF9C();
extern s32 func_8002B4D0();
extern s32 func_8002CEC0();
extern s32 func_800CE73C();
extern s32 func_800CE9E4();
void func_800CEFA0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x18);
  if (D_800859F3 == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x50) | 1;
L800CF000:
    *(uint *)(param_1 + 0x50) = uVar1;
  }
  else if (D_800859F3 == '\x03') {
    uVar1 = *(uint *)(param_1 + 0x50) & 0xfffffffe;
    goto L800CF000;
  }
  if ((*(uint *)(param_1 + 0x50) & 1) == 1) {
    return;
  }
  if ((*(short *)(param_1 + 0x4e) != 0) && (iVar2 = func_800248C8(param_1), iVar2 != 0)) {
    return;
  }
  if (cRam8008f7ce != '\0') {
    *(undefined2 *)(param_1 + 0x4e) = 1;
  }
  switch(*(undefined2 *)(param_1 + 0x4e)) {
  case 0:
    goto L800CF154;
  case 1:
    PushMatrix();
    func_8002CEC0(iVar3);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 == 1) {
L800CF11C:
      func_800CE73C(iVar3,&D_8008ED68);
    }
    else if (iVar2 < 2) {
L800CF0E4:
      if (iVar2 == 0) {
        func_8002AF9C(iVar3,&D_8008ED68);
      }
    }
    else {
      if (iVar2 != 2) goto joined_r0x800cf0fc;
L800CF130:
      func_800CE9E4(iVar3,&D_8008ED68);
    }
    break;
  case 2:
    PushMatrix();
    func_8002CEC0(iVar3);
    iVar2 = *(int *)(iVar3 + 8);
    if (iVar2 == 1) goto L800CF11C;
    if (iVar2 < 2) goto L800CF0E4;
    if (iVar2 == 2) goto L800CF130;
joined_r0x800cf0fc:
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
    goto L800CF200;
  }
  PopMatrix();
L800CF154:
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 1;
L800CF200:
  return;
}
