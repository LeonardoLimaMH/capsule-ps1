#include "common.h"

#include "ghidra.h"
undefined4 func_800B9284(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED88C[];
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_8009E72C();
  if (iVar1 == -1) {
    *(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e960) =
         *(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e960) + 1;
    func_800D1CC4((*D_8006AF80),0xc,0,0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (iVar1 == -2) {
      (*D_800ED88C) = 1;
      func_800B8EF0();
      func_800CD288(1,1);
      uVar2 = 1;
    }
  }
  return uVar2;
}
