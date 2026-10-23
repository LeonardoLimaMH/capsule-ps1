#include "common.h"

void func_800F5188(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s8 temp_v0;

    M2C_FIELD(D_8008ED68, u32 *, 0xA58) = (u32) (M2C_FIELD(D_8008ED68, u32 *, 0xA58) + 1);
    M2C_FIELD(arg0, u16 *, 0x3A) = (u16) (M2C_FIELD(arg0, u16 *, 0x3A) + 0xE);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (M2C_FIELD(arg0, u16 *, 0x3C) + 0xE);
    temp_v0 = 0x7F - ((M2C_FIELD(D_8008ED68, u32 *, 0xA58) * 0x7F) / 30);
    M2C_FIELD(arg0, s8 *, 0x32) = temp_v0;
    M2C_FIELD(arg0, s8 *, 0x31) = temp_v0;
    M2C_FIELD(arg0, s8 *, 0x30) = temp_v0;
    if ((u32) M2C_FIELD(D_8008ED68, u32 *, 0xA58) >= 0x1EU) {
        func_80013920(arg0, arg0, MULTU_HI((M2C_FIELD(D_8008ED68, u32 *, 0xA58) * 0x7F), 0x88888889));
    }
}
