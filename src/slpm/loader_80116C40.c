#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116C40", CdControl);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116C40", CdControlF);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116C40", CdControlB);

s32 CdMix(void) {
    slpm_CD_vol();
    return 1;
}

s32 CdGetSector(void) {
    return slpm_CD_getsector() == 0;
}

s32 CdGetSector2(void) {
    return slpm_CD_getsector2() == 0;
}
