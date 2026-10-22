#include "common.h"

void slpm_SetPriority(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    M2C_FIELD(arg0, s8 *, 3) = 2;
    var_v1 = 0xE6000000;
    if (arg1 != 0) {
        var_v1 = 0xE6000002;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_v1 | (arg2 != 0));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", slpm_SetDrawStp);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", slpm_SetDrawMode);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", slpm_SetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80114D30);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80114FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80114FC0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80115058);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_801150F0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_8011510C);

s32 func_8011518C(void) {
    extern s32 * D_80131C3C[];
    return *(*D_80131C3C);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_801151A4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80115284);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_801154B4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_801156F0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80115970);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__Priority", func_80115994);
