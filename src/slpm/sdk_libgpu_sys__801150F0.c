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

#include "common.h"

void func_80115970(u32 arg0) {
    extern u32 * D_80131C3C[];
    extern u8 D_80133588[];
    *(*D_80131C3C) = arg0;
    *(D_80133588 + (arg0 >> 0x18)) = (s8) arg0;
}

#include "common.h"

u8 func_80115994(s32 arg0) {
    extern M2C_UNK D_80133588[];
    return *((u8 *)D_80133588 + arg0);
}
