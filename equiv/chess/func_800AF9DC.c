#include "common.h"

#include "ghidra.h"
void func_800AF9DC(int param_1)

{
    extern M2C_UNK D_8008ED68[];
  ushort uVar1;
  int iVar2;
  
  iVar2 = func_800CAE6C(param_1 + 0x5d0);
  if ((iVar2 == 0) && (*(char *)(param_1 + (uint)*(byte *)(param_1 + 0xbca) + 0x5e0) == '\0')) {
    if (*(int *)((uint)*(byte *)(param_1 + 0xbca) * 0x10 + -0x7ff71218) == 0) {
      uVar1 = *(short *)(param_1 + 0xbe2) + 1;
      *(ushort *)(param_1 + 0xbe2) = uVar1;
      if (0x383f < uVar1) {
        if (uVar1 == 0x3840) {
          func_800AFACC(param_1,0);
        }
        else if (uVar1 == 0x3841) {
          func_800AFBDC(param_1);
        }
        else {
          *(undefined2 *)(param_1 + 0xbe2) = 0x3842;
        }
      }
    }
    else {
      if (0x383f < *(ushort *)(param_1 + 0xbe2)) {
        func_800AFCE0(param_1);
      }
      *(undefined2 *)(param_1 + 0xbe2) = 0;
    }
  }
  return;
}
