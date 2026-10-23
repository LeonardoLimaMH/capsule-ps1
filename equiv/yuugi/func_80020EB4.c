#include "common.h"

s32 func_80020EB4(void) {
    extern M2C_UNK D_8008F7E0[];
    if (func_80012C38() == 0) {
        return M2C_FIELD((*D_8008F7E0), u8 *, 0) == M2C_FIELD((*D_8008F7E0), u8 *, 1);
    }
    return 0;
}
