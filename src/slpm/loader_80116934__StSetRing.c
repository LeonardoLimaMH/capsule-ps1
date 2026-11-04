#include "common.h"

#include "common.h"

void StSetRing(s32 arg0, s32 arg1) {
    extern s32 D_80134ED0[];
    extern s32 D_80134ED4[];
    (*D_80134ED0) = arg0;
    (*D_80134ED4) = arg1;
    StClearRing();
}
