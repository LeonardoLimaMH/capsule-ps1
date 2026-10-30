#include "common.h"

s32 func_8001312C(s32 arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    void *temp_a0;

    temp_a0 = (arg0 * 0x22) + (u8 *)D_8008ED68;
    if ((((u8) M2C_FIELD(temp_a0, u8 *, 0x3D) >> 4) == 4) && (arg1 == 0)) {
        return M2C_FIELD(temp_a0, u8 *, 0x3F) | (M2C_FIELD(temp_a0, u8 *, 0x3E) << 8);
    }
    return 0xFFFF;
}
