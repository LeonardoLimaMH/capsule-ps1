#include "common.h"

void *func_800A8E84(void *arg0) {
    extern u8 D_8006B2A4[];
    u8 temp_a2;

    temp_a2 = M2C_FIELD(arg0, u8 *, 0x5FA);
    return (M2C_FIELD((arg0 + ((M2C_FIELD((arg0 + temp_a2), u8 *, 0x5FB) * 0x7C) + (temp_a2 * 0x2E8))), u8 *, 0x18) * 0x58) + D_8006B2A4;
}
