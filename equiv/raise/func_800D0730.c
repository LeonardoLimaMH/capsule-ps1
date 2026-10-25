#include "common.h"

s32 func_800D0730(s16 *a0, s16 a1, s16 a2, s16 a3) {
    s32 t = a3 + 4;
    s32 c = (a3 + 1) * 50;
    s32 r;
    a0[0] = (a2 - t) * 100 + c;
    r = (t - a1) * 100 - c;
    a0[1] = 0;
    a0[2] = r;
    return r;
}
