#include "common.h"

#include "ghidra.h"
undefined1 func_800D7E94(uint param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xff) >> 7;
  uVar1 = func_800D7B80(param_1 & 0xff,
                        *(undefined1 *)(((param_1 & 0x7f) - 1) * 0x7c + uVar2 * 0x2e8 + -0x7ff7a5e1)
                       );
  uVar1 = func_800D23F0(uVar2,uVar1,
                        *(undefined1 *)
                         (((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8 +
                         -0x7ff7a5e0));
  return uVar1;
}
