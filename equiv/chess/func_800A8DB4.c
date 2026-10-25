#include "common.h"

s32 func_800A8DB4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), s32 *, 0x30);
    if (!(temp_v1 & 0x02000000)) {
        return (temp_v1 & 0x20000000) != 0;
    }
    return 1;
}
