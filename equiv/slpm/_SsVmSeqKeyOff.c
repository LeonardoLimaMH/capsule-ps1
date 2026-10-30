#include "common.h"

void _SsVmSeqKeyOff(s16 arg0) {
    extern s32 D_801332F4[];
    extern M2C_UNK D_80137C98[];
    extern s8 D_8013847C[];
    extern s16 D_8013849A[];
    s32 var_a0;
    s32 var_s0;

    var_s0 = 0;
    if ((*D_8013847C) > 0) {
        var_a0 = 0 & 0xFF;
        do {
            if (!((*D_801332F4) & (1 << var_a0)) && (*(s16 *)((u8 *)D_80137C98 + (var_a0 * 0x36)) == arg0)) {
                (*D_8013849A) = var_s0 & 0xFF;
                _SsVmKeyOffNow(0);
            }
            var_s0 += 1;
            var_a0 = var_s0 & 0xFF;
        } while ((var_s0 & 0xFF) < (*D_8013847C));
    }
}
