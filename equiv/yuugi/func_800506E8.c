#include "common.h"

s32 func_800506E8(void) {
    extern void * D_80078B64[];
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD((*D_80078B64), s32 *, 4) & 1) {
        var_v0 = 1;
        if (!(M2C_FIELD((*D_80078B64), s32 *, 0) & 1)) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
