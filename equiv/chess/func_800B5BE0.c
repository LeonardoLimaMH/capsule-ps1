#include "common.h"

#include "ghidra.h"
void func_800B5BE0(int param_1)

{
    extern M2C_UNK D_80085428[];
    extern s32 D_8008619F[];
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  if (D_8008619F == -1) {
    func_800185F8();
  }
  else if ((*(uint *)(param_1 + 0x34) & 0x7f) != 0) {
    func_800B4400((*D_80085428));
  }
  return;
}
