#include "common.h"

void CdReadBreak(void) {
    extern M2C_UNK D_80132088[];
    void *var_s1;

    var_s1 = D_80132088 - 0x30;
    if (M2C_FIELD(D_80132088, s32 *, 0) & 1) {
        CdDataSync(0);
        var_s1 = D_80132088 - 0x30;
    }
    M2C_FIELD(var_s1, s32 *, 0x14) = 0;
    CdSyncCallback(M2C_FIELD(D_80132088, s32 *, -0xC));
    CdReadyCallback(M2C_FIELD(D_80132088, s32 *, -8));
    if (M2C_FIELD(D_80132088, s32 *, 0) & 1) {
        CdDataCallback(M2C_FIELD(var_s1, s32 *, 0x2C));
    }
    CdControlF(9, 0);
}
