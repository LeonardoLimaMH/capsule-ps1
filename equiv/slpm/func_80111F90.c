#include "common.h"

s32 func_80111F90(void) {
    extern void * D_801208BC[];
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD((*D_801208BC), s32 *, 4) & 1) {
        var_v0 = 1;
        if (!(M2C_FIELD((*D_801208BC), s32 *, 0) & 1)) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
