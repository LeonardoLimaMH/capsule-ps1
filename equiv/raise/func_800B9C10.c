#include "common.h"

s32 func_800B9C10(void) {
    extern s16 D_800EFA4E[];
    if ((*D_800EFA4E) != 0) {
        (*D_800EFA4E) = (u16) (*D_800EFA4E) - 1;
        return 0;
    }
    return 1;
}
