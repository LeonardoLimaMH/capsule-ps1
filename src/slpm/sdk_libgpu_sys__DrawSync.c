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

extern char D_801104C8[];
void slpm_ClearImage(s32 rect, u8 r, u8 g, u8 b) {
    extern void * D_80131B2C[];
    func_80113C78(D_801104C8, rect);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0xC), rect, 8, (b << 16) | (g << 8) | r);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearImage2);

#include "common.h"

extern char D_801104E0[];
void slpm_LoadImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80131B2C[];
    func_80113C78(D_801104E0, arg0);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0x20), arg0, 8, arg1);
}

#include "common.h"

extern char D_801104EC[];
void slpm_StoreImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80131B2C[];
    func_80113C78(D_801104EC, arg0);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0x1C), arg0, 8, arg1);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_MoveImage);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libgpu_sys__DrawSync", slpm_ClearOTag);

#include "common.h"

extern char D_8011051C[];
s32 *slpm_ClearOTagR(s32 *arg0, M2C_UNK arg1) {
    extern void * D_80131B2C[];
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32 *, M2C_UNK);
    extern u8 D_80131B36[];
    extern M2C_UNK D_80131BE0[];
    extern s32 D_80131BF4[];
    if ((u8) (*D_80131B36) >= 2U) {
        D_80131B30(D_8011051C, arg0, arg1);
    }
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32 *, M2C_UNK), 0x2C)(arg0, arg1);
    (*D_80131BF4) = ((s32) D_80131BE0 & 0xFFFFFF) | 0x04000000;
    *arg0 = (s32) D_80131BF4 & 0xFFFFFF;
    return arg0;
}

#include "common.h"

void slpm_DrawPrim(void *arg0) {
    extern void * D_80131B2C;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}

#include "common.h"

extern char D_80110534[];
void slpm_DrawOTag(s32 arg0) {
    extern void * D_80131B2C;
    extern M2C_UNK (*D_80131B30)(M2C_UNK *, s32);
    extern u8 D_80131B36;
    if ((u8) D_80131B36 >= 2U) {
        D_80131B30(D_80110534, arg0);
    }
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80131B2C, s32 *, 0x18), arg0, 0, 0);
}

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
