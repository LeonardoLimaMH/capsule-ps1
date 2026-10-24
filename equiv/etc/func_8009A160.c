#include "common.h"

void func_8009A160(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 var_v0;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 3:
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0) {
            if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 4) || ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0))) {
                goto block_6;
            }
        default:
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
        } else {
        case 4:
block_6:
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
}
