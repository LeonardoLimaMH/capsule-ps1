#include "common.h"

typedef struct { u8 pad0[0x1D4]; s16 a, b, c; u8 pad1[0x79C - 0x1DA]; } Obj_800CF290;

extern u8 D_80100F38[];
extern s32 func_800B1260();
void func_800CF290(void) {
    u8 *p = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    s16 *q = (s16 *)(p + 0x1D4);

    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
}
