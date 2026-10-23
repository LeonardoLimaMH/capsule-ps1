#include "common.h"

s32 func_801119E4(s32 arg0, s32 arg1) {
    extern M2C_UNK D_801334A8[];
    void *temp_a0;

    temp_a0 = (arg0 * 0x22) + (*D_801334A8);
    if ((((u8) M2C_FIELD(temp_a0, u8 *, 1) >> 4) == 4) && (arg1 == 0)) {
        return M2C_FIELD(temp_a0, u8 *, 3) | (M2C_FIELD(temp_a0, u8 *, 2) << 8);
    }
    return 0xFFFF;
}
