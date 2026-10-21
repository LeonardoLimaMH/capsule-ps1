#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_ResetCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_InterruptCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_DMACallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_VSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_VSyncCallbacks);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_StopCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libetc_intr", slpm_RestartCallback);

u16 slpm_CheckCallback(void) {
    extern u16 D_801321DE[];
    return (*D_801321DE);
}

u16 slpm_GetIntrMask(void) {
    extern u16 * D_8013326C[];
    return *(*D_8013326C);
}

u16 slpm_SetIntrMask(u16 arg0) {
    extern u16 * D_8013326C[];
    u16 temp_v0;

    temp_v0 = *(*D_8013326C);
    *(*D_8013326C) = arg0;
    return temp_v0;
}
