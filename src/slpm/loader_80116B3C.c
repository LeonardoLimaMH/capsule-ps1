#include "common.h"

void CdFlush(void) {
    slpm_CD_flush();
}

extern s32 D_80131D28;

s32 CdSetDebug(s32 arg0) {
    s32 old = D_80131D28;

    D_80131D28 = arg0;
    return old;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdComstr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdIntstr);

void CdSync(void) {
    slpm_CD_sync();
}

void CdReady(void) {
    slpm_CD_ready();
}

extern s32 D_80131D1C;

s32 CdSyncCallback(s32 arg0) {
    s32 old = D_80131D1C;

    D_80131D1C = arg0;
    return old;
}

extern s32 D_80131D20;

s32 CdReadyCallback(s32 arg0) {
    s32 old = D_80131D20;

    D_80131D20 = arg0;
    return old;
}
