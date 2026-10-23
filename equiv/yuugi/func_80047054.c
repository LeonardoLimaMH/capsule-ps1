#include "common.h"

void func_80047054(void) {
    extern M2C_UNK (*D_80073084)(u8, M2C_UNK *);
    extern M2C_UNK (*D_80073088)(u8, M2C_UNK *);
    extern u8 * D_8007334C[];
    extern M2C_UNK D_80073365[];
    extern M2C_UNK D_80094C18[];
    extern M2C_UNK D_80094C20[];
    s32 temp_v0;
    s32 var_v0;
    u8 temp_s2;

    temp_s2 = *(*D_8007334C) & 3;
loop_1:
    temp_v0 = func_800459CC();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 & 2;
        if (temp_v0 & 4) {
            if (D_80073088 != NULL) {
                D_80073088(M2C_FIELD((*D_80073365), u8 *, 0), (*D_80094C20));
            }
            var_v0 = temp_v0 & 2;
        }
        if ((var_v0 != 0) && (D_80073084 != NULL)) {
            D_80073084(M2C_FIELD((*D_80073365), u8 *, -1), (*D_80094C18));
        }
        goto loop_1;
    }
    *(*D_8007334C) = temp_s2;
}
