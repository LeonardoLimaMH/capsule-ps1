#include "common.h"

s32 func_801131D0(s32 arg0) {
    extern s32 * D_80120A7C;
    extern s32 * D_80120A88;
    extern s32 * D_80120AA8;
    slpm_printf("%s timeout:\n\0\0$Id: sys.c,v 1.140 1998/01/12 07:52:27 noda Exp $", arg0);
    *D_80120AA8 = 0x80000000;
    *D_80120A7C = 0;
    *D_80120A88 = 0;
    *D_80120AA8 = 0x60000000;
    return 0;
}
