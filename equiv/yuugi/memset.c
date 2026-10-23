#include "common.h"

s8 *memset(s8 *arg0, s8 arg1, s32 arg2) {
    s32 var_a2;
    s8 *var_a0;
    s8 *var_v0;

    var_a0 = arg0;
    var_a2 = arg2;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        var_v0 = var_a0;
        if (var_a2 <= 0) {
            return NULL;
        }
        do {
            *var_a0 = arg1;
            var_a2 -= 1;
            var_a0 += 1;
        } while (var_a2 > 0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
