#include "common.h"

void CdDataCallback(s32 arg0) {
    slpm_DMACallback(3, arg0);
}

void CdDataSync(void) {
    slpm_CD_datasync();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011705C", CdIntToPos);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011705C", CdPosToInt);
