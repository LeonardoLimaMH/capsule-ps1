#include "common.h"
#include "yuugi.h"

s32 DsSystemStatus(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_80044AF8(0);
    var_v0 = temp_v0;
    if (temp_v0 == 1) {
        var_v0 = temp_v0;
        if (DsQueueLen() > 0) {
            var_v0 = 2;
        }
    }
    return var_v0;
}
