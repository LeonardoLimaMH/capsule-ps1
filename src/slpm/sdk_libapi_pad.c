#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libapi_pad", slpm_SetInitPadFlag);

s32 slpm_ReadInitPadFlag(void) {
    extern s32 D_801208B4[];
    return (*D_801208B4);
}
