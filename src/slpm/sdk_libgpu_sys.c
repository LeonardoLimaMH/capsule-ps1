#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_ResetGraph);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetGraphDebug);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetGraphQueue);

u8 slpm_GetGraphDebug(void) {
    extern u8 D_80131B36[];
    return (*D_80131B36);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_DrawSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDispMask);
