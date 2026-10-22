#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_80119444);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_801196A4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_80119770);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadBreak);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdRead);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadSync);

extern s32 D_80132054;

s32 CdReadCallback(s32 func) {
    s32 old = D_80132054;

    D_80132054 = func;
    return old;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadMode);
