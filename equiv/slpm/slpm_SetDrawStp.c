#include "common.h"

void slpm_SetDrawStp(void *arg0, s32 arg1) {
    s32 var_v0;

    M2C_FIELD(arg0, s8 *, 3) = 2;
    if (arg1 != 0) {
        var_v0 = 0xE6000001;
    } else {
        var_v0 = 0xE6000000;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_v0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
