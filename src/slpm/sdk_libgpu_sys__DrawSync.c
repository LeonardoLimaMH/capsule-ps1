#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_DrawSync);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", func_80113C78);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_LoadImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_StoreImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_MoveImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearOTagR);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_DrawPrim);

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
