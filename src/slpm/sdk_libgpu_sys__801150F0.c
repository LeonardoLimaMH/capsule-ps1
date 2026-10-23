#include "common.h"

s32 func_801150F0(s32 arg0, s32 arg1)
{
  int new_var;
  return ((arg1 & 0x7FF) << 0xB) | ((arg0 & 0x7FF) | (new_var = 0xE5000000));
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_8011510C);

s32 func_8011518C(void) {
    extern s32 * D_80131C3C[];
    return *(*D_80131C3C);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_801151A4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_80115284);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_801154B4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_801156F0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_80115970);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__801150F0", func_80115994);
