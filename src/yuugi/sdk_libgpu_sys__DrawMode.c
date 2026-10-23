#include "common.h"
#include "yuugi.h"

void SetDrawMode(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_8004AEE8(arg1, arg2, arg3 & 0xFFFF);
    M2C_FIELD(arg0, s32 *, 8) = func_8004B054(arg4);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", SetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", func_8004AC78);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", func_8004AEE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", func_8004AF08);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", func_8004AFA0);
