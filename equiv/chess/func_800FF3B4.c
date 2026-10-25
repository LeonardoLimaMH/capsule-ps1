#include "common.h"

void func_800FF3B4(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_t0;

    temp_t0 = arg2 - arg3;
    M2C_FIELD(arg4, s16 *, 0) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0) * temp_t0) + (M2C_FIELD(arg1, s16 *, 0) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 2) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 2) * temp_t0) + (M2C_FIELD(arg1, s16 *, 2) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 4) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 4) * temp_t0) + (M2C_FIELD(arg1, s16 *, 4) * arg3)) / arg2);
}
