#include "common.h"

void func_800DD3D8(s16 arg0, s16 arg1) {
    extern u8 D_80018600[];
    extern int func_800DD2EC();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD2EC, D_80018600, 1);
    M2C_FIELD(temp_v0, s16 *, 0x1E) = arg1;
    M2C_FIELD(temp_v0, s16 *, 0x20) = arg0;
}
