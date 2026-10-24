#include "common.h"

extern u8 D_800ED8F0[];

s32 func_800A8CB4(s32 idx) {
    return *(s32 *)(D_800ED8F0 + (idx << 5));
}
