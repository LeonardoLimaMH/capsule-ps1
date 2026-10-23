#include "common.h"

u8 *strcpy(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_v0;
    u8 temp_v0;
    u8 temp_v0_2;

    var_v0 = NULL;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v0 = *arg1;
        var_a1 = arg1 + 1;
        var_a0 = arg0 + 1;
        *arg0 = temp_v0;
        if (temp_v0 != 0) {
            do {
                temp_v0_2 = *var_a1;
                var_a1 += 1;
                *var_a0 = temp_v0_2;
                var_a0 += 1;
            } while (temp_v0_2 != 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}
