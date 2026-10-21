#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ResetGraph);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetGraphDebug);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetGraphQueue);

u8 GetGraphDebug(void) {
    extern u8 D_8007891E[];
    return (*D_8007891E);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawSyncCallback);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDispMask);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawSync);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_80049BC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ClearImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ClearImage2);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", LoadImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", StoreImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", MoveImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ClearOTag);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ClearOTagR);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawPrim);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawOTag);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", PutDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawOTagEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", GetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", PutDispEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", GetDispEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", GetODE);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetTexWindow);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDrawArea);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDrawOffset);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetPriority);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDrawStp);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDrawMode);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004AC78);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004AEE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004AF08);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004AFA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B038);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B054);

s32 func_8004B0D4(void) {
    extern s32 * D_80078A24[];
    return *(*D_80078A24);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B0EC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B1CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B3FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B638);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B8B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B8DC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", func_8004B8F0);

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
