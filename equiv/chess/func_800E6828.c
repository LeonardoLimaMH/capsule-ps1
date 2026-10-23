#include "common.h"

void func_800E6828(void *arg0) {
    s32 temp_a0;
    s32 temp_lo;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_a0 + 1);
    if (temp_a0 > 0x1E) {
        func_80013920(arg0, arg0, 0x1E);
        return;
    }
    temp_lo = (s32) (temp_a0 * 0xFF) / 30;
    M2C_FIELD(arg0, s16 *, 0x44) = (s16) ((s32) (temp_a0 << 0xB) / 30);
    M2C_FIELD(arg0, s8 *, 0x36) = (s8) temp_lo;
    M2C_FIELD(arg0, s8 *, 0x35) = (s8) temp_lo;
    M2C_FIELD(arg0, s8 *, 0x34) = (s8) temp_lo;
    M2C_FIELD(arg0, s8 *, 0x32) = (s8) temp_lo;
    M2C_FIELD(arg0, s8 *, 0x31) = (s8) temp_lo;
    M2C_FIELD(arg0, s8 *, 0x30) = (s8) temp_lo;
}
