#include "common.h"

void CdFlush(void) {
    slpm_CD_flush();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdSetDebug);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdComstr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdIntstr);

void CdSync(void) {
    slpm_CD_sync();
}

void CdReady(void) {
    slpm_CD_ready();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116B3C", CdReadyCallback);
