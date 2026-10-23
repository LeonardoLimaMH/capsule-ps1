#include "common.h"

s32 func_80050680(void) {
    extern void * D_80078B60[];
    s32 sp0;
    s32 temp_v0;

    M2C_FIELD((*D_80078B60), s16 *, 0xA) = 0;
    sp0 = 0xA;
    sp0 = 9;
    if (sp0 != -1) {
        do {
            temp_v0 = sp0 - 1;
            sp0 = temp_v0;
        } while (temp_v0 != -1);
    }
    return 0;
}
