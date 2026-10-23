#include "common.h"

void StUnSetRing(void) {
    extern s32 D_80131D40[];
    extern s8 * D_801320A4[];
    extern s8 * D_801320B0[];
    func_80112014();
    if ((*D_80131D40) == 1) {
        slpm_DsDataCallback(0);
        slpm_DsReadyCallback(0);
    } else {
        CdDataCallback(0);
        CdReadyCallback(0);
    }
    *(*D_801320A4) = 0;
    *(*D_801320B0) = 0;
    func_80112024();
}
