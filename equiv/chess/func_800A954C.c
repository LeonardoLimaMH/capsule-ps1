#include "common.h"

void func_800A954C(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 0) - ((s32) ((M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0)) * arg4) / arg3));
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 4) - ((s32) ((M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4)) * arg4) / arg3));
    if ((arg3 / 2) < arg4) {
        M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
        return;
    }
    M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
}
