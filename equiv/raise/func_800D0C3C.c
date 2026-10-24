#include "common.h"

void func_800D0C3C(s16 arg0) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    extern M2C_UNK D_80103D38[];
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v0 = func_800B1260();
    M2C_FIELD(D_80103D38, s16 *, 0) = arg0;
    temp_v0_2 = temp_v0 & 0xFFFF;
    M2C_FIELD(D_80103D38, s16 *, 4) = 1;
    M2C_FIELD(D_80103D38, s16 *, 6) = 1;
    M2C_FIELD(D_80103D38, s16 *, 0x18A) = 1;
    temp_v1 = (temp_v0_2 * 0x79C) + D_80100F38;
    M2C_FIELD(D_80103D38, s16 *, 2) = 0;
    M2C_FIELD(D_80103D38, s16 *, 0x188) = 0;
    M2C_FIELD(D_80103D38, u16 *, 8) = (u16) M2C_FIELD(temp_v1, u16 *, 0x332);
    M2C_FIELD(D_80103D38, u16 *, 0xA) = (u16) M2C_FIELD(temp_v1, u16 *, 0x334);
    M2C_FIELD(D_80103D38, u16 *, 0xC) = (u16) M2C_FIELD(((temp_v0_2 * 0x1A8) + D_80091618), u16 *, 0x90);
}
