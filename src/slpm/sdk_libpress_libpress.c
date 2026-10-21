#include "common.h"

void DecDCTReset(s32 arg0) {
    if (arg0 == 0) {
        slpm_ResetCallback();
    }
    func_80112E84(arg0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libpress_libpress", DecDCTGetEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libpress_libpress", DecDCTPutEnv);
