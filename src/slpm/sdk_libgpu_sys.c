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

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_DrawSync);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80113C78);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_ClearImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_ClearImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_LoadImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_StoreImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_MoveImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_ClearOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_ClearOTagR);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_DrawPrim);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_DrawOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_PutDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_DrawOTagEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_GetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_PutDispEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_GetDispEnv);

u32 slpm_GetODE(void) {
    extern void * D_80131B2C[];
    return M2C_FIELD((*D_80131B2C), u32 (**)(), 0x38)() >> 0x1F;
}
