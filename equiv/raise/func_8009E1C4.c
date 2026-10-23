#include "common.h"

s32 func_8009E1C4(void) {
    extern s16 D_800ED88C[];
    extern s32 D_800F0550[];
    extern s32 D_800F0578[];
    s32 temp_v0;

    temp_v0 = func_8009DFAC();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800BCF98(1);
        (*D_800F0550) = (*D_800F0578);
    }
    return temp_v0;
}
