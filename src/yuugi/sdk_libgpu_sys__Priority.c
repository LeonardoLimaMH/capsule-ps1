#include "common.h"
#include "yuugi.h"

void SetPriority(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    M2C_FIELD(arg0, s8 *, 3) = 2;
    var_v1 = 0xE6000000;
    if (arg1 != 0) {
        var_v1 = 0xE6000002;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_v1 | (arg2 != 0));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", SetDrawStp);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", SetDrawMode);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", SetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004AC78);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004AEE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004AF08);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004AFA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B038);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B054);

s32 func_8004B0D4(void) {
    extern s32 * D_80078A24[];
    return *(*D_80078A24);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B0EC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B1CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B3FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B638);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B8B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B8DC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__Priority", func_8004B8F0);

void func_8004B930(s32 arg0) {
    extern s32 * D_80078A24[];
    extern s32 * D_80078A28[];
    extern s32 * D_80078A2C[];
    extern s32 * D_80078A30[];
    *(*D_80078A24) = 0x04000002;
    *(*D_80078A28) = arg0;
    *(*D_80078A2C) = 0;
    *(*D_80078A30) = 0x01000401;
}

s32 func_8004B978(s32 arg0) {
    extern s32 * D_80078A20[];
    extern s32 * D_80078A24[];
    *(*D_80078A24) = arg0 | 0x10000000;
    return *(*D_80078A20) & 0xFFFFFF;
}
