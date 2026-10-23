#include "common.h"

s32 func_80113124(void) {
    extern s32 * D_80120A88[];
    s32 sp10;
    s32 temp_v0;

    sp10 = 0x100000;
    if (*(*D_80120A88) & 0x01000000) {
loop_2:
        temp_v0 = sp10 - 1;
        sp10 = temp_v0;
        if (temp_v0 == -1) {
            func_801131D0("MDEC_out_sync");
            return -1;
        }
        if (!(*(*D_80120A88) & 0x01000000)) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
