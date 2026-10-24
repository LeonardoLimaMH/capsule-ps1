#include "common.h"

s32 func_800AA45C(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800ED8DC[];
    s32 var_v0;

    var_v0 = -1;
    if ((*D_800ED8DC) == 1) {
        var_v0 = 0;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
            var_v0 = -1;
        }
    }
    return var_v0;
}
