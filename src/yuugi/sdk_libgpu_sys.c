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

u32 GetODE(void) {
    extern void * D_80078914[];
    return M2C_FIELD((*D_80078914), u32 (**)(), 0x38)() >> 0x1F;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetTexWindow);
