#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", func_80049BC0);

extern char D_800112C0[];
void ClearImage(s32 rect, u8 r, u8 g, u8 b) {
    extern void * D_80078914[];
    func_80049BC0(D_800112C0, rect);
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0xC), rect, 8, (b << 16) | (g << 8) | r);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearImage2);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", LoadImage);

#include "common.h"

extern char D_800112E4[];
void StoreImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    func_80049BC0(D_800112E4, arg0);
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0x1C), arg0, 8, arg1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", MoveImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearOTag);

#include "common.h"

extern char D_80011314[];

s32 *ClearOTagR(s32 *arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32 *, M2C_UNK);
    extern u8 D_8007891E[];
    extern M2C_UNK D_800789C8[];
    extern s32 D_800789DC[];
    if ((u8) (*D_8007891E) >= 2U) {
        D_80078918(D_80011314, arg0, arg1);
    }
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32 *, M2C_UNK), 0x2C)(arg0, arg1);
    (*D_800789DC) = ((s32) D_800789C8 & 0xFFFFFF) | 0x04000000;
    *arg0 = (s32) D_800789DC & 0xFFFFFF;
    return arg0;
}

#include "common.h"

void DrawPrim(void *arg0) {
    extern void * D_80078914;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80078914, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80078914, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}

#include "common.h"

extern char D_8001132C[];
void DrawOTag(s32 arg0) {
    extern void * D_80078914;
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32);
    extern u8 D_8007891E;
    if ((u8) D_8007891E >= 2U) {
        D_80078918(D_8001132C, arg0);
    }
    M2C_FIELD(D_80078914, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80078914, s32 *, 0x18), arg0, 0, 0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", PutDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", DrawOTagEnv);

void *GetDrawEnv(void *param_1) {
    extern u8 D_8007892C[];
    extern void *memcpy(void *, void *, s32);
    memcpy(param_1, D_8007892C, 0x5C);
    return param_1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", PutDispEnv);

void *GetDispEnv(void *env) {
    extern u8 D_80078988[];
    extern void *memcpy(void *, void *, s32);
    memcpy(env, D_80078988, 0x14);
    return env;
}

u32 GetODE(void) {
    extern void * D_80078914[];
    return M2C_FIELD((*D_80078914), u32 (**)(), 0x38)() >> 0x1F;
}
