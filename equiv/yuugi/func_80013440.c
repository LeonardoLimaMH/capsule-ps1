#include "common.h"

void func_80013440(u16 arg0) {
    extern M2C_UNK D_8008ED68[];
    u16 temp_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xFE) != arg0) {
        M2C_FIELD(D_8008ED68, u16 *, 0xFE) = arg0;
        M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
    }
    temp_v0 = M2C_FIELD(D_8008ED68, u16 *, 0xFC) + 1;
    M2C_FIELD(D_8008ED68, u16 *, 0xFC) = temp_v0;
    if ((u32) (temp_v0 & 0xFFFF) >= 0x41U) {
        M2C_FIELD(D_8008ED68, s32 *, 0xF4) = 1;
        ResetRCnt(0xF2000003);
        M2C_FIELD(D_8008ED68, u16 *, 0xFC) = 0U;
        M2C_FIELD(D_8008ED68, u16 *, 0xFE) = 0xFFU;
    }
}
