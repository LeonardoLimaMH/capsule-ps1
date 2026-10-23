#include "common.h"

s32 func_800D2B34(void) {
    extern M2C_UNK D_80100F38[];
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = func_800B1260() & 0xFFFF;
    if (temp_v1 != 0xFFFF) {
        temp_v0 = func_800CE128(M2C_FIELD(((temp_v1 * 0x79C) + (*D_80100F38)), s16 *, 0x326));
        if ((temp_v0 == 2) || (temp_v0 == 6)) {
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
