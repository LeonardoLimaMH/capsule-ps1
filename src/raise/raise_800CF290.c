#include "common.h"

typedef struct { u8 pad0[0x1D4]; s16 a, b, c; u8 pad1[0x79C - 0x1DA]; } Obj_800CF290;

extern Obj_800CF290 D_80100F38[];
extern s32 func_800B1260();
void func_800CF290(void) {
    Obj_800CF290 *p = &D_80100F38[func_800B1260() & 0xFFFF];

    p->a = 0;
    p->b = 0;
    p->c = 0;
}
