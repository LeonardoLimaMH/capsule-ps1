#include "common.h"

s32 func_800133A4(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_8008ED68, s32 *, 0x14) = (s32) (M2C_FIELD(D_8008ED68, s32 *, 0x14) + 1);
    return 0;
}
