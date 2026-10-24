#include "common.h"

u32 func_80020304(u32 arg0) {
    extern M2C_UNK D_8008ED68[];
    if (arg0 != 0) {
        return (u32) (rand() + M2C_FIELD(D_8008ED68, s32 *, 0x18)) % arg0;
    }
    return 0U;
}
