#include "common.h"

void slpm_SetDrawMode(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_80114FA0(arg1, arg2, arg3 & 0xFFFF);
    M2C_FIELD(arg0, s32 *, 8) = func_8011510C(arg4);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", slpm_SetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80114D30);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80114FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80114FC0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80115058);
