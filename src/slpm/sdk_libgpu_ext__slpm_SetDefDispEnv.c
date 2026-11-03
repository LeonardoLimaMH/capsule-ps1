#include "common.h"

#include "common.h"

/* slpm_SetDefDispEnv: C do SDK PsyQ importado de https://github.com/Fancy2209/psyz (MIT),
   arquivo decomp/src/libgpu/ext.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
              short x;
              short y;
              short w;
              short h;
} RECT;

typedef struct {
               RECT disp;
               RECT screen;
               u_char isinter;
               u_char isrgb24;
               u_char pad0;
               u_char pad1;
} DISPENV;

DISPENV* slpm_SetDefDispEnv(DISPENV* env, int x, int y, int w, int h) {
    env->disp.x = x;
    env->disp.y = y;
    env->disp.w = w;
    env->disp.h = h;
    env->screen.x = 0;
    env->screen.y = 0;
    env->screen.w = 0;
    env->screen.h = 0;
    env->isrgb24 = 0;
    env->isinter = 0;
    env->pad1 = 0;
    env->pad0 = 0;
    return env;
}
