#include "common.h"

u32 func_800160F8(u32 arg0) {
    extern M2C_UNK D_8008ED68[];
    if (arg0 < 0x2001U) {
        M2C_FIELD(D_8008ED68, u32 *, 0xA74) = arg0;
    }
    return M2C_FIELD(D_8008ED68, u32 *, 0xA74);
}
