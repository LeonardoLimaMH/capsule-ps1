#include "common.h"

void *func_800A8F3C(void *arg0) {
    extern u8 D_8006B2A4[];
    return (M2C_FIELD((arg0 + ((M2C_FIELD(arg0, u8 *, 0x70C) * 0x7C) + ((1 - M2C_FIELD(arg0, u8 *, 0x5FA)) * 0x2E8))), u8 *, 0x18) * 0x58) + D_8006B2A4;
}
