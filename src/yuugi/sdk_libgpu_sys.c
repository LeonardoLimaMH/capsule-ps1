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
