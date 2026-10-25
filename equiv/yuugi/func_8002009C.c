#include "common.h"

extern s16 D_8005089C[];
extern s32 func_80033E5C();

s32 func_8002009C(s32 a) {
    s32 i;

    D_8005089C[0] = a != 0;
    for (i = 1; i < 11; i++) {
        D_8005089C[i] = -1;
    }
    return func_80033E5C(D_8005089C, 1);
}
