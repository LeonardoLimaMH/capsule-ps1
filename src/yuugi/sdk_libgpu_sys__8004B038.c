#include "common.h"
#include "yuugi.h"

s32 func_8004B038(s32 arg0, s32 arg1)
{
  int new_var;
  int new_var2;
  unsigned int new_var3;
  new_var3 = (arg1 & 0x7FF) << 0xB;
  if (1)
  {
    new_var = 0x7FF;
    new_var2 = (arg0 & new_var) | 0xE5000000;
    return new_var3 | new_var2;
  }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B054);

s32 func_8004B0D4(void) {
    extern s32 * D_80078A24[];
    return *(*D_80078A24);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B0EC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B1CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B3FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B638);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B8B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B8DC);
