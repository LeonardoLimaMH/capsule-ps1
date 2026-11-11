#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113090);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113124);

s32 func_801131B8(void) {
    extern s32 * D_80120AA8[];
    return *(*D_80120AA8);
}

s32 func_801131D0(char *msg) {
    extern char D_801103A4[];
    extern s32 *D_80120AA8[];
    extern s32 *D_80120A7C[];
    extern s32 *D_80120A88[];
    slpm_printf(D_801103A4, msg);
    *(volatile s32 *)D_80120AA8[0] = 0x80000000;
    *(volatile s32 *)D_80120A7C[0] = 0;
    *(volatile s32 *)D_80120A88[0] = 0;
    *(volatile s32 *)D_80120A88[0];
    *(volatile s32 *)D_80120AA8[0] = 0x60000000;
    return 0;
}
