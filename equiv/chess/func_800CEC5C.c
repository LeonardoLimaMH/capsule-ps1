#include "common.h"

#include "ghidra.h"
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 func_8002AF9C();
extern s32 func_8002B4D0();
extern s32 func_8002CEC0();
extern s32 func_800CE73C();
extern s32 func_800CE9E4();
void func_800CEC5C(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;

  PushMatrix();
  func_8002CEC0(param_2);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 1) {
    func_800CE73C(param_2,param_3);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_8002AF9C(param_2,param_3);
    }
  }
  else if (iVar1 == 2) {
    func_800CE9E4(param_2,param_3);
  }
  else if (iVar1 == 3) {
    func_8002B4D0(param_2,param_3);
  }
  PopMatrix();
  return;
}
