#include "common.h"

#include "ghidra.h"
#define DAT_80069b40 (*(u8 *)0x80069B40)
#define DAT_80069b41 (*(u8 *)0x80069B41)
#define DAT_80069b42 (*(u8 *)0x80069B42)
#define D_80069B44 (*(s32 *)0x80069B44)
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 SetBackColor();
extern s32 SetColorMatrix();
#define func_8002AF9C ((s32 (*)())0x8002AF9C)
#define func_8002B138 ((s32 (*)())0x8002B138)
#define func_8002B334 ((s32 (*)())0x8002B334)
#define func_8002B4D0 ((s32 (*)())0x8002B4D0)
#define func_800CD200 ((s32 (*)())0x800CD200)
void func_800CBAA0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;

  PushMatrix();
  SetColorMatrix(*(int *)(param_2 + 0x14) + 0xc4);
  iVar1 = *(int *)(param_2 + 0x14);
  SetBackColor(*(undefined1 *)(iVar1 + 0x60),*(undefined1 *)(iVar1 + 0x61),
               *(undefined1 *)(iVar1 + 0x62));
  func_800CD200(param_2);
  iVar2 = *(int *)(param_2 + 0x18);
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 1) {
    func_8002B138(iVar2,param_3);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_8002AF9C(iVar2,param_3);
    }
  }
  else if (iVar1 == 2) {
    func_8002B334(iVar2,param_3);
  }
  else if (iVar1 == 3) {
    func_8002B4D0(iVar2,param_3);
  }
  SetColorMatrix(&D_80069B44);
  SetBackColor(DAT_80069b40,DAT_80069b41,DAT_80069b42);
  PopMatrix();
  return;
}
