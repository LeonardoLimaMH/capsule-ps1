#include "common.h"

void func_80112E84(s32 arg0) {
    extern M2C_UNK D_80120964;
    extern M2C_UNK D_801209E8;
    extern s32 * D_80120A7C;
    extern s32 * D_80120A88;
    extern s32 * D_80120AA8;
    switch (arg0) {                                 /* irregular */
    case 0:
        *D_80120AA8 = 0x80000000;
        *D_80120A7C = 0;
        *D_80120A88 = 0;
        *D_80120AA8 = 0x60000000;
        func_80112F74(D_80120964, 0x20);
        func_80112F74(D_801209E8, 0x20);
        return;
    case 1:
        *D_80120AA8 = 0x80000000;
        *D_80120A7C = 0;
        *D_80120A88 = 0;
        *D_80120AA8 = 0x60000000;
        return;
    default:
        slpm_printf("MDEC_rest:bad option(%d)\n", arg0);
        return;
    }
}
