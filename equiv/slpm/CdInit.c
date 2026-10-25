#include "common.h"

s32 CdInit(void) {
    extern int func_80116A08();
    extern int func_80116A30();
    extern int func_80116A58();
    s32 var_s0;

    var_s0 = 4;
loop_1:
    var_s0 -= 1;
    if (CdReset(1) == 1) {
        CdSyncCallback(&func_80116A08);
        CdReadyCallback(&func_80116A30);
        CdReadCallback(&func_80116A58);
        CdReadMode(0);
        return 1;
    }
    if (var_s0 == -1) {
        slpm_printf("CdInit: Init failed\n");
        return 0;
    }
    goto loop_1;
}
