#include "common.h"

s32 __nedf2(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if ((arg1 != arg3) || (var_v0 = 0, (arg0 != arg2))) {
        var_v0 = 1;
        if (!(arg1 & 0x7FFFFFFF) && (arg0 == 0)) {
            var_v0 = 1;
            if (!(arg3 & 0x7FFFFFFF) && (arg2 == 0)) {
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}
