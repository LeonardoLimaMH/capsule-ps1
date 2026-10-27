#include "common.h"

#include "ghidra.h"
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
extern s32 func_800A46B8();
extern s32 func_800A93DC();
extern s32 func_800A954C();
extern s32 func_800CD950();
void func_800A924C(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [2];
  short local_2e;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];

  func_800A46B8(param_1,*(undefined1 *)(param_1 + 0xcb4),*(undefined1 *)(param_1 + 0xcb5),auStack_28
               );
  func_800A46B8(param_1,*(undefined1 *)(param_1 + 0xcb6),*(undefined1 *)(param_1 + 0xcb7),auStack_20
               );
  switch(param_4) {
  case 0:
  case 1:
    uVar4 = 0x1c;
    uVar1 = *(undefined1 *)(param_1 + 0xcd9);
    uVar3 = 100;
    goto LAB_800a92f4;
  case 2:
    uVar4 = 0x3c;
    uVar1 = *(undefined1 *)(param_1 + 0xcd9);
    uVar3 = 300;
LAB_800a92f4:
    func_800A93DC(auStack_20,auStack_28,auStack_30,uVar4,uVar1,uVar3);
    break;
  case 3:
    func_800A954C(auStack_20,auStack_28,auStack_30,8,*(undefined1 *)(param_1 + 0xcd9));
    break;
  case 4:
    func_800A954C(auStack_20,auStack_28,auStack_30,8,*(undefined1 *)(param_1 + 0xcd9));
    if (param_3 == 1) {
      local_2e = local_2e + -0x32;
    }
  }
  uVar2 = func_800CD950(auStack_30,param_2);
  *(undefined2 *)(param_2 + 0x4e) = uVar2;
  *(short *)(param_2 + 0x46) = *(short *)(param_2 + 0x46) - (short)(DAT_8008ee70 / 2);
  *(short *)(param_2 + 0x4a) = *(short *)(param_2 + 0x4a) - (short)(DAT_8008ee74 / 2);
  return;
}
