#include "common.h"

#include "common.h"

/* SetDefDrawEnv: C do SDK PsyQ importado de https://github.com/Fancy2209/psyz (MIT),
   arquivo decomp/src/libgpu/ext.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
long GetVideoMode(void);

typedef struct {
              short x;
              short y;
              short w;
              short h;
} RECT;

typedef struct {
               u_long tag;
              u_long code[15];
} DR_ENV;

typedef struct {
               RECT clip;
               short ofs[2];
               RECT tw;
               u_short tpage;
               u_char dtd;
               u_char dfe;
               u_char isbg;
               u_char r0, g0, b0;
               DR_ENV dr_env;
} DRAWENV;

extern DRAWENV* SetDefDrawEnv(DRAWENV* env, int x, int y, int w, int h);

DRAWENV* SetDefDrawEnv(DRAWENV* env, int x, int y, int w, int h) {
    int video_mode = GetVideoMode();
    env->clip.x = x;
    env->clip.y = y;
    env->clip.w = w;
    env->clip.h = h;
    env->tw.x = 0;
    env->tw.y = 0;
    env->tw.w = 0;
    env->tw.h = 0;
    env->r0 = 0;
    env->g0 = 0;
    env->b0 = 0;
    env->dtd = 1;
    if (video_mode) {
        env->dfe = h <= 288;
    } else {
        env->dfe = h <= 256;
    }
    env->ofs[0] = x;
    env->ofs[1] = y;
    env->tpage = ((((0) & 0x3) << 7) | (((0) & 0x3) << 5) | (((0) & 0x100) >> 4) | (((640) & 0x3ff) >> 6) | (((0) & 0x200) << 2));
    env->isbg = 0;
    return env;
}
