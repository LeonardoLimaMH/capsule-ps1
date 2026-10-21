#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", DecDCTin);

void DecDCTout(void) {
    func_80113004();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", DecDCTinSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", DecDCToutSync);

void DecDCTinCallback(s32 arg0) {
    slpm_DMACallback(0, arg0);
}

void DecDCToutCallback(s32 arg0) {
    slpm_DMACallback(1, arg0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80112D28", func_80112E84);
