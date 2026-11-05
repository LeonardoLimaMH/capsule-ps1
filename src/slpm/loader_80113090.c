#include "common.h"

extern s32 *D_80120AA8[];
extern s32 *D_80120A88[];
extern char D_80110384[], D_80110394[];
s32 func_801131D0(char *msg);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113090);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80113090", func_80113124);

s32 func_801131B8(void) {
    extern s32 * D_80120AA8[];
    return *(*D_80120AA8);
}

extern s32 *D_80120AA8[];
extern s32 *D_80120A7C[];
extern s32 *D_80120A88[];
extern char D_801103A4[], D_80110384[], D_80110394[];
extern void slpm_printf(char *fmt, ...);
s32 func_801131D0(char *msg) {
    volatile s32 *a;
    volatile s32 *b;
    slpm_printf(D_801103A4, msg);
    *(volatile s32 *)D_80120AA8[0] = 0x80000000;
    *(volatile s32 *)D_80120A7C[0] = 0;
    *(volatile s32 *)D_80120A88[0] = 0;
    a = D_80120A88[0];
    b = D_80120AA8[0];
    *a;
    *b = 0x60000000;
    return 0;
}
