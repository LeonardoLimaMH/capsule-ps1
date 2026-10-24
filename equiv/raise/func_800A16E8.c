#include "common.h"

#include "ghidra.h"
void func_800A16E8(void)

{
    extern M2C_UNK D_8006B1EC[];
    extern s32 D_80078C4C[];
    extern u16 D_80091618[];
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined2 *)D_80091618;
  do {
    iVar1 = func_800AECC8(uVar2 & 0xffff);
    if (iVar1 != -1) {
      func_80028084(*puVar3);
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0xd4;
  } while ((int)uVar2 < 6);
  func_80033974(0);
  func_80033974(0x8000);
  func_80033E5C(D_8006B1EC,(*D_80078C4C));
  return;
}
