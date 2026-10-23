#include "common.h"

s32 func_800CAE6C(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x624);
    switch (temp_v0) {
    case 5:
        return 3;
    case 6:
        return 4;
    case 7:
        return 2;
    case 3:
    case 4:
        return 1;
    default:
        return 0;
    }
}
