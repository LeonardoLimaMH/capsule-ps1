#include "common.h"

#include "ghidra.h"
void func_800A4964(int param_1)

{
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s32 D_8008EE48[];
  byte bVar1;
  
  if ((*D_8008EE44) == 0xe) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if (D_8008EE48 == 0) {
      bVar1 = *(char *)(param_1 + 0x58) + 1;
      *(byte *)(param_1 + 0x58) = bVar1;
      if (bVar1 < 0x80) {
        *(byte *)(param_1 + 0x5a) = bVar1;
        *(byte *)(param_1 + 0x59) = bVar1;
      }
      else {
        func_80012578();
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  }
  if ((*D_8008EE44) < 0xe) {
    func_800185F8(param_1);
  }
  return;
}
