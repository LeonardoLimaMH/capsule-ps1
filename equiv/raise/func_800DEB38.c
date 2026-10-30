#include "common.h"

void func_800DEB38(void) {
    extern M2C_UNK D_800F1EB4[];
    void *temp_v1;

    temp_v1 = (M2C_FIELD(D_800F1EB4, s16 *, 0) * 4) + (u8 *)D_800F1EB4;
    M2C_FIELD(D_800F1EB4, u16 *, 0x1E) = (u16) M2C_FIELD(temp_v1, u16 *, 6);
    M2C_FIELD(D_800F1EB4, u16 *, 4) = (u16) (M2C_FIELD(D_800F1EB4, u16 *, 4) - 1);
    M2C_FIELD(D_800F1EB4, u16 *, 0x20) = (u16) M2C_FIELD(temp_v1, u16 *, 8);
    M2C_FIELD(D_800F1EB4, s16 *, 0) = (s16) ((M2C_FIELD(D_800F1EB4, s16 *, 0) + 1) % 5);
}
