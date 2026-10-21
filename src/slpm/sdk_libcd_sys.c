#include "common.h"

u8 CdStatus(void) {
    extern u8 D_80131D2C[];
    return (*D_80131D2C);
}

u8 CdMode(void) {
    extern u8 D_80131D3C[];
    return (*D_80131D3C);
}

u8 CdLastCom(void) {
    extern u8 D_80131D3D[];
    return (*D_80131D3D);
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_sys", CdLastPos);
