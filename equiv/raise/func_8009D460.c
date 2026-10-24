#include "common.h"

#include "ghidra.h"
void func_8009D460(void)

{
    extern s32 D_800EBDE4[];
    extern M2C_UNK D_800EBDE8[];
    extern s32 D_800EBFF0[];
    extern s32 D_800EBFF4[];
    extern int func_80012508();
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  (*D_800EBFF0) = 0;
  (*D_800EBFF4) = 0;
  if ((*D_800EBDE4) != 0x80) {
    iVar2 = (*D_800EBDE4) + 1;
  }
  (*D_800EBDE4) = iVar2;
  func_8001A464(0xe,0x80113000);
  func_8001A464(0xf,0x80146a18);
  func_8001A480(0xf,0x80113000);
  if ((*D_800EBDE4) < 10) {
    uVar1 = 0x12000f;
  }
  else {
    func_80019F30(0x12000f,0);
    func_8001A464(*(undefined4 *)(D_800EBDE8)[(*D_800EBDE4)],0x80146a18);
    uVar1 = *(undefined4 *)(D_800EBDE8)[(*D_800EBDE4)];
  }
  func_80019F30(uVar1,&func_80012508);
  func_80012508();
  return;
}
