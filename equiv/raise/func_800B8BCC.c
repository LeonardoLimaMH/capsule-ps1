#include "common.h"

extern u16 D_800EFA4C, D_800EFA4A;

s32 func_800B8BCC(void) {
    u16 n = D_800EFA4C, o = D_800EFA4A;
    D_800EFA4A = n;
    return (s16)(n - o);
}
