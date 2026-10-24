#include "common.h"

void *TransMatrix(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}
