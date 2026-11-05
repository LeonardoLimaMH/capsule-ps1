#ifndef RAISE_RING_H
#define RAISE_RING_H

#include "types.h"

typedef struct {
    s16 unk_0;
    s16 unk_2;
    u16 idx;
    u16 cnt;
    s16 unk_8;
    s16 a[32];
    s16 b[32];
    s16 c[32];
} D_80100E60_t;

extern D_80100E60_t D_80100E60;

#endif
