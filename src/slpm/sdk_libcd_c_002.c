#include "common.h"

void StClearRing(void) {
    extern s32 D_80134E90[];
    extern s16 D_80134E94[];
    extern s32 D_80134E9C[];
    extern s32 D_80134EAC[];
    extern s32 D_80134EB4[];
    extern s32 D_80134EB8[];
    extern s32 D_80134EBC[];
    extern s32 D_80134ED4[];
    (*D_80134EBC) = 0;
    (*D_80134EB8) = 0;
    (*D_80134EB4) = 0;
    (*D_80134EAC) = 0;
    init_ring_status(0, (*D_80134ED4));
    (*D_80134E9C) = 0;
    (*D_80134E94) = 0;
    (*D_80134E90) = 0;
}
