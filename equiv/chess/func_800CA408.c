#include "common.h"

s8 func_800CA408(void *arg0) {
    extern u8 D_8006B2A4[];
    s32 temp_v1;

    temp_v1 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 0x58) + D_8006B2A4), u8 *, 0x13) & 3;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return -1;
    case 1:
        return 1;
    default:
        return M2C_FIELD(arg0, s8 *, 0xD);
    }
}
