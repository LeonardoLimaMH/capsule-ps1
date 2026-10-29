#include "common.h"

void slpm_DrawSync(s32 arg0) {
    extern char D_80110490[];
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36[];
    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30(D_80110490, arg0);
    }
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32), 0x3C)(arg0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", func_80113C78);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_LoadImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_StoreImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_MoveImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearOTagR);

#include "common.h"

void slpm_DrawPrim(void *arg0) {
    extern void * D_80131B2C;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_DrawOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_PutDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_DrawOTagEnv);

#include "common.h"

#include "ghidra.h"
undefined4 slpm_GetDrawEnv(undefined4 param_1)

{
    extern M2C_UNK D_80131B44[];
  slpm_memcpy(param_1,D_80131B44,0x5c);
  return param_1;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_PutDispEnv);

#include "common.h"

#include "ghidra.h"
undefined4 slpm_GetDispEnv(undefined4 param_1)

{
    extern M2C_UNK D_80131BA0[];
  slpm_memcpy(param_1,D_80131BA0,0x14);
  return param_1;
}
