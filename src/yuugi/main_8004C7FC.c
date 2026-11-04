#include "common.h"
#include "yuugi.h"

#include "common.h"

/* ReadTIM: C do SDK PsyQ importado de https://github.com/Fancy2209/psyz (MIT),
   arquivo decomp/src/libgpu/tmd.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
              short x;
              short y;
              short w;
              short h;
} RECT;

typedef struct {
    u_long mode;
    RECT* crect;
    u_long* caddr;
    RECT* prect;
    u_long* paddr;
} TIM_IMAGE;

extern TIM_IMAGE* ReadTIM(TIM_IMAGE* timimg);

extern u_long* D_800965C0;

u_long func_8004CB48(unsigned int* addr, TIM_IMAGE*);

TIM_IMAGE* ReadTIM(TIM_IMAGE* timimg) {
    u_long len = func_8004CB48((unsigned int*)D_800965C0, timimg);
    if (len == -1) {
        return ((void*)0);
    }
    D_800965C0 += len;
    return timimg;
}
