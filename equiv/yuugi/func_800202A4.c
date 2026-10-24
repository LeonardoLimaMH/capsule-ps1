#include "common.h"

u32 func_800202A4(u32 arg0) {
    extern M2C_UNK D_8008ED68[];
    if (arg0 != 0) {
        return (u32) (rand() + M2C_FIELD(D_8008ED68, s32 *, 0xC4)) % arg0;
    }
    return 0U;
}
