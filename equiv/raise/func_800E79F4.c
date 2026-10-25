#include "common.h"

extern u8 D_800859F2;
extern s32 D_800F2C7C[];

s32 func_800E79F4(s32 a0) {
    return a0 * D_800F2C7C[D_800859F2 & 7];
}
