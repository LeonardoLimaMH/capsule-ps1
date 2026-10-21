#include "common.h"

void slpm_SetDrawArea(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_80114FC0(M2C_FIELD(arg1, s16 *, 0), M2C_FIELD(arg1, s16 *, 2));
    M2C_FIELD(arg0, s32 *, 8) = func_80115058((s16) (((u16) M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, u16 *, 4)) - 1), (s16) (((u16) M2C_FIELD(arg1, s16 *, 2) + M2C_FIELD(arg1, u16 *, 6)) - 1));
}

void slpm_SetDrawOffset(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_801150F0(M2C_FIELD(arg1, s16 *, 0), M2C_FIELD(arg1, s16 *, 2));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
