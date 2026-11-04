#include "common.h"

typedef struct { u8 pad0[0x1CC]; s16 pos[3]; s16 pad[1]; s16 vel[3]; u8 pad2[0x79C - 0x1DA]; } S_Raise;
extern S_Raise D_80100F38[];
extern s32 func_800B1260();
void func_800CF13C(void) {
    S_Raise *p = &D_80100F38[func_800B1260() & 0xFFFF];

    p->pos[0] += p->vel[0];
    p->pos[1] += p->vel[1];
    p->pos[2] += p->vel[2];
}
