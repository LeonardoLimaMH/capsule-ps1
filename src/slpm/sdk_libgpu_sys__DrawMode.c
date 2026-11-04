#include "common.h"

void slpm_SetDrawMode(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_80114FA0(arg1, arg2, arg3 & 0xFFFF);
    M2C_FIELD(arg0, s32 *, 8) = func_8011510C(arg4);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", slpm_SetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80114D30);

u32 func_80114FA0(s32 dfe, s32 dtd, s32 tpage) {
    register u32 v1 asm("v1");
    register u32 v0 asm("v0");

    if (dtd) {
        v1 = 0xE1000200;
    } else {
        v1 = 0xE1000000;
    }
    v0 = tpage & 0x9FF;
    if (dfe) {
        v0 |= 0x400;
    }
    return v1 | v0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80114FC0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawMode", func_80115058);
