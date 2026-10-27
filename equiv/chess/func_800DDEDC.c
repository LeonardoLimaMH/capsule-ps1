#include "common.h"

#include "ghidra.h"
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
extern s32 func_80013920();
extern s32 func_800FF0A0();
void func_800DDEDC(int param_1)

{
  uint uVar1;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;

  if (bRam8008ee6b < 2) {
    uVar1 = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x3c) + (uint)bRam8008ee6b;
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (*(uint *)(param_1 + 0x84) < uVar1) {
    func_80013920();
  }
  else {
    uStack_10 = *(undefined2 *)(param_1 + 0x6a);
    uStack_e = *(undefined2 *)(param_1 + 0x6e);
    uStack_c = *(undefined2 *)(param_1 + 0x72);
    func_800FF0A0(param_1,&uStack_10,0);
  }
  return;
}
