#include "common.h"

void func_800DEBA0(s16 arg0, s16 arg1) {
    extern M2C_UNK D_800F1EB4[];
    void *temp_v0;

    temp_v0 = (M2C_FIELD(D_800F1EB4, s16 *, 2) * 4) + D_800F1EB4;
    M2C_FIELD(temp_v0, s16 *, 6) = arg1;
    M2C_FIELD(temp_v0, s16 *, 8) = arg0;
    M2C_FIELD(D_800F1EB4, u16 *, 4) = (u16) (M2C_FIELD(D_800F1EB4, u16 *, 4) + 1);
    M2C_FIELD(D_800F1EB4, s16 *, 2) = (s16) ((M2C_FIELD(D_800F1EB4, s16 *, 2) + 1) % 5);
}
