#include "common.h"

s32 func_800A8FA0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        return 1;
    case 7:
    case 8:
    case 9:
    case 10:
        return 2;
    case 11:
    case 12:
    case 13:
    case 14:
        return 3;
    case 15:
    case 16:
    case 17:
    case 18:
        return 4;
    default:
        return 0;
    }
}
