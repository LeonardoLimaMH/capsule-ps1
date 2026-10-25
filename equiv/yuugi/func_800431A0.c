#include "common.h"

extern s32 D_80072E2C[];

s32 func_800431A0(s32 i, s32 value) {
    s32 old = D_80072E2C[i];

    if (value != old) {
        D_80072E2C[i] = value;
    }
    return old;
}
