#include "common.h"

s32 func_800BEB3C(void) {
    extern void * D_800EF304[];
    M2C_FIELD((*D_800EF304), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800EF304), s32 *, 0x38) & ~1);
    return 0;
}
