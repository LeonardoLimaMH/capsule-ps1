#include "common.h"

void func_800D0F10(void) {
    extern u8 D_80091618[];
    extern u8 D_80100F38[];
    extern u8 D_80103D38[];
    s16 var_v0;
    s32 temp_v0;
    void *temp_a0;
    void *temp_v1;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_v1 = (temp_v0 * 0x79C) + D_80100F38;
    temp_a0 = (M2C_FIELD(D_80103D38, s16 *, 4) * 6) + D_80103D38;
    M2C_FIELD(temp_a0, u16 *, 8) = (u16) M2C_FIELD(temp_v1, u16 *, 0x336);
    M2C_FIELD(temp_a0, u16 *, 0xA) = (u16) M2C_FIELD(temp_v1, u16 *, 0x338);
    M2C_FIELD(temp_a0, u16 *, 0xC) = (u16) M2C_FIELD(((temp_v0 * 0x1A8) + D_80091618), u16 *, 0x90);
    M2C_FIELD(D_80103D38, u16 *, 6) = (u16) (M2C_FIELD(D_80103D38, u16 *, 6) + 1);
    var_v0 = (u16) M2C_FIELD(D_80103D38, s16 *, 4) + 1;
    if (M2C_FIELD(D_80103D38, s16 *, 4) == 0x3F) {
        var_v0 = 0;
    }
    M2C_FIELD(D_80103D38, s16 *, 4) = var_v0;
}
