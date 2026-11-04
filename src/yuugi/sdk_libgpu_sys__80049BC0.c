#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", func_80049BC0);

extern char D_800112C0[];

s32 ClearImage(s32 *rect, u8 r, u8 g, u8 b) {
    extern void * D_80078914[];
    func_80049BC0(D_800112C0, rect);
    return M2C_FIELD((*D_80078914), s32 (**)(s32, s32 *, s32, s32), 8)(M2C_FIELD((*D_80078914), s32 *, 0xC), rect, 8, (b << 0x10) | (g << 8) | r);
}

extern char D_800112CC[];
void ClearImage2(s32 rect, u8 r, u8 g, u8 b) {
    extern void * D_80078914[];
    s32 t, u;
    func_80049BC0(D_800112CC, rect);
    u = b << 16;
    t = (g << 8) | 0x80000000;
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0xC), rect, 8, (u | t) | r);
}

extern char D_800112E4[];

extern char D_800112F0[];

extern char D_80011314[];

extern char D_8001132C[];

extern char D_80011340[];

extern char D_800112D8[];
void LoadImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    func_80049BC0(D_800112D8, arg0);
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0x20), arg0, 8, arg1);
}

void StoreImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    func_80049BC0(D_800112E4, arg0);
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0x1C), arg0, 8, arg1);
}

extern char D_800112F0[];
s32 MoveImage(s32 *rect, s32 x, s32 y) {
    extern void * D_80078914[];
    extern s32 D_800789BC[];
    func_80049BC0(D_800112F0, rect);
    if (((s16 *)rect)[2] == 0) {
        return -1;
    }
    if (((s16 *)rect)[3] == 0) {
        return -1;
    }
    D_800789BC[1] = (y << 16) | (x & 0xFFFF);
    D_800789BC[0] = rect[0];
    D_800789BC[2] = rect[1];
    return M2C_FIELD((*D_80078914), s32 (**)(s32, s32 *, s32, s32), 8)(M2C_FIELD((*D_80078914), s32 *, 0x18), &D_800789BC[-2], 0x14, 0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearOTag);

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

void DrawPrim(void *arg0) {
    extern void * D_80078914;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80078914, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80078914, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}

void DrawOTag(s32 arg0) {
    extern void * D_80078914;
    extern M2C_UNK (*D_80078918)(M2C_UNK *, s32);
    extern u8 D_8007891E;
    if ((u8) D_8007891E >= 2U) {
        D_80078918(D_8001132C, arg0);
    }
    M2C_FIELD(D_80078914, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80078914, s32 *, 0x18), arg0, 0, 0);
}

extern char D_80011340[];
void *PutDrawEnv(void *env) {
    extern void *D_80078914[];
    extern M2C_UNK (*D_80078918)(M2C_UNK *, void *);
    extern u8 D_8007891E[];
    extern void func_8004AC78(void *, void *);
    extern void *memcpy(void *, void *, s32);
    u8 *p = D_8007891E;
    void *tag;

    if (*p >= 2) {
        D_80078918(D_80011340, env);
    }
    tag = (u8 *)env + 0x1C;
    func_8004AC78(tag, env);
    *(u32 *)tag |= 0xFFFFFF;
    M2C_FIELD((*D_80078914), s32 (**)(s32, void *, s32, s32), 8)(M2C_FIELD((*D_80078914), s32 *, 0x18), tag, 0x40, 0);
    memcpy(p + 0xE, env, 0x5C);
    return env;
}

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
