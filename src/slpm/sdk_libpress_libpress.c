#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libpress_libpress", DecDCTReset);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libpress_libpress", DecDCTGetEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libpress_libpress", DecDCTPutEnv);

u16 DecDCTBufSize(u16 *arg0) {
    return *arg0;
}
