#include "common.h"

#include "ghidra.h"
void func_8009C9C4(int param_1)

{
    extern u8 D_800859F0[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern u8 D_800B2C1C[];
    extern s32 D_800B3C10[];
    extern u16 D_800B3C14[];
    extern s32 D_8008F784[];
    extern s32 D_8008F78C[];
  uint uVar1;
  
  switch((*D_8008EE48)) {
  case 0:
    (*D_800B3C10) = 0;
    if ((*D_8008EE44) == 0xb) {
      if (D_8008F784 == 2) {
        (*D_800B3C14) = 0x7020;
      }
      else {
        (*D_800B3C14) = *(undefined2 *)
                      (D_800B2C1C + (uint)*(byte *)(param_1 + 0x5d4) * 2);
      }
    }
    else {
      (*D_800B3C14) = 0x7015;
    }
    *(undefined2 *)(param_1 + 8) = (*D_800B3C14);
    if (((*D_8008EE44) != 3) || (D_8008F78C != 1)) {
      if (((*D_800859F0) & 4) != 0) break;
      goto joined_r0x8009cb3c;
    }
    goto L8009CB6C;
  case 1:
    uVar1 = func_80019654();
L8009CB20:
    if (uVar1 == 0) {
      return;
    }
    break;
  case 2:
    func_800338DC((*D_800B3C14));
    break;
  case 3:
    if (((*D_800859F0) & 4) != 0) {
      uVar1 = func_80012578();
      uVar1 = uVar1 & 0x80;
      goto L8009CB20;
    }
    break;
  case 4:
joined_r0x8009cb3c:
    if ((*D_8008EE44) == 0xb) {
      func_800337EC(0xd);
      return;
    }
    if ((*D_8008EE44) == 0xc) {
      func_80012544(7);
      return;
    }
L8009CB6C:
    func_80012544();
  default:
    goto L8009CB74;
  }
  func_80012508();
L8009CB74:
  return;
}
