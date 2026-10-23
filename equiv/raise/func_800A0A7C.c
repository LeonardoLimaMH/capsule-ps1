#include "common.h"

s32 func_800A0A7C(void) {
    extern s16 D_800ED88C[];
    s32 temp_v0;

    temp_v0 = func_800A0E20();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800B7264(1);
        func_800B70A0(1);
    }
    return temp_v0;
}
