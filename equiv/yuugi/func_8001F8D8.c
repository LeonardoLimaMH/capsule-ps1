#include "common.h"

#include "ghidra.h"
void func_8001F8D8(void)

{
    extern M2C_UNK D_80063884[];
    extern u16 D_8008EE44[];
  (**(code **)((u8 *)D_80063884 + (uint)(*D_8008EE44) * 4))();
  return;
}
