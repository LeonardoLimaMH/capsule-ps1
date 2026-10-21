#include "common.h"

typedef struct GpuRect {
    s16 x, y, w, h;
} GpuRect;

typedef struct DrawEnvDesc {
    /* 0x00 */ GpuRect clip;
    /* 0x08 */ s16 ofs[2];
    /* 0x0C */ GpuRect tw;
    /* 0x14 */ u16 tpage;
    /* 0x16 */ u8 dtd;
    /* 0x17 */ u8 dfe;
    /* 0x18 */ u8 isbg;
    /* 0x19 */ u8 r0, g0, b0;
} DrawEnvDesc;

typedef struct DrawEnvPacket {
    /* 0x00 */ u8 tag[3];
    /* 0x03 */ u8 len;
    /* 0x04 */ u32 code[15];
} DrawEnvPacket;

extern s16 D_80078920[]; /* largura da área de vídeo */
extern s16 D_80078922[]; /* altura da área de vídeo */
u32 func_8004AF08(s16 x, s16 y);
u32 func_8004AFA0(s16 x, s16 y);
u32 func_8004B038(s16 x, s16 y);
u32 func_8004AEE8(u8 dfe, u8 dtd, u16 tpage);
u32 func_8004B054(GpuRect* tw);

void SetDrawEnv(DrawEnvPacket* p, DrawEnvDesc* env) {
    GpuRect r;
    s32 n;

    p->code[0] = func_8004AF08(env->clip.x, env->clip.y);
    p->code[1] = func_8004AFA0(env->clip.w + env->clip.x - 1, env->clip.y + env->clip.h - 1);
    p->code[2] = func_8004B038(env->ofs[0], env->ofs[1]);
    p->code[3] = func_8004AEE8(env->dfe, env->dtd, env->tpage);
    p->code[4] = func_8004B054(&env->tw);
    p->code[5] = 0xE6000000;
    n = 7;
    if (env->isbg) {
        r.x = env->clip.x;
        r.y = env->clip.y;
        r.w = env->clip.w;
        r.h = env->clip.h;
        r.w = (r.w < 0) ? 0 : (r.w > *D_80078920 - 1) ? *D_80078920 - 1 : r.w;
        r.h = (r.h < 0) ? 0 : (r.h > *D_80078922 - 1) ? *D_80078922 - 1 : r.h;
        r.x -= env->ofs[0];
        r.y -= env->ofs[1];
        ((u32*)p)[n++] = 0x60000000 | (env->b0 << 16) | (env->g0 << 8) | env->r0;
        ((u32*)p)[n++] = *(u32*)&r.x;
        ((u32*)p)[n++] = *(u32*)&r.w;
    }
    p->len = n - 1;
}
