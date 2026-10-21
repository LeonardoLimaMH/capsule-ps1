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

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_GetODE);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetTexWindow);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDrawArea);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDrawOffset);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetPriority);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDrawStp);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDrawMode);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", slpm_SetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80114D30);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80114FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80114FC0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80115058);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_801150F0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_8011510C);

s32 func_8011518C(void) {
    extern s32 * D_80131C3C[];
    return *(*D_80131C3C);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_801151A4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80115284);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_801154B4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_801156F0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80115970);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_80115994);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys", func_801159A8);

void func_801159E8(s32 arg0) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C40[];
    extern s32 * D_80131C44[];
    extern s32 * D_80131C48[];
    *(*D_80131C3C) = 0x04000002;
    *(*D_80131C40) = arg0;
    *(*D_80131C44) = 0;
    *(*D_80131C48) = 0x01000401;
}

s32 func_80115A30(s32 arg0) {
    extern s32 * D_80131C38[];
    extern s32 * D_80131C3C[];
    *(*D_80131C3C) = arg0 | 0x10000000;
    return *(*D_80131C38) & 0xFFFFFF;
}
